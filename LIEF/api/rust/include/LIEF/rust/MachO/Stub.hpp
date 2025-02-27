/* Copyright 2024 - 2025 R. Thomas
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
#include "LIEF/MachO/Stub.hpp"

#include "LIEF/rust/Span.hpp"
#include "LIEF/rust/Mirror.hpp"
#include "LIEF/rust/error.hpp"

class MachO_Stub : public Mirror<LIEF::MachO::Stub> {
  public:
  using lief_t = LIEF::MachO::Stub;
  using Mirror::Mirror;

  auto address() const { return get().address(); };
  Span raw() const { return make_span(get().raw()); }

  uint64_t target(uint32_t& err) const {
    return details::make_error<uint64_t>(get().target(), err);
  }

};
