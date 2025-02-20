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
// source: google/cloud/notebooks/v1/managed_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_MANAGED_NOTEBOOK_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_MANAGED_NOTEBOOK_CLIENT_H

#include "google/cloud/notebooks/managed_notebook_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace notebooks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// API v1 service for Managed Notebooks.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class ManagedNotebookServiceClient {
 public:
  explicit ManagedNotebookServiceClient(
      std::shared_ptr<ManagedNotebookServiceConnection> connection,
      Options options = {});
  ~ManagedNotebookServiceClient();

  //@{
  // @name Copy and move support
  ManagedNotebookServiceClient(ManagedNotebookServiceClient const&) = default;
  ManagedNotebookServiceClient& operator=(ManagedNotebookServiceClient const&) =
      default;
  ManagedNotebookServiceClient(ManagedNotebookServiceClient&&) = default;
  ManagedNotebookServiceClient& operator=(ManagedNotebookServiceClient&&) =
      default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(ManagedNotebookServiceClient const& a,
                         ManagedNotebookServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ManagedNotebookServiceClient const& a,
                         ManagedNotebookServiceClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Lists Runtimes in a given project and location.
  ///
  /// @param parent  Required. Format:
  ///  `parent=projects/{project_id}/locations/{location}`
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.ListRuntimesRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L157}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  StreamRange<google::cloud::notebooks::v1::Runtime> ListRuntimes(
      std::string const& parent, Options options = {});

  ///
  /// Lists Runtimes in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::notebooks::v1::ListRuntimesRequest,google/cloud/notebooks/v1/managed_service.proto#L157}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.ListRuntimesRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L157}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  StreamRange<google::cloud::notebooks::v1::Runtime> ListRuntimes(
      google::cloud::notebooks::v1::ListRuntimesRequest request,
      Options options = {});

  ///
  /// Gets details of a single Runtime. The location must be a regional endpoint
  /// rather than zonal.
  ///
  /// @param name  Required. Format:
  ///  `projects/{project_id}/locations/{location}/runtimes/{runtime_id}`
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.GetRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L191}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  StatusOr<google::cloud::notebooks::v1::Runtime> GetRuntime(
      std::string const& name, Options options = {});

  ///
  /// Gets details of a single Runtime. The location must be a regional endpoint
  /// rather than zonal.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::notebooks::v1::GetRuntimeRequest,google/cloud/notebooks/v1/managed_service.proto#L191}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.GetRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L191}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  StatusOr<google::cloud::notebooks::v1::Runtime> GetRuntime(
      google::cloud::notebooks::v1::GetRuntimeRequest const& request,
      Options options = {});

  ///
  /// Creates a new Runtime in a given project and location.
  ///
  /// @param parent  Required. Format:
  ///  `parent=projects/{project_id}/locations/{location}`
  /// @param runtime_id  Required. User-defined unique ID of this Runtime.
  /// @param runtime  Required. The Runtime to be created.
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.CreateRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L203}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  future<StatusOr<google::cloud::notebooks::v1::Runtime>> CreateRuntime(
      std::string const& parent, std::string const& runtime_id,
      google::cloud::notebooks::v1::Runtime const& runtime,
      Options options = {});

  ///
  /// Creates a new Runtime in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::notebooks::v1::CreateRuntimeRequest,google/cloud/notebooks/v1/managed_service.proto#L203}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.CreateRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L203}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  future<StatusOr<google::cloud::notebooks::v1::Runtime>> CreateRuntime(
      google::cloud::notebooks::v1::CreateRuntimeRequest const& request,
      Options options = {});

  ///
  /// Deletes a single Runtime.
  ///
  /// @param name  Required. Format:
  ///  `projects/{project_id}/locations/{location}/runtimes/{runtime_id}`
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::OperationMetadata,google/cloud/notebooks/v1/service.proto#L400}
  ///
  /// [google.cloud.notebooks.v1.DeleteRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L221}
  /// [google.cloud.notebooks.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/service.proto#L400}
  ///
  future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
  DeleteRuntime(std::string const& name, Options options = {});

  ///
  /// Deletes a single Runtime.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::notebooks::v1::DeleteRuntimeRequest,google/cloud/notebooks/v1/managed_service.proto#L221}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::OperationMetadata,google/cloud/notebooks/v1/service.proto#L400}
  ///
  /// [google.cloud.notebooks.v1.DeleteRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L221}
  /// [google.cloud.notebooks.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/service.proto#L400}
  ///
  future<StatusOr<google::cloud::notebooks::v1::OperationMetadata>>
  DeleteRuntime(
      google::cloud::notebooks::v1::DeleteRuntimeRequest const& request,
      Options options = {});

  ///
  /// Starts a Managed Notebook Runtime.
  /// Perform "Start" on GPU instances; "Resume" on CPU instances
  /// See:
  /// https://cloud.google.com/compute/docs/instances/stop-start-instance
  /// https://cloud.google.com/compute/docs/instances/suspend-resume-instance
  ///
  /// @param name  Required. Format:
  ///  `projects/{project_id}/locations/{location}/runtimes/{runtime_id}`
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.StartRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L233}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  future<StatusOr<google::cloud::notebooks::v1::Runtime>> StartRuntime(
      std::string const& name, Options options = {});

  ///
  /// Starts a Managed Notebook Runtime.
  /// Perform "Start" on GPU instances; "Resume" on CPU instances
  /// See:
  /// https://cloud.google.com/compute/docs/instances/stop-start-instance
  /// https://cloud.google.com/compute/docs/instances/suspend-resume-instance
  ///
  /// @param request
  /// @googleapis_link{google::cloud::notebooks::v1::StartRuntimeRequest,google/cloud/notebooks/v1/managed_service.proto#L233}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.StartRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L233}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  future<StatusOr<google::cloud::notebooks::v1::Runtime>> StartRuntime(
      google::cloud::notebooks::v1::StartRuntimeRequest const& request,
      Options options = {});

  ///
  /// Stops a Managed Notebook Runtime.
  /// Perform "Stop" on GPU instances; "Suspend" on CPU instances
  /// See:
  /// https://cloud.google.com/compute/docs/instances/stop-start-instance
  /// https://cloud.google.com/compute/docs/instances/suspend-resume-instance
  ///
  /// @param name  Required. Format:
  ///  `projects/{project_id}/locations/{location}/runtimes/{runtime_id}`
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.StopRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L240}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  future<StatusOr<google::cloud::notebooks::v1::Runtime>> StopRuntime(
      std::string const& name, Options options = {});

  ///
  /// Stops a Managed Notebook Runtime.
  /// Perform "Stop" on GPU instances; "Suspend" on CPU instances
  /// See:
  /// https://cloud.google.com/compute/docs/instances/stop-start-instance
  /// https://cloud.google.com/compute/docs/instances/suspend-resume-instance
  ///
  /// @param request
  /// @googleapis_link{google::cloud::notebooks::v1::StopRuntimeRequest,google/cloud/notebooks/v1/managed_service.proto#L240}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.StopRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L240}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  future<StatusOr<google::cloud::notebooks::v1::Runtime>> StopRuntime(
      google::cloud::notebooks::v1::StopRuntimeRequest const& request,
      Options options = {});

  ///
  /// Switch a Managed Notebook Runtime.
  ///
  /// @param name  Required. Format:
  ///  `projects/{project_id}/locations/{location}/runtimes/{runtime_id}`
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.SwitchRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L247}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  future<StatusOr<google::cloud::notebooks::v1::Runtime>> SwitchRuntime(
      std::string const& name, Options options = {});

  ///
  /// Switch a Managed Notebook Runtime.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::notebooks::v1::SwitchRuntimeRequest,google/cloud/notebooks/v1/managed_service.proto#L247}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.SwitchRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L247}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  future<StatusOr<google::cloud::notebooks::v1::Runtime>> SwitchRuntime(
      google::cloud::notebooks::v1::SwitchRuntimeRequest const& request,
      Options options = {});

  ///
  /// Resets a Managed Notebook Runtime.
  ///
  /// @param name  Required. Format:
  ///  `projects/{project_id}/locations/{location}/runtimes/{runtime_id}`
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.ResetRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L260}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  future<StatusOr<google::cloud::notebooks::v1::Runtime>> ResetRuntime(
      std::string const& name, Options options = {});

  ///
  /// Resets a Managed Notebook Runtime.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::notebooks::v1::ResetRuntimeRequest,google/cloud/notebooks/v1/managed_service.proto#L260}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.ResetRuntimeRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L260}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  future<StatusOr<google::cloud::notebooks::v1::Runtime>> ResetRuntime(
      google::cloud::notebooks::v1::ResetRuntimeRequest const& request,
      Options options = {});

  ///
  /// Report and process a runtime event.
  ///
  /// @param name  Required. Format:
  ///  `projects/{project_id}/locations/{location}/runtimes/{runtime_id}`
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.ReportRuntimeEventRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L267}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  future<StatusOr<google::cloud::notebooks::v1::Runtime>> ReportRuntimeEvent(
      std::string const& name, Options options = {});

  ///
  /// Report and process a runtime event.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::notebooks::v1::ReportRuntimeEventRequest,google/cloud/notebooks/v1/managed_service.proto#L267}
  /// @param options  Optional. Operation options.
  /// @return
  /// @googleapis_link{google::cloud::notebooks::v1::Runtime,google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  /// [google.cloud.notebooks.v1.ReportRuntimeEventRequest]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/managed_service.proto#L267}
  /// [google.cloud.notebooks.v1.Runtime]:
  /// @googleapis_reference_link{google/cloud/notebooks/v1/runtime.proto#L33}
  ///
  future<StatusOr<google::cloud::notebooks::v1::Runtime>> ReportRuntimeEvent(
      google::cloud::notebooks::v1::ReportRuntimeEventRequest const& request,
      Options options = {});

 private:
  std::shared_ptr<ManagedNotebookServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace notebooks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_NOTEBOOKS_MANAGED_NOTEBOOK_CLIENT_H
