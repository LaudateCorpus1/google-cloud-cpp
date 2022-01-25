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
// source: google/cloud/translate/v3/translation_service.proto

#include "google/cloud/translate/internal/translation_connection_impl.h"
#include "google/cloud/translate/internal/translation_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace translate_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

TranslationServiceConnectionImpl::TranslationServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<translate_internal::TranslationServiceStub> stub,
    Options const& options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      retry_policy_prototype_(
          options.get<translate::TranslationServiceRetryPolicyOption>()
              ->clone()),
      backoff_policy_prototype_(
          options.get<translate::TranslationServiceBackoffPolicyOption>()
              ->clone()),
      idempotency_policy_(
          options
              .get<translate::
                       TranslationServiceConnectionIdempotencyPolicyOption>()
              ->clone()),
      polling_policy_prototype_(
          options.get<translate::TranslationServicePollingPolicyOption>()
              ->clone()) {}

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
TranslationServiceConnectionImpl::TranslateText(
    google::cloud::translation::v3::TranslateTextRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TranslateText(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::translation::v3::TranslateTextRequest const& request) {
        return stub_->TranslateText(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
TranslationServiceConnectionImpl::DetectLanguage(
    google::cloud::translation::v3::DetectLanguageRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DetectLanguage(request),
      [this](grpc::ClientContext& context,
             google::cloud::translation::v3::DetectLanguageRequest const&
                 request) { return stub_->DetectLanguage(context, request); },
      request, __func__);
}

StatusOr<google::cloud::translation::v3::SupportedLanguages>
TranslationServiceConnectionImpl::GetSupportedLanguages(
    google::cloud::translation::v3::GetSupportedLanguagesRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetSupportedLanguages(request),
      [this](grpc::ClientContext& context,
             google::cloud::translation::v3::GetSupportedLanguagesRequest const&
                 request) {
        return stub_->GetSupportedLanguages(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
TranslationServiceConnectionImpl::TranslateDocument(
    google::cloud::translation::v3::TranslateDocumentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->TranslateDocument(request),
      [this](grpc::ClientContext& context,
             google::cloud::translation::v3::TranslateDocumentRequest const&
                 request) {
        return stub_->TranslateDocument(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::translation::v3::BatchTranslateResponse>>
TranslationServiceConnectionImpl::BatchTranslateText(
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::translation::v3::BatchTranslateResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::translation::v3::BatchTranslateTextRequest const&
                 request) {
        return stub->AsyncBatchTranslateText(cq, std::move(context), request);
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
          google::cloud::translation::v3::BatchTranslateResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->BatchTranslateText(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>
TranslationServiceConnectionImpl::BatchTranslateDocument(
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::translation::v3::BatchTranslateDocumentResponse>(
      background_->cq(), request,
      [stub](
          google::cloud::CompletionQueue& cq,
          std::unique_ptr<grpc::ClientContext> context,
          google::cloud::translation::v3::BatchTranslateDocumentRequest const&
              request) {
        return stub->AsyncBatchTranslateDocument(cq, std::move(context),
                                                 request);
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
          google::cloud::translation::v3::BatchTranslateDocumentResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->BatchTranslateDocument(request), polling_policy(),
      __func__);
}

future<StatusOr<google::cloud::translation::v3::Glossary>>
TranslationServiceConnectionImpl::CreateGlossary(
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::translation::v3::Glossary>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::translation::v3::CreateGlossaryRequest const&
                 request) {
        return stub->AsyncCreateGlossary(cq, std::move(context), request);
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
          google::cloud::translation::v3::Glossary>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateGlossary(request), polling_policy(),
      __func__);
}

StreamRange<google::cloud::translation::v3::Glossary>
TranslationServiceConnectionImpl::ListGlossaries(
    google::cloud::translation::v3::ListGlossariesRequest request) {
  request.clear_page_token();
  auto stub = stub_;
  auto retry = std::shared_ptr<translate::TranslationServiceRetryPolicy const>(
      retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListGlossaries(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::translation::v3::Glossary>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::translation::v3::ListGlossariesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::translation::v3::ListGlossariesRequest const&
                       request) {
              return stub->ListGlossaries(context, request);
            },
            r, function_name);
      },
      [](google::cloud::translation::v3::ListGlossariesResponse r) {
        std::vector<google::cloud::translation::v3::Glossary> result(
            r.glossaries().size());
        auto& messages = *r.mutable_glossaries();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::translation::v3::Glossary>
TranslationServiceConnectionImpl::GetGlossary(
    google::cloud::translation::v3::GetGlossaryRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetGlossary(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::translation::v3::GetGlossaryRequest const& request) {
        return stub_->GetGlossary(context, request);
      },
      request, __func__);
}

future<StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>
TranslationServiceConnectionImpl::DeleteGlossary(
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  auto stub = stub_;
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::translation::v3::DeleteGlossaryResponse>(
      background_->cq(), request,
      [stub](google::cloud::CompletionQueue& cq,
             std::unique_ptr<grpc::ClientContext> context,
             google::cloud::translation::v3::DeleteGlossaryRequest const&
                 request) {
        return stub->AsyncDeleteGlossary(cq, std::move(context), request);
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
          google::cloud::translation::v3::DeleteGlossaryResponse>,
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteGlossary(request), polling_policy(),
      __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_internal
}  // namespace cloud
}  // namespace google