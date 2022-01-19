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
// source: google/cloud/automl/v1/service.proto

#include "google/cloud/automl/auto_ml_connection.h"
#include "google/cloud/automl/auto_ml_options.h"
#include "google/cloud/automl/internal/auto_ml_option_defaults.h"
#include "google/cloud/automl/internal/auto_ml_stub_factory.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace automl {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AutoMlConnection::~AutoMlConnection() = default;

future<StatusOr<google::cloud::automl::v1::Dataset>>
AutoMlConnection::CreateDataset(
    google::cloud::automl::v1::CreateDatasetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::Dataset>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::automl::v1::Dataset> AutoMlConnection::GetDataset(
    google::cloud::automl::v1::GetDatasetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::automl::v1::Dataset> AutoMlConnection::ListDatasets(
    google::cloud::automl::v1::ListDatasetsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::automl::v1::Dataset>>(
      std::move(request),
      [](google::cloud::automl::v1::ListDatasetsRequest const&) {
        return StatusOr<google::cloud::automl::v1::ListDatasetsResponse>{};
      },
      [](google::cloud::automl::v1::ListDatasetsResponse const&) {
        return std::vector<google::cloud::automl::v1::Dataset>();
      });
}

StatusOr<google::cloud::automl::v1::Dataset> AutoMlConnection::UpdateDataset(
    google::cloud::automl::v1::UpdateDatasetRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::DeleteDataset(
    google::cloud::automl::v1::DeleteDatasetRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::ImportData(
    google::cloud::automl::v1::ImportDataRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::ExportData(
    google::cloud::automl::v1::ExportDataRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::automl::v1::AnnotationSpec>
AutoMlConnection::GetAnnotationSpec(
    google::cloud::automl::v1::GetAnnotationSpecRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::automl::v1::Model>>
AutoMlConnection::CreateModel(
    google::cloud::automl::v1::CreateModelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::Model>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::automl::v1::Model> AutoMlConnection::GetModel(
    google::cloud::automl::v1::GetModelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::automl::v1::Model> AutoMlConnection::ListModels(
    google::cloud::automl::v1::ListModelsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::automl::v1::Model>>(
      std::move(request),
      [](google::cloud::automl::v1::ListModelsRequest const&) {
        return StatusOr<google::cloud::automl::v1::ListModelsResponse>{};
      },
      [](google::cloud::automl::v1::ListModelsResponse const&) {
        return std::vector<google::cloud::automl::v1::Model>();
      });
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::DeleteModel(
    google::cloud::automl::v1::DeleteModelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::automl::v1::Model> AutoMlConnection::UpdateModel(
    google::cloud::automl::v1::UpdateModelRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::DeployModel(
    google::cloud::automl::v1::DeployModelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::UndeployModel(
    google::cloud::automl::v1::UndeployModelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::automl::v1::OperationMetadata>>
AutoMlConnection::ExportModel(
    google::cloud::automl::v1::ExportModelRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::automl::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::automl::v1::ModelEvaluation>
AutoMlConnection::GetModelEvaluation(
    google::cloud::automl::v1::GetModelEvaluationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::automl::v1::ModelEvaluation>
AutoMlConnection::ListModelEvaluations(
    google::cloud::automl::v1::ListModelEvaluationsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::automl::v1::ModelEvaluation>>(
      std::move(request),
      [](google::cloud::automl::v1::ListModelEvaluationsRequest const&) {
        return StatusOr<
            google::cloud::automl::v1::ListModelEvaluationsResponse>{};
      },
      [](google::cloud::automl::v1::ListModelEvaluationsResponse const&) {
        return std::vector<google::cloud::automl::v1::ModelEvaluation>();
      });
}

namespace {
class AutoMlConnectionImpl : public AutoMlConnection {
 public:
  AutoMlConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<automl_internal::AutoMlStub> stub, Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<AutoMlRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<AutoMlBackoffPolicyOption>()->clone()),
        polling_policy_prototype_(
            options.get<AutoMlPollingPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<AutoMlConnectionIdempotencyPolicyOption>()->clone()) {}

  ~AutoMlConnectionImpl() override = default;

  future<StatusOr<google::cloud::automl::v1::Dataset>> CreateDataset(
      google::cloud::automl::v1::CreateDatasetRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::automl::v1::Dataset>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::automl::v1::CreateDatasetRequest const& request) {
          return stub->AsyncCreateDataset(cq, std::move(context), request);
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
            google::cloud::automl::v1::Dataset>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateDataset(request),
        polling_policy_prototype_->clone(), __func__);
  }

  StatusOr<google::cloud::automl::v1::Dataset> GetDataset(
      google::cloud::automl::v1::GetDatasetRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetDataset(request),
        [this](grpc::ClientContext& context,
               google::cloud::automl::v1::GetDatasetRequest const& request) {
          return stub_->GetDataset(context, request);
        },
        request, __func__);
  }

  StreamRange<google::cloud::automl::v1::Dataset> ListDatasets(
      google::cloud::automl::v1::ListDatasetsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<AutoMlRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListDatasets(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::automl::v1::Dataset>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::automl::v1::ListDatasetsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::automl::v1::ListDatasetsRequest const&
                         request) {
                return stub->ListDatasets(context, request);
              },
              r, function_name);
        },
        [](google::cloud::automl::v1::ListDatasetsResponse r) {
          std::vector<google::cloud::automl::v1::Dataset> result(
              r.datasets().size());
          auto& messages = *r.mutable_datasets();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::cloud::automl::v1::Dataset> UpdateDataset(
      google::cloud::automl::v1::UpdateDatasetRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateDataset(request),
        [this](grpc::ClientContext& context,
               google::cloud::automl::v1::UpdateDatasetRequest const& request) {
          return stub_->UpdateDataset(context, request);
        },
        request, __func__);
  }

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeleteDataset(
      google::cloud::automl::v1::DeleteDatasetRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::automl::v1::OperationMetadata>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::automl::v1::DeleteDatasetRequest const& request) {
          return stub->AsyncDeleteDataset(cq, std::move(context), request);
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
            google::cloud::automl::v1::OperationMetadata>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteDataset(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ImportData(
      google::cloud::automl::v1::ImportDataRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::automl::v1::OperationMetadata>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::automl::v1::ImportDataRequest const& request) {
          return stub->AsyncImportData(cq, std::move(context), request);
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
            google::cloud::automl::v1::OperationMetadata>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ImportData(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ExportData(
      google::cloud::automl::v1::ExportDataRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::automl::v1::OperationMetadata>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::automl::v1::ExportDataRequest const& request) {
          return stub->AsyncExportData(cq, std::move(context), request);
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
            google::cloud::automl::v1::OperationMetadata>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ExportData(request),
        polling_policy_prototype_->clone(), __func__);
  }

  StatusOr<google::cloud::automl::v1::AnnotationSpec> GetAnnotationSpec(
      google::cloud::automl::v1::GetAnnotationSpecRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetAnnotationSpec(request),
        [this](grpc::ClientContext& context,
               google::cloud::automl::v1::GetAnnotationSpecRequest const&
                   request) {
          return stub_->GetAnnotationSpec(context, request);
        },
        request, __func__);
  }

  future<StatusOr<google::cloud::automl::v1::Model>> CreateModel(
      google::cloud::automl::v1::CreateModelRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::automl::v1::Model>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::automl::v1::CreateModelRequest const& request) {
          return stub->AsyncCreateModel(cq, std::move(context), request);
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
            google::cloud::automl::v1::Model>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->CreateModel(request),
        polling_policy_prototype_->clone(), __func__);
  }

  StatusOr<google::cloud::automl::v1::Model> GetModel(
      google::cloud::automl::v1::GetModelRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetModel(request),
        [this](grpc::ClientContext& context,
               google::cloud::automl::v1::GetModelRequest const& request) {
          return stub_->GetModel(context, request);
        },
        request, __func__);
  }

  StreamRange<google::cloud::automl::v1::Model> ListModels(
      google::cloud::automl::v1::ListModelsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<AutoMlRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListModels(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::automl::v1::Model>>(
        std::move(request),
        [stub, retry, backoff, idempotency,
         function_name](google::cloud::automl::v1::ListModelsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::cloud::automl::v1::ListModelsRequest const& request) {
                return stub->ListModels(context, request);
              },
              r, function_name);
        },
        [](google::cloud::automl::v1::ListModelsResponse r) {
          std::vector<google::cloud::automl::v1::Model> result(
              r.model().size());
          auto& messages = *r.mutable_model();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeleteModel(
      google::cloud::automl::v1::DeleteModelRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::automl::v1::OperationMetadata>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::automl::v1::DeleteModelRequest const& request) {
          return stub->AsyncDeleteModel(cq, std::move(context), request);
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
            google::cloud::automl::v1::OperationMetadata>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeleteModel(request),
        polling_policy_prototype_->clone(), __func__);
  }

  StatusOr<google::cloud::automl::v1::Model> UpdateModel(
      google::cloud::automl::v1::UpdateModelRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UpdateModel(request),
        [this](grpc::ClientContext& context,
               google::cloud::automl::v1::UpdateModelRequest const& request) {
          return stub_->UpdateModel(context, request);
        },
        request, __func__);
  }

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> DeployModel(
      google::cloud::automl::v1::DeployModelRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::automl::v1::OperationMetadata>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::automl::v1::DeployModelRequest const& request) {
          return stub->AsyncDeployModel(cq, std::move(context), request);
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
            google::cloud::automl::v1::OperationMetadata>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->DeployModel(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> UndeployModel(
      google::cloud::automl::v1::UndeployModelRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::automl::v1::OperationMetadata>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::automl::v1::UndeployModelRequest const& request) {
          return stub->AsyncUndeployModel(cq, std::move(context), request);
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
            google::cloud::automl::v1::OperationMetadata>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->UndeployModel(request),
        polling_policy_prototype_->clone(), __func__);
  }

  future<StatusOr<google::cloud::automl::v1::OperationMetadata>> ExportModel(
      google::cloud::automl::v1::ExportModelRequest const& request) override {
    auto stub = stub_;
    return google::cloud::internal::AsyncLongRunningOperation<
        google::cloud::automl::v1::OperationMetadata>(
        background_->cq(), request,
        [stub](google::cloud::CompletionQueue& cq,
               std::unique_ptr<grpc::ClientContext> context,
               google::cloud::automl::v1::ExportModelRequest const& request) {
          return stub->AsyncExportModel(cq, std::move(context), request);
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
            google::cloud::automl::v1::OperationMetadata>,
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->ExportModel(request),
        polling_policy_prototype_->clone(), __func__);
  }

  StatusOr<google::cloud::automl::v1::ModelEvaluation> GetModelEvaluation(
      google::cloud::automl::v1::GetModelEvaluationRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetModelEvaluation(request),
        [this](grpc::ClientContext& context,
               google::cloud::automl::v1::GetModelEvaluationRequest const&
                   request) {
          return stub_->GetModelEvaluation(context, request);
        },
        request, __func__);
  }

  StreamRange<google::cloud::automl::v1::ModelEvaluation> ListModelEvaluations(
      google::cloud::automl::v1::ListModelEvaluationsRequest request) override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<AutoMlRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->ListModelEvaluations(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::automl::v1::ModelEvaluation>>(
        std::move(request),
        [stub, retry, backoff, idempotency, function_name](
            google::cloud::automl::v1::ListModelEvaluationsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](
                  grpc::ClientContext& context,
                  google::cloud::automl::v1::ListModelEvaluationsRequest const&
                      request) {
                return stub->ListModelEvaluations(context, request);
              },
              r, function_name);
        },
        [](google::cloud::automl::v1::ListModelEvaluationsResponse r) {
          std::vector<google::cloud::automl::v1::ModelEvaluation> result(
              r.model_evaluation().size());
          auto& messages = *r.mutable_model_evaluation();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<automl_internal::AutoMlStub> stub_;
  std::unique_ptr<AutoMlRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
  std::unique_ptr<AutoMlConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<AutoMlConnection> MakeAutoMlConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 AutoMlPolicyOptionList>(options, __func__);
  options = automl_internal::AutoMlDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub =
      automl_internal::CreateDefaultAutoMlStub(background->cq(), options);
  return std::make_shared<AutoMlConnectionImpl>(std::move(background),
                                                std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace automl_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<automl::AutoMlConnection> MakeAutoMlConnection(
    std::shared_ptr<AutoMlStub> stub, Options options) {
  options = AutoMlDefaultOptions(std::move(options));
  return std::make_shared<automl::AutoMlConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace automl_internal
}  // namespace cloud
}  // namespace google
