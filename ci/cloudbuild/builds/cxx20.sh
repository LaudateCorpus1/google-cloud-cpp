#!/bin/bash
#
# Copyright 2021 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

set -euo pipefail

source "$(dirname "$0")/../../lib/init.sh"
source module ci/cloudbuild/builds/lib/cmake.sh
source module ci/cloudbuild/builds/lib/integration.sh

export CC=gcc
export CXX=g++
mapfile -t cmake_args < <(cmake::common_args)

cmake "${cmake_args[@]}" -DCMAKE_CXX_STANDARD=20
cmake --build cmake-out
env -C cmake-out ctest -LE "integration-test" --parallel "$(nproc)"

integration::ctest_with_emulators "cmake-out"
