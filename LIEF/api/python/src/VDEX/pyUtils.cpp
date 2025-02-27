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
#include "VDEX/pyVDEX.hpp"

#include "LIEF/VDEX/utils.hpp"
#include <nanobind/stl/string.h>
#include <nanobind/stl/vector.h>

namespace LIEF::VDEX::py {

void init_utils(nb::module_& m) {
  lief_mod->def("is_vdex", nb::overload_cast<const std::string&>(&is_vdex),
      "Check if the **file** given in parameter is an VDEX"_doc,
      "path"_a);

  lief_mod->def("is_vdex", nb::overload_cast<const std::vector<uint8_t>&>(&is_vdex),
      "Check if the **raw data** given in parameter is a VDEX"_doc,
      "raw"_a);

  m.def("version", nb::overload_cast<const std::string&>(&version),
      "Return the VDEX version of the **file** given in parameter"_doc,
      "file"_a);

  m.def("version", nb::overload_cast<const std::vector<uint8_t>&>(&version),
      "Return the VDEX version of the **raw data** given in parameter"_doc,
      "raw"_a);

  m.def("android_version",
      &android_version,
      "Return the " RST_CLASS_REF(lief.Android.ANDROID_VERSIONS) " associated with the given VDEX version"_doc,
      "vdex_version"_a);
}

}

