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
// source: google/storagetransfer/v1/transfer.proto

#include "google/cloud/storagetransfer/storage_transfer_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace storagetransfer {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

StorageTransferServiceConnectionIdempotencyPolicy::
    ~StorageTransferServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultStorageTransferServiceConnectionIdempotencyPolicy
    : public StorageTransferServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultStorageTransferServiceConnectionIdempotencyPolicy() override =
      default;

  /// Create a new copy of this object.
  std::unique_ptr<StorageTransferServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultStorageTransferServiceConnectionIdempotencyPolicy>(*this);
  }

  Idempotency GetGoogleServiceAccount(
      google::storagetransfer::v1::GetGoogleServiceAccountRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateTransferJob(
      google::storagetransfer::v1::CreateTransferJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateTransferJob(
      google::storagetransfer::v1::UpdateTransferJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetTransferJob(
      google::storagetransfer::v1::GetTransferJobRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListTransferJobs(
      google::storagetransfer::v1::ListTransferJobsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency PauseTransferOperation(
      google::storagetransfer::v1::PauseTransferOperationRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency ResumeTransferOperation(
      google::storagetransfer::v1::ResumeTransferOperationRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency RunTransferJob(
      google::storagetransfer::v1::RunTransferJobRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<StorageTransferServiceConnectionIdempotencyPolicy>
MakeDefaultStorageTransferServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultStorageTransferServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storagetransfer
}  // namespace cloud
}  // namespace google
