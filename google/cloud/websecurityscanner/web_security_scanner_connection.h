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
// source: google/cloud/websecurityscanner/v1/web_security_scanner.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBSECURITYSCANNER_WEB_SECURITY_SCANNER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBSECURITYSCANNER_WEB_SECURITY_SCANNER_CONNECTION_H

#include "google/cloud/websecurityscanner/internal/web_security_scanner_retry_traits.h"
#include "google/cloud/websecurityscanner/internal/web_security_scanner_stub.h"
#include "google/cloud/websecurityscanner/web_security_scanner_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace websecurityscanner {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using WebSecurityScannerRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        websecurityscanner_internal::WebSecurityScannerRetryTraits>;

using WebSecurityScannerLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        websecurityscanner_internal::WebSecurityScannerRetryTraits>;

using WebSecurityScannerLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        websecurityscanner_internal::WebSecurityScannerRetryTraits>;

class WebSecurityScannerConnection {
 public:
  virtual ~WebSecurityScannerConnection() = 0;

  virtual StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
  CreateScanConfig(
      google::cloud::websecurityscanner::v1::CreateScanConfigRequest const&
          request);

  virtual Status DeleteScanConfig(
      google::cloud::websecurityscanner::v1::DeleteScanConfigRequest const&
          request);

  virtual StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
  GetScanConfig(
      google::cloud::websecurityscanner::v1::GetScanConfigRequest const&
          request);

  virtual StreamRange<google::cloud::websecurityscanner::v1::ScanConfig>
  ListScanConfigs(
      google::cloud::websecurityscanner::v1::ListScanConfigsRequest request);

  virtual StatusOr<google::cloud::websecurityscanner::v1::ScanConfig>
  UpdateScanConfig(
      google::cloud::websecurityscanner::v1::UpdateScanConfigRequest const&
          request);

  virtual StatusOr<google::cloud::websecurityscanner::v1::ScanRun> StartScanRun(
      google::cloud::websecurityscanner::v1::StartScanRunRequest const&
          request);

  virtual StatusOr<google::cloud::websecurityscanner::v1::ScanRun> GetScanRun(
      google::cloud::websecurityscanner::v1::GetScanRunRequest const& request);

  virtual StreamRange<google::cloud::websecurityscanner::v1::ScanRun>
  ListScanRuns(
      google::cloud::websecurityscanner::v1::ListScanRunsRequest request);

  virtual StatusOr<google::cloud::websecurityscanner::v1::ScanRun> StopScanRun(
      google::cloud::websecurityscanner::v1::StopScanRunRequest const& request);

  virtual StreamRange<google::cloud::websecurityscanner::v1::CrawledUrl>
  ListCrawledUrls(
      google::cloud::websecurityscanner::v1::ListCrawledUrlsRequest request);

  virtual StatusOr<google::cloud::websecurityscanner::v1::Finding> GetFinding(
      google::cloud::websecurityscanner::v1::GetFindingRequest const& request);

  virtual StreamRange<google::cloud::websecurityscanner::v1::Finding>
  ListFindings(
      google::cloud::websecurityscanner::v1::ListFindingsRequest request);

  virtual StatusOr<
      google::cloud::websecurityscanner::v1::ListFindingTypeStatsResponse>
  ListFindingTypeStats(
      google::cloud::websecurityscanner::v1::ListFindingTypeStatsRequest const&
          request);
};

std::shared_ptr<WebSecurityScannerConnection> MakeWebSecurityScannerConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace websecurityscanner
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace websecurityscanner_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<websecurityscanner::WebSecurityScannerConnection>
MakeWebSecurityScannerConnection(std::shared_ptr<WebSecurityScannerStub> stub,
                                 Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace websecurityscanner_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WEBSECURITYSCANNER_WEB_SECURITY_SCANNER_CONNECTION_H
