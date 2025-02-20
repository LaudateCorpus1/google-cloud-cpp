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
// source: google/cloud/security/privateca/v1/service.proto

#include "google/cloud/privateca/internal/certificate_authority_option_defaults.h"
#include "google/cloud/privateca/certificate_authority_connection.h"
#include "google/cloud/privateca/certificate_authority_options.h"
#include "google/cloud/common_options.h"
#include "google/cloud/connection_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/internal/user_agent_prefix.h"
#include "google/cloud/options.h"
#include <memory>

namespace google {
namespace cloud {
namespace privateca_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options CertificateAuthorityServiceDefaultOptions(Options options) {
  if (!options.has<EndpointOption>()) {
    auto env = internal::GetEnv(
        "GOOGLE_CLOUD_CPP_CERTIFICATE_AUTHORITY_SERVICE_ENDPOINT");
    options.set<EndpointOption>(
        env && !env->empty() ? *env : "privateca.googleapis.com");
  }
  if (!options.has<GrpcCredentialOption>()) {
    options.set<GrpcCredentialOption>(grpc::GoogleDefaultCredentials());
  }
  if (!options.has<TracingComponentsOption>()) {
    options.set<TracingComponentsOption>(internal::DefaultTracingComponents());
  }
  if (!options.has<GrpcTracingOptionsOption>()) {
    options.set<GrpcTracingOptionsOption>(internal::DefaultTracingOptions());
  }
  auto& products = options.lookup<UserAgentProductsOption>();
  products.insert(products.begin(), google::cloud::internal::UserAgentPrefix());

  if (!options.has<privateca::CertificateAuthorityServiceRetryPolicyOption>()) {
    options.set<privateca::CertificateAuthorityServiceRetryPolicyOption>(
        privateca::CertificateAuthorityServiceLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options
           .has<privateca::CertificateAuthorityServiceBackoffPolicyOption>()) {
    options.set<privateca::CertificateAuthorityServiceBackoffPolicyOption>(
        ExponentialBackoffPolicy(std::chrono::seconds(1),
                                 std::chrono::minutes(5), kBackoffScaling)
            .clone());
  }
  if (!options
           .has<privateca::CertificateAuthorityServicePollingPolicyOption>()) {
    options.set<privateca::CertificateAuthorityServicePollingPolicyOption>(
        GenericPollingPolicy<
            privateca::CertificateAuthorityServiceRetryPolicyOption::Type,
            privateca::CertificateAuthorityServiceBackoffPolicyOption::Type>(
            options
                .get<privateca::CertificateAuthorityServiceRetryPolicyOption>()
                ->clone(),
            options
                .get<
                    privateca::CertificateAuthorityServiceBackoffPolicyOption>()
                ->clone())
            .clone());
  }
  if (!options.has<
          privateca::
              CertificateAuthorityServiceConnectionIdempotencyPolicyOption>()) {
    options.set<
        privateca::
            CertificateAuthorityServiceConnectionIdempotencyPolicyOption>(
        privateca::
            MakeDefaultCertificateAuthorityServiceConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privateca_internal
}  // namespace cloud
}  // namespace google
