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
// source: google/cloud/assuredworkloads/v1/assuredworkloads.proto

#include "google/cloud/assuredworkloads/internal/assured_workloads_metadata_decorator.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/assuredworkloads/v1/assuredworkloads.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace assuredworkloads_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AssuredWorkloadsServiceMetadata::AssuredWorkloadsServiceMetadata(
    std::shared_ptr<AssuredWorkloadsServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

future<StatusOr<google::longrunning::Operation>>
AssuredWorkloadsServiceMetadata::AsyncCreateWorkload(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::assuredworkloads::v1::CreateWorkloadRequest const& request) {
  SetMetadata(*context, "parent=" + request.parent());
  return child_->AsyncCreateWorkload(cq, std::move(context), request);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceMetadata::UpdateWorkload(
    grpc::ClientContext& context,
    google::cloud::assuredworkloads::v1::UpdateWorkloadRequest const& request) {
  SetMetadata(context, "workload.name=" + request.workload().name());
  return child_->UpdateWorkload(context, request);
}

Status AssuredWorkloadsServiceMetadata::DeleteWorkload(
    grpc::ClientContext& context,
    google::cloud::assuredworkloads::v1::DeleteWorkloadRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteWorkload(context, request);
}

StatusOr<google::cloud::assuredworkloads::v1::Workload>
AssuredWorkloadsServiceMetadata::GetWorkload(
    grpc::ClientContext& context,
    google::cloud::assuredworkloads::v1::GetWorkloadRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetWorkload(context, request);
}

StatusOr<google::cloud::assuredworkloads::v1::ListWorkloadsResponse>
AssuredWorkloadsServiceMetadata::ListWorkloads(
    grpc::ClientContext& context,
    google::cloud::assuredworkloads::v1::ListWorkloadsRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListWorkloads(context, request);
}

future<StatusOr<google::longrunning::Operation>>
AssuredWorkloadsServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> AssuredWorkloadsServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, "name=" + request.name());
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

void AssuredWorkloadsServiceMetadata::SetMetadata(
    grpc::ClientContext& context, std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  context.AddMetadata("x-goog-api-client", api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace assuredworkloads_internal
}  // namespace cloud
}  // namespace google