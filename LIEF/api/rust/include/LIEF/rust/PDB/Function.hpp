/* Copyright 2022 - 2025 R. Thomas
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
#pragma once

#include "LIEF/rust/debug_location.hpp"
#include "LIEF/rust/Mirror.hpp"
#include "LIEF/PDB/Function.hpp"

class PDB_Function : private Mirror<LIEF::pdb::Function> {
  public:
  using Mirror::Mirror;
  using lief_t = LIEF::pdb::Function;

  auto name() const { return get().name(); }
  auto RVA() const { return get().RVA(); }
  auto code_size() const { return get().code_size(); }
  auto section_name() const { return get().section_name(); }
  auto debug_location() const {
    return details::make_location(get().debug_location());
  }

  auto to_string() const { return get().to_string(); }
};
