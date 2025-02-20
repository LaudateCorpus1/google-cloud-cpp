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
// source: google/cloud/gaming/v1/game_server_clusters_service.proto

#include "google/cloud/gameservices/game_server_clusters_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace gameservices {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

GameServerClustersServiceConnectionIdempotencyPolicy::
    ~GameServerClustersServiceConnectionIdempotencyPolicy() = default;

namespace {
class DefaultGameServerClustersServiceConnectionIdempotencyPolicy
    : public GameServerClustersServiceConnectionIdempotencyPolicy {
 public:
  ~DefaultGameServerClustersServiceConnectionIdempotencyPolicy() override =
      default;

  /// Create a new copy of this object.
  std::unique_ptr<GameServerClustersServiceConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<
        DefaultGameServerClustersServiceConnectionIdempotencyPolicy>(*this);
  }

  Idempotency ListGameServerClusters(
      google::cloud::gaming::v1::ListGameServerClustersRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency GetGameServerCluster(
      google::cloud::gaming::v1::GetGameServerClusterRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateGameServerCluster(
      google::cloud::gaming::v1::CreateGameServerClusterRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency PreviewCreateGameServerCluster(
      google::cloud::gaming::v1::PreviewCreateGameServerClusterRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteGameServerCluster(
      google::cloud::gaming::v1::DeleteGameServerClusterRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency PreviewDeleteGameServerCluster(
      google::cloud::gaming::v1::PreviewDeleteGameServerClusterRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateGameServerCluster(
      google::cloud::gaming::v1::UpdateGameServerClusterRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency PreviewUpdateGameServerCluster(
      google::cloud::gaming::v1::PreviewUpdateGameServerClusterRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<GameServerClustersServiceConnectionIdempotencyPolicy>
MakeDefaultGameServerClustersServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<
      DefaultGameServerClustersServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices
}  // namespace cloud
}  // namespace google
