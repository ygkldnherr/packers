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
#include <string>
#include <sstream>
#include <nanobind/stl/string.h>

#include "LIEF/MachO/LinkerOptHint.hpp"

#include "MachO/pyMachO.hpp"
#include "nanobind/extra/stl/lief_span.h"

namespace LIEF::MachO::py {

template<>
void create<LinkerOptHint>(nb::module_& m) {

  nb::class_<LinkerOptHint, LoadCommand>(m, "LinkerOptHint",
    R"delim(
    Class which represents the `LC_LINKER_OPTIMIZATION_HINT` command
    )delim"_doc)

    .def_prop_rw("data_offset",
        nb::overload_cast<>(&LinkerOptHint::data_offset, nb::const_),
        nb::overload_cast<uint32_t>(&LinkerOptHint::data_offset),
        "Offset in the binary where the payload starts"_doc)

    .def_prop_rw("data_size",
        nb::overload_cast<>(&LinkerOptHint::data_offset, nb::const_),
        nb::overload_cast<uint32_t>(&LinkerOptHint::data_offset),
        "Size of the raw payload"_doc)

    .def_prop_ro("content",
        nb::overload_cast<>(&LinkerOptHint::content, nb::const_),
        "The raw payload"_doc)

    LIEF_DEFAULT_STR(LinkerOptHint);
}

}
