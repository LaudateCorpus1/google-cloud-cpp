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
// source: google/api/servicemanagement/v1/servicemanager.proto

#include "google/cloud/servicemanagement/internal/service_manager_connection_impl.h"
#include "google/cloud/servicemanagement/internal/service_manager_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace servicemanagement_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ServiceManagerConnectionImpl::ServiceManagerConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<servicemanagement_internal::ServiceManagerStub> stub,
    Options const& options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      retry_policy_prototype_(
          options.get<servicemanagement::ServiceManagerRetryPolicyOption>()
              ->clone()),
      backoff_policy_prototype_(
          options.get<servicemanagement::ServiceManagerBackoffPolicyOption>()
              ->clone()),
      idempotency_policy_(
          options
              .get<servicemanagement::
                       ServiceManagerConnectionIdempotencyPolicyOption>()
              ->clone()),
      polling_policy_prototype_(
          options.get<servicemanagement::ServiceManagerPollingPolicyOption>()
              ->clone()) {}

StreamRange<google::api::servicemanagement::v1::ManagedService>
ServiceManagerConnectionImpl::ListServices(
    google::api::servicemanagement::v1::ListServicesRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry =
      std::shared_ptr<servicemanagement::ServiceManagerRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListServices(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::api::servicemanagement::v1::ManagedService>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::api::servicemanagement::v1::ListServicesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::api::servicemanagement::v1::ListServicesRequest const&
                    request) { return stub->ListServices(context, request); },
            r, function_name);
      },
      [](google::api::servicemanagement::v1::ListServicesResponse r) {
        std::vector<google::api::servicemanagement::v1::ManagedService> result(
            r.services().size());
        auto& messages = *r.mutable_services();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::api::servicemanagement::v1::ManagedService>
ServiceManagerConnectionImpl::GetService(
    google::api::servicemanagement::v1::GetServiceRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetService(request),
      [this](grpc::ClientContext& context,
             google::api::servicemanagement::v1::GetServiceRequest const&
                 request) { return stub_->GetService(context, request); },
      request, __func__);
}

future<StatusOr<google::api::servicemanagement::v1::ManagedService>>
ServiceManagerConnectionImpl::CreateService(
    google::api::servicemanagement::v1::CreateServiceRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::servicemanagement::v1::ManagedService>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::api::servicemanagement::v1::CreateServiceRequest const&
                 request) {
        return stub->AsyncCreateService(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::api::servicemanagement::v1::ManagedService>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateService(request), polling_policy(), __func__);
}

future<StatusOr<google::api::servicemanagement::v1::OperationMetadata>>
ServiceManagerConnectionImpl::DeleteService(
    google::api::servicemanagement::v1::DeleteServiceRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::servicemanagement::v1::OperationMetadata>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::api::servicemanagement::v1::DeleteServiceRequest const&
                 request) {
        return stub->AsyncDeleteService(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::api::servicemanagement::v1::OperationMetadata>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteService(request), polling_policy(), __func__);
}

future<StatusOr<google::api::servicemanagement::v1::UndeleteServiceResponse>>
ServiceManagerConnectionImpl::UndeleteService(
    google::api::servicemanagement::v1::UndeleteServiceRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::servicemanagement::v1::UndeleteServiceResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::api::servicemanagement::v1::UndeleteServiceRequest const&
                 request) {
        return stub->AsyncUndeleteService(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::api::servicemanagement::v1::UndeleteServiceResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->UndeleteService(request), polling_policy(),
      __func__);
}

StreamRange<google::api::Service>
ServiceManagerConnectionImpl::ListServiceConfigs(
    google::api::servicemanagement::v1::ListServiceConfigsRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry =
      std::shared_ptr<servicemanagement::ServiceManagerRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListServiceConfigs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::api::Service>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::api::servicemanagement::v1::ListServiceConfigsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::api::servicemanagement::v1::
                       ListServiceConfigsRequest const& request) {
              return stub->ListServiceConfigs(context, request);
            },
            r, function_name);
      },
      [](google::api::servicemanagement::v1::ListServiceConfigsResponse r) {
        std::vector<google::api::Service> result(r.service_configs().size());
        auto& messages = *r.mutable_service_configs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::api::Service> ServiceManagerConnectionImpl::GetServiceConfig(
    google::api::servicemanagement::v1::GetServiceConfigRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetServiceConfig(request),
      [this](grpc::ClientContext& context,
             google::api::servicemanagement::v1::GetServiceConfigRequest const&
                 request) { return stub_->GetServiceConfig(context, request); },
      request, __func__);
}

StatusOr<google::api::Service>
ServiceManagerConnectionImpl::CreateServiceConfig(
    google::api::servicemanagement::v1::CreateServiceConfigRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateServiceConfig(request),
      [this](
          grpc::ClientContext& context,
          google::api::servicemanagement::v1::CreateServiceConfigRequest const&
              request) { return stub_->CreateServiceConfig(context, request); },
      request, __func__);
}

future<StatusOr<google::api::servicemanagement::v1::SubmitConfigSourceResponse>>
ServiceManagerConnectionImpl::SubmitConfigSource(
    google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
        request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::servicemanagement::v1::SubmitConfigSourceResponse>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
              request) {
        return stub->AsyncSubmitConfigSource(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::api::servicemanagement::v1::SubmitConfigSourceResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->SubmitConfigSource(request), polling_policy(),
      __func__);
}

StreamRange<google::api::servicemanagement::v1::Rollout>
ServiceManagerConnectionImpl::ListServiceRollouts(
    google::api::servicemanagement::v1::ListServiceRolloutsRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry =
      std::shared_ptr<servicemanagement::ServiceManagerRetryPolicy const>(
          retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListServiceRollouts(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::api::servicemanagement::v1::Rollout>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::api::servicemanagement::v1::ListServiceRolloutsRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::api::servicemanagement::v1::
                       ListServiceRolloutsRequest const& request) {
              return stub->ListServiceRollouts(context, request);
            },
            r, function_name);
      },
      [](google::api::servicemanagement::v1::ListServiceRolloutsResponse r) {
        std::vector<google::api::servicemanagement::v1::Rollout> result(
            r.rollouts().size());
        auto& messages = *r.mutable_rollouts();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::api::servicemanagement::v1::Rollout>
ServiceManagerConnectionImpl::GetServiceRollout(
    google::api::servicemanagement::v1::GetServiceRolloutRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetServiceRollout(request),
      [this](grpc::ClientContext& context,
             google::api::servicemanagement::v1::GetServiceRolloutRequest const&
                 request) {
        return stub_->GetServiceRollout(context, request);
      },
      request, __func__);
}

future<StatusOr<google::api::servicemanagement::v1::Rollout>>
ServiceManagerConnectionImpl::CreateServiceRollout(
    google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
        request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::servicemanagement::v1::Rollout>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
              request) {
        return stub->AsyncCreateServiceRollout(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::api::servicemanagement::v1::Rollout>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateServiceRollout(request), polling_policy(),
      __func__);
}

StatusOr<google::api::servicemanagement::v1::GenerateConfigReportResponse>
ServiceManagerConnectionImpl::GenerateConfigReport(
    google::api::servicemanagement::v1::GenerateConfigReportRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GenerateConfigReport(request),
      [this](
          grpc::ClientContext& context,
          google::api::servicemanagement::v1::GenerateConfigReportRequest const&
              request) {
        return stub_->GenerateConfigReport(context, request);
      },
      request, __func__);
}

future<StatusOr<google::api::servicemanagement::v1::EnableServiceResponse>>
ServiceManagerConnectionImpl::EnableService(
    google::api::servicemanagement::v1::EnableServiceRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::servicemanagement::v1::EnableServiceResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::api::servicemanagement::v1::EnableServiceRequest const&
                 request) {
        return stub->AsyncEnableService(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::api::servicemanagement::v1::EnableServiceResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->EnableService(request), polling_policy(), __func__);
}

future<StatusOr<google::api::servicemanagement::v1::DisableServiceResponse>>
ServiceManagerConnectionImpl::DisableService(
    google::api::servicemanagement::v1::DisableServiceRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::api::servicemanagement::v1::DisableServiceResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::api::servicemanagement::v1::DisableServiceRequest const&
                 request) {
        return stub->AsyncDisableService(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::api::servicemanagement::v1::DisableServiceResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DisableService(request), polling_policy(),
      __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicemanagement_internal
}  // namespace cloud
}  // namespace google
