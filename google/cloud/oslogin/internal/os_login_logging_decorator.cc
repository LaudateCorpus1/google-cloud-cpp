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
// source: google/cloud/oslogin/v1/oslogin.proto

#include "google/cloud/oslogin/internal/os_login_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/oslogin/v1/oslogin.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace oslogin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OsLoginServiceLogging::OsLoginServiceLogging(
    std::shared_ptr<OsLoginServiceStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

Status OsLoginServiceLogging::DeletePosixAccount(
    grpc::ClientContext& context,
    google::cloud::oslogin::v1::DeletePosixAccountRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::oslogin::v1::DeletePosixAccountRequest const&
                 request) {
        return child_->DeletePosixAccount(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status OsLoginServiceLogging::DeleteSshPublicKey(
    grpc::ClientContext& context,
    google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const&
                 request) {
        return child_->DeleteSshPublicKey(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::oslogin::v1::LoginProfile>
OsLoginServiceLogging::GetLoginProfile(
    grpc::ClientContext& context,
    google::cloud::oslogin::v1::GetLoginProfileRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::oslogin::v1::GetLoginProfileRequest const& request) {
        return child_->GetLoginProfile(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceLogging::GetSshPublicKey(
    grpc::ClientContext& context,
    google::cloud::oslogin::v1::GetSshPublicKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::oslogin::v1::GetSshPublicKeyRequest const& request) {
        return child_->GetSshPublicKey(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
OsLoginServiceLogging::ImportSshPublicKey(
    grpc::ClientContext& context,
    google::cloud::oslogin::v1::ImportSshPublicKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::oslogin::v1::ImportSshPublicKeyRequest const&
                 request) {
        return child_->ImportSshPublicKey(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::oslogin::common::SshPublicKey>
OsLoginServiceLogging::UpdateSshPublicKey(
    grpc::ClientContext& context,
    google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const&
                 request) {
        return child_->UpdateSshPublicKey(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oslogin_internal
}  // namespace cloud
}  // namespace google