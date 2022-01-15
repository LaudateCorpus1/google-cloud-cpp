// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/videointelligence/v1/video_intelligence.proto

#include "google/cloud/videointelligence/video_intelligence_connection.h"
#include "google/cloud/videointelligence/internal/video_intelligence_option_defaults.h"
#include "google/cloud/videointelligence/internal/video_intelligence_stub_factory.h"
#include "google/cloud/videointelligence/video_intelligence_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace videointelligence {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

VideoIntelligenceServiceConnection::~VideoIntelligenceServiceConnection() =
    default;

future<StatusOr<google::cloud::videointelligence::v1::AnnotateVideoResponse>>
VideoIntelligenceServiceConnection::AnnotateVideo(
    google::cloud::videointelligence::v1::AnnotateVideoRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::videointelligence::v1::AnnotateVideoResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

namespace {
class VideoIntelligenceServiceConnectionImpl
    : public VideoIntelligenceServiceConnection {
 public:
  VideoIntelligenceServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<videointelligence_internal::VideoIntelligenceServiceStub>
          stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<VideoIntelligenceServiceRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<VideoIntelligenceServiceBackoffPolicyOption>()
                ->clone()),
        polling_policy_prototype_(
            options.get<VideoIntelligenceServicePollingPolicyOption>()
                ->clone()),
        idempotency_policy_(
            options
                .get<
                    VideoIntelligenceServiceConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~VideoIntelligenceServiceConnectionImpl() override = default;

  future<StatusOr<google::cloud::videointelligence::v1::AnnotateVideoResponse>>
  AnnotateVideo(
      google::cloud::videointelligence::v1::AnnotateVideoRequest const& request)
      override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::videointelligence::v1::AnnotateVideoResponse>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::videointelligence::v1::AnnotateVideoRequest const&
                   request) {
          return stub->AsyncAnnotateVideo(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::GetOperationRequest const& request) {
          return stub->AsyncGetOperation(cq, std::move(context), request);
        },
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::longrunning::CancelOperationRequest const& request) {
          return stub->AsyncCancelOperation(cq, std::move(context), request);
        },
        &google::cloud::internal::ExtractLongRunningResultResponse<
            google::cloud::videointelligence::v1::AnnotateVideoResponse>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->AnnotateVideo(request),
        polling_policy_prototype_->clone(), __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<videointelligence_internal::VideoIntelligenceServiceStub>
      stub_;
  std::unique_ptr<VideoIntelligenceServiceRetryPolicy const>
      retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
  std::unique_ptr<VideoIntelligenceServiceConnectionIdempotencyPolicy>
      idempotency_policy_;
};
}  // namespace

std::shared_ptr<VideoIntelligenceServiceConnection>
MakeVideoIntelligenceServiceConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 VideoIntelligenceServicePolicyOptionList>(
      options, __func__);
  options = videointelligence_internal::VideoIntelligenceServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      videointelligence_internal::CreateDefaultVideoIntelligenceServiceStub(
          background->cq(), options);
  return std::make_shared<VideoIntelligenceServiceConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace videointelligence
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace videointelligence_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<videointelligence::VideoIntelligenceServiceConnection>
MakeVideoIntelligenceServiceConnection(
    std::shared_ptr<VideoIntelligenceServiceStub> stub, Options options) {
  options = VideoIntelligenceServiceDefaultOptions(std::move(options));
  return std::make_shared<
      videointelligence::VideoIntelligenceServiceConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace videointelligence_internal
}  // namespace cloud
}  // namespace google
