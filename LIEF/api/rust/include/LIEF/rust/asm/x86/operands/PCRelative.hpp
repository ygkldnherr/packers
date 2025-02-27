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
#include <LIEF/asm/x86/operands/PCRelative.hpp>

#include "LIEF/rust/asm/x86/Operand.hpp"

class asm_x86_operands_PCRelative : public asm_x86_Operand {
  public:
  using lief_t = LIEF::assembly::x86::operands::PCRelative;

  auto value() const {
    return impl().value();
  }

  static bool classof(const asm_x86_Operand& inst) {
    return lief_t::classof(&inst.get());
  }

  private:
  const lief_t& impl() const { return as<lief_t>(this); }
};
