// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/channel/cloud_channel_client.h"
#include <iostream>
#include <stdexcept>
#include <string>

int main(int argc, char* argv[]) try {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " account-id\n";
    return 1;
  }

  namespace channel = ::google::cloud::channel;
  auto client = channel::CloudChannelServiceClient(
      channel::MakeCloudChannelServiceConnection());

  // Fill in this request as needed.
  auto request = google::cloud::channel::v1::ListProductsRequest{};
  request.set_account(std::string("accounts/") + argv[1]);
  for (auto r : client.ListProducts(std::move(request))) {
    if (!r) throw std::runtime_error(r.status().message());
    std::cout << r->DebugString() << "\n";
  }

  return 0;
} catch (std::exception const& ex) {
  std::cerr << "Standard exception raised: " << ex.what() << "\n";
  return 1;
}