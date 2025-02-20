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
// source: google/devtools/cloudbuild/v1/cloudbuild.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_CLOUD_BUILD_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_CLOUD_BUILD_CONNECTION_H

#include "google/cloud/cloudbuild/cloud_build_connection_idempotency_policy.h"
#include "google/cloud/cloudbuild/internal/cloud_build_retry_traits.h"
#include "google/cloud/cloudbuild/internal/cloud_build_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace cloudbuild {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using CloudBuildRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    cloudbuild_internal::CloudBuildRetryTraits>;

using CloudBuildLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        cloudbuild_internal::CloudBuildRetryTraits>;

using CloudBuildLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        cloudbuild_internal::CloudBuildRetryTraits>;

class CloudBuildConnection {
 public:
  virtual ~CloudBuildConnection() = 0;

  virtual future<StatusOr<google::devtools::cloudbuild::v1::Build>> CreateBuild(
      google::devtools::cloudbuild::v1::CreateBuildRequest const& request);

  virtual StatusOr<google::devtools::cloudbuild::v1::Build> GetBuild(
      google::devtools::cloudbuild::v1::GetBuildRequest const& request);

  virtual StreamRange<google::devtools::cloudbuild::v1::Build> ListBuilds(
      google::devtools::cloudbuild::v1::ListBuildsRequest request);

  virtual StatusOr<google::devtools::cloudbuild::v1::Build> CancelBuild(
      google::devtools::cloudbuild::v1::CancelBuildRequest const& request);

  virtual future<StatusOr<google::devtools::cloudbuild::v1::Build>> RetryBuild(
      google::devtools::cloudbuild::v1::RetryBuildRequest const& request);

  virtual future<StatusOr<google::devtools::cloudbuild::v1::Build>>
  ApproveBuild(
      google::devtools::cloudbuild::v1::ApproveBuildRequest const& request);

  virtual StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
  CreateBuildTrigger(
      google::devtools::cloudbuild::v1::CreateBuildTriggerRequest const&
          request);

  virtual StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
  GetBuildTrigger(
      google::devtools::cloudbuild::v1::GetBuildTriggerRequest const& request);

  virtual StreamRange<google::devtools::cloudbuild::v1::BuildTrigger>
  ListBuildTriggers(
      google::devtools::cloudbuild::v1::ListBuildTriggersRequest request);

  virtual Status DeleteBuildTrigger(
      google::devtools::cloudbuild::v1::DeleteBuildTriggerRequest const&
          request);

  virtual StatusOr<google::devtools::cloudbuild::v1::BuildTrigger>
  UpdateBuildTrigger(
      google::devtools::cloudbuild::v1::UpdateBuildTriggerRequest const&
          request);

  virtual future<StatusOr<google::devtools::cloudbuild::v1::Build>>
  RunBuildTrigger(
      google::devtools::cloudbuild::v1::RunBuildTriggerRequest const& request);

  virtual StatusOr<
      google::devtools::cloudbuild::v1::ReceiveTriggerWebhookResponse>
  ReceiveTriggerWebhook(
      google::devtools::cloudbuild::v1::ReceiveTriggerWebhookRequest const&
          request);

  virtual future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
  CreateWorkerPool(
      google::devtools::cloudbuild::v1::CreateWorkerPoolRequest const& request);

  virtual StatusOr<google::devtools::cloudbuild::v1::WorkerPool> GetWorkerPool(
      google::devtools::cloudbuild::v1::GetWorkerPoolRequest const& request);

  virtual future<StatusOr<
      google::devtools::cloudbuild::v1::DeleteWorkerPoolOperationMetadata>>
  DeleteWorkerPool(
      google::devtools::cloudbuild::v1::DeleteWorkerPoolRequest const& request);

  virtual future<StatusOr<google::devtools::cloudbuild::v1::WorkerPool>>
  UpdateWorkerPool(
      google::devtools::cloudbuild::v1::UpdateWorkerPoolRequest const& request);

  virtual StreamRange<google::devtools::cloudbuild::v1::WorkerPool>
  ListWorkerPools(
      google::devtools::cloudbuild::v1::ListWorkerPoolsRequest request);
};

std::shared_ptr<CloudBuildConnection> MakeCloudBuildConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace cloudbuild_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<cloudbuild::CloudBuildConnection> MakeCloudBuildConnection(
    std::shared_ptr<CloudBuildStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CLOUDBUILD_CLOUD_BUILD_CONNECTION_H
