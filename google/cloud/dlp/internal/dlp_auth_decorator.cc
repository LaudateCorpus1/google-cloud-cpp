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
// source: google/privacy/dlp/v2/dlp.proto

#include "google/cloud/dlp/internal/dlp_auth_decorator.h"
#include <google/privacy/dlp/v2/dlp.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dlp_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DlpServiceAuth::DlpServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<DlpServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::privacy::dlp::v2::InspectContentResponse>
DlpServiceAuth::InspectContent(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::InspectContentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->InspectContent(context, request);
}

StatusOr<google::privacy::dlp::v2::RedactImageResponse>
DlpServiceAuth::RedactImage(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::RedactImageRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RedactImage(context, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
DlpServiceAuth::DeidentifyContent(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::DeidentifyContentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeidentifyContent(context, request);
}

StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
DlpServiceAuth::ReidentifyContent(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ReidentifyContentRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ReidentifyContent(context, request);
}

StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse>
DlpServiceAuth::ListInfoTypes(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ListInfoTypesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInfoTypes(context, request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceAuth::CreateInspectTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::CreateInspectTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateInspectTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceAuth::UpdateInspectTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::UpdateInspectTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateInspectTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::InspectTemplate>
DlpServiceAuth::GetInspectTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::GetInspectTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInspectTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::ListInspectTemplatesResponse>
DlpServiceAuth::ListInspectTemplates(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ListInspectTemplatesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInspectTemplates(context, request);
}

Status DlpServiceAuth::DeleteInspectTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::DeleteInspectTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteInspectTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceAuth::CreateDeidentifyTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateDeidentifyTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceAuth::UpdateDeidentifyTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateDeidentifyTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
DlpServiceAuth::GetDeidentifyTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::GetDeidentifyTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDeidentifyTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::ListDeidentifyTemplatesResponse>
DlpServiceAuth::ListDeidentifyTemplates(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ListDeidentifyTemplatesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDeidentifyTemplates(context, request);
}

Status DlpServiceAuth::DeleteDeidentifyTemplate(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteDeidentifyTemplate(context, request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger> DlpServiceAuth::CreateJobTrigger(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::CreateJobTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateJobTrigger(context, request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger> DlpServiceAuth::UpdateJobTrigger(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::UpdateJobTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateJobTrigger(context, request);
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceAuth::HybridInspectJobTrigger(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::HybridInspectJobTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->HybridInspectJobTrigger(context, request);
}

StatusOr<google::privacy::dlp::v2::JobTrigger> DlpServiceAuth::GetJobTrigger(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::GetJobTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetJobTrigger(context, request);
}

StatusOr<google::privacy::dlp::v2::ListJobTriggersResponse>
DlpServiceAuth::ListJobTriggers(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ListJobTriggersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListJobTriggers(context, request);
}

Status DlpServiceAuth::DeleteJobTrigger(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::DeleteJobTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteJobTrigger(context, request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceAuth::ActivateJobTrigger(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ActivateJobTriggerRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ActivateJobTrigger(context, request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceAuth::CreateDlpJob(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::CreateDlpJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateDlpJob(context, request);
}

StatusOr<google::privacy::dlp::v2::ListDlpJobsResponse>
DlpServiceAuth::ListDlpJobs(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ListDlpJobsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListDlpJobs(context, request);
}

StatusOr<google::privacy::dlp::v2::DlpJob> DlpServiceAuth::GetDlpJob(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::GetDlpJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetDlpJob(context, request);
}

Status DlpServiceAuth::DeleteDlpJob(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::DeleteDlpJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteDlpJob(context, request);
}

Status DlpServiceAuth::CancelDlpJob(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::CancelDlpJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CancelDlpJob(context, request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceAuth::CreateStoredInfoType(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateStoredInfoType(context, request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceAuth::UpdateStoredInfoType(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateStoredInfoType(context, request);
}

StatusOr<google::privacy::dlp::v2::StoredInfoType>
DlpServiceAuth::GetStoredInfoType(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetStoredInfoType(context, request);
}

StatusOr<google::privacy::dlp::v2::ListStoredInfoTypesResponse>
DlpServiceAuth::ListStoredInfoTypes(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::ListStoredInfoTypesRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListStoredInfoTypes(context, request);
}

Status DlpServiceAuth::DeleteStoredInfoType(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteStoredInfoType(context, request);
}

StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
DlpServiceAuth::HybridInspectDlpJob(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->HybridInspectDlpJob(context, request);
}

Status DlpServiceAuth::FinishDlpJob(
    grpc::ClientContext& context,
    google::privacy::dlp::v2::FinishDlpJobRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->FinishDlpJob(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp_internal
}  // namespace cloud
}  // namespace google