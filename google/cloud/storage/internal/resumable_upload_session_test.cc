// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/internal/resumable_upload_session.h"
#include "google/cloud/testing_util/status_matchers.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace storage {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {
namespace {

using ::google::cloud::testing_util::StatusIs;
using ::testing::HasSubstr;

TEST(ResumableUploadResponseTest, Base) {
  auto actual = ResumableUploadResponse::FromHttpResponse(
                    HttpResponse{200,
                                 R"""({"name": "test-object-name"})""",
                                 {{"ignored-header", "value"},
                                  {"location", "location-value"},
                                  {"range", "bytes=0-1999"}}})
                    .value();
  ASSERT_TRUE(actual.payload.has_value());
  EXPECT_EQ("test-object-name", actual.payload->name());
  EXPECT_EQ("location-value", actual.upload_session_url);
  EXPECT_EQ(2000, actual.committed_size.value_or(0));
  EXPECT_EQ(ResumableUploadResponse::kDone, actual.upload_state);

  std::ostringstream os;
  os << actual;
  auto actual_str = os.str();
  EXPECT_THAT(actual_str, HasSubstr("upload_session_url=location-value"));
  EXPECT_THAT(actual_str, HasSubstr("committed_size=2000"));
  EXPECT_THAT(actual_str, HasSubstr("annotations="));
}

TEST(ResumableUploadResponseTest, NoLocation) {
  auto actual = ResumableUploadResponse::FromHttpResponse(
                    HttpResponse{308, {}, {{"range", "bytes=0-1999"}}})
                    .value();
  EXPECT_FALSE(actual.payload.has_value());
  EXPECT_EQ("", actual.upload_session_url);
  EXPECT_EQ(2000, actual.committed_size.value_or(0));
  EXPECT_EQ(ResumableUploadResponse::kInProgress, actual.upload_state);
}

TEST(ResumableUploadResponseTest, NoRange) {
  auto actual = ResumableUploadResponse::FromHttpResponse(
                    HttpResponse{201,
                                 R"""({"name": "test-object-name"})""",
                                 {{"location", "location-value"}}})
                    .value();
  ASSERT_TRUE(actual.payload.has_value());
  EXPECT_EQ("test-object-name", actual.payload->name());
  EXPECT_EQ("location-value", actual.upload_session_url);
  EXPECT_FALSE(actual.committed_size.has_value());
  EXPECT_EQ(ResumableUploadResponse::kDone, actual.upload_state);
}

TEST(ResumableUploadResponseTest, MissingBytesInRange) {
  auto actual = ResumableUploadResponse::FromHttpResponse(HttpResponse{
      308, {}, {{"location", "location-value"}, {"range", "units=0-2000"}}});
  EXPECT_THAT(actual,
              StatusIs(StatusCode::kInternal, HasSubstr("units=0-2000")));
}

TEST(ResumableUploadResponseTest, MissingRangeEnd) {
  auto actual = ResumableUploadResponse::FromHttpResponse(
      HttpResponse{308, {}, {{"range", "bytes=0-"}}});
  EXPECT_THAT(actual, StatusIs(StatusCode::kInternal, HasSubstr("bytes=0-")));
}

TEST(ResumableUploadResponseTest, InvalidRangeEnd) {
  auto actual = ResumableUploadResponse::FromHttpResponse(
      HttpResponse{308, {}, {{"range", "bytes=0-abcd"}}});
  EXPECT_THAT(actual,
              StatusIs(StatusCode::kInternal, HasSubstr("bytes=0-abcd")));
}

TEST(ResumableUploadResponseTest, InvalidRangeBegin) {
  auto actual = ResumableUploadResponse::FromHttpResponse(
      HttpResponse{308, {}, {{"range", "bytes=abcd-2000"}}});
  EXPECT_THAT(actual,
              StatusIs(StatusCode::kInternal, HasSubstr("bytes=abcd-2000")));
}

TEST(ResumableUploadResponseTest, UnexpectedRangeBegin) {
  auto actual = ResumableUploadResponse::FromHttpResponse(
      HttpResponse{308, {}, {{"range", "bytes=3000-2000"}}});
  EXPECT_THAT(actual,
              StatusIs(StatusCode::kInternal, HasSubstr("bytes=3000-2000")));
}

TEST(ResumableUploadResponseTest, NegativeEnd) {
  auto actual = ResumableUploadResponse::FromHttpResponse(
      HttpResponse{308, {}, {{"range", "bytes=0--7"}}});
  EXPECT_THAT(actual, StatusIs(StatusCode::kInternal, HasSubstr("bytes=0--7")));
}

}  // namespace
}  // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage
}  // namespace cloud
}  // namespace google
