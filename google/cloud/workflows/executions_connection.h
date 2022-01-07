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
// source: google/cloud/workflows/executions/v1/executions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_EXECUTIONS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_EXECUTIONS_CONNECTION_H

#include "google/cloud/workflows/executions_connection_idempotency_policy.h"
#include "google/cloud/workflows/internal/executions_retry_traits.h"
#include "google/cloud/workflows/internal/executions_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace workflows {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ExecutionsRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    workflows_internal::ExecutionsRetryTraits>;

using ExecutionsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        workflows_internal::ExecutionsRetryTraits>;

using ExecutionsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        workflows_internal::ExecutionsRetryTraits>;

class ExecutionsConnection {
 public:
  virtual ~ExecutionsConnection() = 0;

  virtual StreamRange<google::cloud::workflows::executions::v1::Execution>
  ListExecutions(
      google::cloud::workflows::executions::v1::ListExecutionsRequest request);

  virtual StatusOr<google::cloud::workflows::executions::v1::Execution>
  CreateExecution(
      google::cloud::workflows::executions::v1::CreateExecutionRequest const&
          request);

  virtual StatusOr<google::cloud::workflows::executions::v1::Execution>
  GetExecution(
      google::cloud::workflows::executions::v1::GetExecutionRequest const&
          request);

  virtual StatusOr<google::cloud::workflows::executions::v1::Execution>
  CancelExecution(
      google::cloud::workflows::executions::v1::CancelExecutionRequest const&
          request);
};

std::shared_ptr<ExecutionsConnection> MakeExecutionsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace workflows_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<workflows::ExecutionsConnection> MakeExecutionsConnection(
    std::shared_ptr<ExecutionsStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace workflows_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_WORKFLOWS_EXECUTIONS_CONNECTION_H