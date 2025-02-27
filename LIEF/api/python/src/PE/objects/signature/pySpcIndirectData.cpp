
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
#include "PE/pyPE.hpp"

#include "LIEF/PE/signature/SpcIndirectData.hpp"

#include <string>
#include <sstream>
#include <nanobind/stl/string.h>
#include <nanobind/extra/stl/lief_span.h>

namespace LIEF::PE::py {

template<>
void create<SpcIndirectData>(nb::module_& m) {
  nb::class_<SpcIndirectData, ContentInfo::Content>(m, "SpcIndirectData")
    .def_prop_ro("digest_algorithm", &SpcIndirectData::digest_algorithm,
                 R"delim(
                 Digest used to hash the file. This should match
                 :attr:`~lief.PE.SignerInfo.digest_algorithm`
                 )delim"_doc)

    .def_prop_ro("digest",
                 nb::overload_cast<>(&SpcIndirectData::digest, nb::const_))
    .def_prop_ro("file", &SpcIndirectData::file)
    .def_prop_ro("url", &SpcIndirectData::url)
    LIEF_DEFAULT_STR(SpcIndirectData);
}

}

