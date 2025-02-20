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
// source: google/cloud/talent/v4/event_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_EVENT_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_EVENT_CONNECTION_H

#include "google/cloud/talent/event_connection_idempotency_policy.h"
#include "google/cloud/talent/internal/event_retry_traits.h"
#include "google/cloud/talent/internal/event_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace talent {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using EventServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        talent_internal::EventServiceRetryTraits>;

using EventServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        talent_internal::EventServiceRetryTraits>;

using EventServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        talent_internal::EventServiceRetryTraits>;

class EventServiceConnection {
 public:
  virtual ~EventServiceConnection() = 0;

  virtual StatusOr<google::cloud::talent::v4::ClientEvent> CreateClientEvent(
      google::cloud::talent::v4::CreateClientEventRequest const& request);
};

std::shared_ptr<EventServiceConnection> MakeEventServiceConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace talent_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<talent::EventServiceConnection> MakeEventServiceConnection(
    std::shared_ptr<EventServiceStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace talent_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TALENT_EVENT_CONNECTION_H
