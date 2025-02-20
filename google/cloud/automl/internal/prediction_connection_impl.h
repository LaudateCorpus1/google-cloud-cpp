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
// source: google/cloud/automl/v1/prediction_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_INTERNAL_PREDICTION_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_INTERNAL_PREDICTION_CONNECTION_IMPL_H

#include "google/cloud/automl/internal/prediction_retry_traits.h"
#include "google/cloud/automl/internal/prediction_stub.h"
#include "google/cloud/automl/prediction_connection.h"
#include "google/cloud/automl/prediction_connection_idempotency_policy.h"
#include "google/cloud/automl/prediction_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace automl_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class PredictionServiceConnectionImpl
    : public automl::PredictionServiceConnection {
 public:
  ~PredictionServiceConnectionImpl() override = default;

  PredictionServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<automl_internal::PredictionServiceStub> stub,
      Options const& options);

  StatusOr<google::cloud::automl::v1::PredictResponse> Predict(
      google::cloud::automl::v1::PredictRequest const& request) override;

  future<StatusOr<google::cloud::automl::v1::BatchPredictResult>> BatchPredict(
      google::cloud::automl::v1::BatchPredictRequest const& request) override;

 private:
  std::unique_ptr<automl::PredictionServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<automl::PredictionServiceRetryPolicyOption>()) {
      return options.get<automl::PredictionServiceRetryPolicyOption>()->clone();
    }
    return retry_policy_prototype_->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<automl::PredictionServiceBackoffPolicyOption>()) {
      return options.get<automl::PredictionServiceBackoffPolicyOption>()
          ->clone();
    }
    return backoff_policy_prototype_->clone();
  }

  std::unique_ptr<automl::PredictionServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            automl::PredictionServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<automl::PredictionServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return idempotency_policy_->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<automl_internal::PredictionServiceStub> stub_;
  std::unique_ptr<automl::PredictionServiceRetryPolicy const>
      retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<automl::PredictionServiceConnectionIdempotencyPolicy>
      idempotency_policy_;

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<automl::PredictionServicePollingPolicyOption>()) {
      return options.get<automl::PredictionServicePollingPolicyOption>()
          ->clone();
    }
    return polling_policy_prototype_->clone();
  }

  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_INTERNAL_PREDICTION_CONNECTION_IMPL_H
