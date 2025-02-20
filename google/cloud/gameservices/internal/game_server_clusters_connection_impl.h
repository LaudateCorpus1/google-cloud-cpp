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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_INTERNAL_GAME_SERVER_CLUSTERS_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_INTERNAL_GAME_SERVER_CLUSTERS_CONNECTION_IMPL_H

#include "google/cloud/gameservices/game_server_clusters_connection.h"
#include "google/cloud/gameservices/game_server_clusters_connection_idempotency_policy.h"
#include "google/cloud/gameservices/game_server_clusters_options.h"
#include "google/cloud/gameservices/internal/game_server_clusters_retry_traits.h"
#include "google/cloud/gameservices/internal/game_server_clusters_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class GameServerClustersServiceConnectionImpl
    : public gameservices::GameServerClustersServiceConnection {
 public:
  ~GameServerClustersServiceConnectionImpl() override = default;

  GameServerClustersServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<gameservices_internal::GameServerClustersServiceStub>
          stub,
      Options const& options);

  StreamRange<google::cloud::gaming::v1::GameServerCluster>
  ListGameServerClusters(
      google::cloud::gaming::v1::ListGameServerClustersRequest request)
      override;

  StatusOr<google::cloud::gaming::v1::GameServerCluster> GetGameServerCluster(
      google::cloud::gaming::v1::GetGameServerClusterRequest const& request)
      override;

  future<StatusOr<google::cloud::gaming::v1::GameServerCluster>>
  CreateGameServerCluster(
      google::cloud::gaming::v1::CreateGameServerClusterRequest const& request)
      override;

  StatusOr<google::cloud::gaming::v1::PreviewCreateGameServerClusterResponse>
  PreviewCreateGameServerCluster(
      google::cloud::gaming::v1::PreviewCreateGameServerClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::gaming::v1::OperationMetadata>>
  DeleteGameServerCluster(
      google::cloud::gaming::v1::DeleteGameServerClusterRequest const& request)
      override;

  StatusOr<google::cloud::gaming::v1::PreviewDeleteGameServerClusterResponse>
  PreviewDeleteGameServerCluster(
      google::cloud::gaming::v1::PreviewDeleteGameServerClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::gaming::v1::GameServerCluster>>
  UpdateGameServerCluster(
      google::cloud::gaming::v1::UpdateGameServerClusterRequest const& request)
      override;

  StatusOr<google::cloud::gaming::v1::PreviewUpdateGameServerClusterResponse>
  PreviewUpdateGameServerCluster(
      google::cloud::gaming::v1::PreviewUpdateGameServerClusterRequest const&
          request) override;

 private:
  std::unique_ptr<gameservices::GameServerClustersServiceRetryPolicy>
  retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<gameservices::GameServerClustersServiceRetryPolicyOption>()) {
      return options
          .get<gameservices::GameServerClustersServiceRetryPolicyOption>()
          ->clone();
    }
    return retry_policy_prototype_->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            gameservices::GameServerClustersServiceBackoffPolicyOption>()) {
      return options
          .get<gameservices::GameServerClustersServiceBackoffPolicyOption>()
          ->clone();
    }
    return backoff_policy_prototype_->clone();
  }

  std::unique_ptr<
      gameservices::GameServerClustersServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            gameservices::
                GameServerClustersServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<gameservices::
                   GameServerClustersServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return idempotency_policy_->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<gameservices_internal::GameServerClustersServiceStub> stub_;
  std::unique_ptr<gameservices::GameServerClustersServiceRetryPolicy const>
      retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<
      gameservices::GameServerClustersServiceConnectionIdempotencyPolicy>
      idempotency_policy_;

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            gameservices::GameServerClustersServicePollingPolicyOption>()) {
      return options
          .get<gameservices::GameServerClustersServicePollingPolicyOption>()
          ->clone();
    }
    return polling_policy_prototype_->clone();
  }

  std::unique_ptr<PollingPolicy const> polling_policy_prototype_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_INTERNAL_GAME_SERVER_CLUSTERS_CONNECTION_IMPL_H
