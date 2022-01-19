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

#include "google/cloud/automl/prediction_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace automl {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::internal::Idempotency;

PredictionServiceConnectionIdempotencyPolicy::
    ~PredictionServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultPredictionServiceConnectionIdempotencyPolicy
    : public PredictionServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultPredictionServiceConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<PredictionServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultPredictionServiceConnectionIdempotencyPolicy>(*this);
  }

  Idempotency Predict(
      google::cloud::automl::v1::PredictRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency BatchPredict(
      google::cloud::automl::v1::BatchPredictRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<PredictionServiceConnectionIdempotencyPolicy>
MakeDefaultPredictionServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultPredictionServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl
}  // namespace cloud
}  // namespace google
