/* Copyright 2017 - 2025 R. Thomas
 * Copyright 2017 - 2025 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "platforms/pyPlatform.hpp"
#include "LIEF/platforms.hpp"
#include "enums_wrapper.hpp"
#include "pyLIEF.hpp"
#include "platforms/android/pyAndroid.hpp"

namespace LIEF::py {

void init_platforms(nb::module_& m) {
  LIEF::enum_<PLATFORMS>(m, "PLATFORMS")
    .value("UNKNOWN", PLATFORMS::PLAT_WINDOWS)
    .value("LINUX",   PLATFORMS::PLAT_LINUX)
    .value("ANDROID", PLATFORMS::PLAT_ANDROID)
    .value("WINDOWS", PLATFORMS::PLAT_WINDOWS)
    .value("IOS",     PLATFORMS::PLAT_IOS)
    .value("OSX",     PLATFORMS::PLAT_OSX);

  m.def("current_platform", &current_platform,
      "Return the current plaform (Linux, Windows, ...) as a :attr:`lief.PLATFORMS` enum"_doc);

  LIEF::Android::py::init_module(m);
}

}
