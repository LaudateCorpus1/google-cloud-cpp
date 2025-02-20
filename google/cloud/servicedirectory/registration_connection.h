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
// source: google/cloud/servicedirectory/v1/registration_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_REGISTRATION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_REGISTRATION_CONNECTION_H

#include "google/cloud/servicedirectory/internal/registration_retry_traits.h"
#include "google/cloud/servicedirectory/internal/registration_stub.h"
#include "google/cloud/servicedirectory/registration_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace servicedirectory {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using RegistrationServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        servicedirectory_internal::RegistrationServiceRetryTraits>;

using RegistrationServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        servicedirectory_internal::RegistrationServiceRetryTraits>;

using RegistrationServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        servicedirectory_internal::RegistrationServiceRetryTraits>;

class RegistrationServiceConnection {
 public:
  virtual ~RegistrationServiceConnection() = 0;

  virtual StatusOr<google::cloud::servicedirectory::v1::Namespace>
  CreateNamespace(
      google::cloud::servicedirectory::v1::CreateNamespaceRequest const&
          request);

  virtual StreamRange<google::cloud::servicedirectory::v1::Namespace>
  ListNamespaces(
      google::cloud::servicedirectory::v1::ListNamespacesRequest request);

  virtual StatusOr<google::cloud::servicedirectory::v1::Namespace> GetNamespace(
      google::cloud::servicedirectory::v1::GetNamespaceRequest const& request);

  virtual StatusOr<google::cloud::servicedirectory::v1::Namespace>
  UpdateNamespace(
      google::cloud::servicedirectory::v1::UpdateNamespaceRequest const&
          request);

  virtual Status DeleteNamespace(
      google::cloud::servicedirectory::v1::DeleteNamespaceRequest const&
          request);

  virtual StatusOr<google::cloud::servicedirectory::v1::Service> CreateService(
      google::cloud::servicedirectory::v1::CreateServiceRequest const& request);

  virtual StreamRange<google::cloud::servicedirectory::v1::Service>
  ListServices(
      google::cloud::servicedirectory::v1::ListServicesRequest request);

  virtual StatusOr<google::cloud::servicedirectory::v1::Service> GetService(
      google::cloud::servicedirectory::v1::GetServiceRequest const& request);

  virtual StatusOr<google::cloud::servicedirectory::v1::Service> UpdateService(
      google::cloud::servicedirectory::v1::UpdateServiceRequest const& request);

  virtual Status DeleteService(
      google::cloud::servicedirectory::v1::DeleteServiceRequest const& request);

  virtual StatusOr<google::cloud::servicedirectory::v1::Endpoint>
  CreateEndpoint(
      google::cloud::servicedirectory::v1::CreateEndpointRequest const&
          request);

  virtual StreamRange<google::cloud::servicedirectory::v1::Endpoint>
  ListEndpoints(
      google::cloud::servicedirectory::v1::ListEndpointsRequest request);

  virtual StatusOr<google::cloud::servicedirectory::v1::Endpoint> GetEndpoint(
      google::cloud::servicedirectory::v1::GetEndpointRequest const& request);

  virtual StatusOr<google::cloud::servicedirectory::v1::Endpoint>
  UpdateEndpoint(
      google::cloud::servicedirectory::v1::UpdateEndpointRequest const&
          request);

  virtual Status DeleteEndpoint(
      google::cloud::servicedirectory::v1::DeleteEndpointRequest const&
          request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

std::shared_ptr<RegistrationServiceConnection>
MakeRegistrationServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicedirectory
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace servicedirectory_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<servicedirectory::RegistrationServiceConnection>
MakeRegistrationServiceConnection(std::shared_ptr<RegistrationServiceStub> stub,
                                  Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicedirectory_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEDIRECTORY_REGISTRATION_CONNECTION_H
