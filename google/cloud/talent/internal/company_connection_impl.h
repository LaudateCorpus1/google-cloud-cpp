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
// source: google/cloud/talent/v4/company_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_INTERNAL_COMPANY_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_INTERNAL_COMPANY_CONNECTION_IMPL_H

#include "google/cloud/talent/company_connection.h"
#include "google/cloud/talent/company_connection_idempotency_policy.h"
#include "google/cloud/talent/company_options.h"
#include "google/cloud/talent/internal/company_retry_traits.h"
#include "google/cloud/talent/internal/company_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class CompanyServiceConnectionImpl : public talent::CompanyServiceConnection {
 public:
  ~CompanyServiceConnectionImpl() override = default;

  CompanyServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<talent_internal::CompanyServiceStub> stub,
      Options const& options);

  StatusOr<google::cloud::talent::v4::Company> CreateCompany(
      google::cloud::talent::v4::CreateCompanyRequest const& request) override;

  StatusOr<google::cloud::talent::v4::Company> GetCompany(
      google::cloud::talent::v4::GetCompanyRequest const& request) override;

  StatusOr<google::cloud::talent::v4::Company> UpdateCompany(
      google::cloud::talent::v4::UpdateCompanyRequest const& request) override;

  Status DeleteCompany(
      google::cloud::talent::v4::DeleteCompanyRequest const& request) override;

  StreamRange<google::cloud::talent::v4::Company> ListCompanies(
      google::cloud::talent::v4::ListCompaniesRequest request) override;

 private:
  std::unique_ptr<talent::CompanyServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<talent::CompanyServiceRetryPolicyOption>()) {
      return options.get<talent::CompanyServiceRetryPolicyOption>()->clone();
    }
    return retry_policy_prototype_->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<talent::CompanyServiceBackoffPolicyOption>()) {
      return options.get<talent::CompanyServiceBackoffPolicyOption>()->clone();
    }
    return backoff_policy_prototype_->clone();
  }

  std::unique_ptr<talent::CompanyServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<talent::CompanyServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<talent::CompanyServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return idempotency_policy_->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<talent_internal::CompanyServiceStub> stub_;
  std::unique_ptr<talent::CompanyServiceRetryPolicy const>
      retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<talent::CompanyServiceConnectionIdempotencyPolicy>
      idempotency_policy_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_INTERNAL_COMPANY_CONNECTION_IMPL_H
