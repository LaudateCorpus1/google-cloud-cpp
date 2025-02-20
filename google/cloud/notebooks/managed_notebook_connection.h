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
// source: google/cloud/notebooks/v1/managed_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_MANAGED_NOTEBOOK_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_MANAGED_NOTEBOOK_CONNECTION_H

#include "google/cloud/notebooks/internal/managed_notebook_retry_traits.h"
#include "google/cloud/notebooks/internal/managed_notebook_stub.h"
#include "google/cloud/notebooks/managed_notebook_connection_idempotency_policy.h"
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
namespace notebooks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ManagedNotebookServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        notebooks_internal::ManagedNotebookServiceRetryTraits>;

using ManagedNotebookServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        notebooks_internal::ManagedNotebookServiceRetryTraits>;

using ManagedNotebookServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        notebooks_internal::ManagedNotebookServiceRetryTraits>;

class ManagedNotebookServiceConnection {
 public:
  virtual ~ManagedNotebookServiceConnection() = 0;

  virtual StreamRange<google::cloud::notebooks::v1::Runtime> ListRuntimes(
      google::cloud::notebooks::v1::ListRuntimesRequest request);

  virtual StatusOr<google::cloud::notebooks::v1::Runtime> GetRuntime(
      google::cloud::notebooks::v1::GetRuntimeRequest const& request);

  virtual future<StatusOr<google::cloud::notebooks::v1::Runtime>> CreateRuntime(
      google::cloud::notebooks::v1::CreateRuntimeRequest const& request);

  virtual future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
  DeleteRuntime(
      google::cloud::notebooks::v1::DeleteRuntimeRequest const& request);

  virtual future<StatusOr<google::cloud::notebooks::v1::Runtime>> StartRuntime(
      google::cloud::notebooks::v1::StartRuntimeRequest const& request);

  virtual future<StatusOr<google::cloud::notebooks::v1::Runtime>> StopRuntime(
      google::cloud::notebooks::v1::StopRuntimeRequest const& request);

  virtual future<StatusOr<google::cloud::notebooks::v1::Runtime>> SwitchRuntime(
      google::cloud::notebooks::v1::SwitchRuntimeRequest const& request);

  virtual future<StatusOr<google::cloud::notebooks::v1::Runtime>> ResetRuntime(
      google::cloud::notebooks::v1::ResetRuntimeRequest const& request);

  virtual future<StatusOr<google::cloud::notebooks::v1::Runtime>>
  ReportRuntimeEvent(
      google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request);
};

std::shared_ptr<ManagedNotebookServiceConnection>
MakeManagedNotebookServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace notebooks_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<notebooks::ManagedNotebookServiceConnection>
MakeManagedNotebookServiceConnection(
    std::shared_ptr<ManagedNotebookServiceStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_MANAGED_NOTEBOOK_CONNECTION_H
