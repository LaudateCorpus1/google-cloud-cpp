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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_PREDICTION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_PREDICTION_CONNECTION_H

#include "google/cloud/automl/internal/prediction_retry_traits.h"
#include "google/cloud/automl/internal/prediction_stub.h"
#include "google/cloud/automl/prediction_connection_idempotency_policy.h"
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
namespace automl {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using PredictionServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        automl_internal::PredictionServiceRetryTraits>;

using PredictionServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        automl_internal::PredictionServiceRetryTraits>;

using PredictionServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        automl_internal::PredictionServiceRetryTraits>;

class PredictionServiceConnection {
 public:
  virtual ~PredictionServiceConnection() = 0;

  virtual StatusOr<google::cloud::automl::v1::PredictResponse> Predict(
      google::cloud::automl::v1::PredictRequest const& request);

  virtual future<StatusOr<google::cloud::automl::v1::BatchPredictResult>>
  BatchPredict(google::cloud::automl::v1::BatchPredictRequest const& request);
};

std::shared_ptr<PredictionServiceConnection> MakePredictionServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace automl_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<automl::PredictionServiceConnection>
MakePredictionServiceConnection(std::shared_ptr<PredictionServiceStub> stub,
                                Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AUTOML_PREDICTION_CONNECTION_H
