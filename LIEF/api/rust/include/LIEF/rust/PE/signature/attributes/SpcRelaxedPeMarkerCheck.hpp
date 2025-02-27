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
#include "LIEF/PE/signature/attributes/SpcRelaxedPeMarkerCheck.hpp"
#include "LIEF/rust/PE/signature/attributes/Attribute.hpp"

class PE_SpcRelaxedPeMarkerCheck : public PE_Attribute {
  public:
  using lief_t = LIEF::PE::SpcRelaxedPeMarkerCheck;
  PE_SpcRelaxedPeMarkerCheck(const lief_t& base) : PE_Attribute(base) {}

  static bool classof(const PE_Attribute& attr) {
    return lief_t::classof(&attr.get());
  }

  auto value() const { return impl().value(); }

  private:
  const lief_t& impl() const { return as<lief_t>(this); }
};
