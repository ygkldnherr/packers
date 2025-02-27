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
#include <string>

#include "LIEF/MachO/FilesetCommand.hpp"
#include "LIEF/rust/MachO/LoadCommand.hpp"

class MachO_Fileset : public MachO_Command {
  public:
  using lief_t = LIEF::MachO::FilesetCommand;
  MachO_Fileset(const lief_t& cmd) : MachO_Command(cmd) {}

  std::string name() const { return impl().name(); };
  uint64_t virtual_address() const { return impl().virtual_address(); };
  uint64_t file_offset() const { return impl().file_offset(); };

  static bool classof(const MachO_Command& cmd) {
    return lief_t::classof(&cmd.get());
  }
  private:
  const lief_t& impl() const { return as<lief_t>(this); }
};
