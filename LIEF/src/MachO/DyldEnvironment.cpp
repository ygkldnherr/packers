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
#include "LIEF/Visitor.hpp"
#include "LIEF/MachO/DyldEnvironment.hpp"
#include "MachO/Structures.hpp"

namespace LIEF {
namespace MachO {

DyldEnvironment::DyldEnvironment(const details::dylinker_command& cmd) :
  LoadCommand::LoadCommand{LoadCommand::TYPE(cmd.cmd), cmd.cmdsize}
{}

void DyldEnvironment::accept(Visitor& visitor) const {
  visitor.visit(*this);
}

std::ostream& DyldEnvironment::print(std::ostream& os) const {
  LoadCommand::print(os);
  os << value();
  return os;
}

}
}
