// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/spanner/testing/pick_instance_config.h"
#include "google/cloud/spanner/admin/instance_admin_client.h"
#include "google/cloud/project.h"
#include <regex>

namespace google {
namespace cloud {
namespace spanner_testing {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::string PickInstanceConfig(
    std::string const& project_id, std::regex const& filter_regex,
    google::cloud::internal::DefaultPRNG& generator) {
  spanner_admin::InstanceAdminClient client(
      spanner_admin::MakeInstanceAdminConnection());
  std::string instance_config_name{};
  auto instance_configs =
      [&client, &instance_config_name, &project_id,
       &filter_regex]() mutable -> std::vector<std::string> {
    std::vector<std::string> ret;
    for (auto const& instance_config :
         client.ListInstanceConfigs(Project(project_id).FullName())) {
      if (!instance_config) return ret;
      if (instance_config_name.empty()) {
        instance_config_name = instance_config->name();
      }
      if (std::regex_match(instance_config->name(), filter_regex)) {
        ret.push_back(instance_config->name());
      }
    }
    return ret;
  }();
  if (!instance_configs.empty()) {
    auto random_index = std::uniform_int_distribution<std::size_t>(
        0, instance_configs.size() - 1);
    instance_config_name = instance_configs[random_index(generator)];
  }
  return instance_config_name;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_testing
}  // namespace cloud
}  // namespace google
