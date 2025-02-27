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
#include "ELF/pyELF.hpp"
#include "pySafeString.hpp"

#include "LIEF/ELF/SymbolVersionAux.hpp"

#include <string>
#include <sstream>
#include <nanobind/stl/string.h>

namespace LIEF::ELF::py {

template<>
void create<SymbolVersionAux>(nb::module_& m) {
  nb::class_<SymbolVersionAux, LIEF::Object>(m, "SymbolVersionAux",
      "Class which represents an Auxiliary Symbol version"_doc)

    .def_prop_rw("name",
        [] (const SymbolVersionAux& obj) {
          return LIEF::py::safe_string(obj.name());
        },
        nb::overload_cast<std::string>(&SymbolVersionAux::name),
        "Symbol's name (e.g. ``GLIBC_2.2.5``)"_doc)

    LIEF_DEFAULT_STR(SymbolVersionAux);
}
}
