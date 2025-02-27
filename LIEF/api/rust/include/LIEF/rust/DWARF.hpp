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
#include "LIEF/rust/DWARF/DebugInfo.hpp"
#include "LIEF/rust/DWARF/CompilationUnit.hpp"
#include "LIEF/rust/DWARF/Function.hpp"
#include "LIEF/rust/DWARF/Variable.hpp"
#include "LIEF/rust/DWARF/Scope.hpp"
#include "LIEF/rust/DWARF/Type.hpp"
#include "LIEF/rust/DWARF/Parameter.hpp"

#include "LIEF/rust/DWARF/types/ClassLike.hpp"
#include "LIEF/rust/DWARF/types/Pointer.hpp"
#include "LIEF/rust/DWARF/types/Const.hpp"
#include "LIEF/rust/DWARF/types/Base.hpp"
#include "LIEF/rust/DWARF/types/Array.hpp"
#include "LIEF/rust/DWARF/types/Typedef.hpp"
#include "LIEF/rust/DWARF/types/Atomic.hpp"
#include "LIEF/rust/DWARF/types/Coarray.hpp"
#include "LIEF/rust/DWARF/types/Dynamic.hpp"
#include "LIEF/rust/DWARF/types/File.hpp"
#include "LIEF/rust/DWARF/types/Immutable.hpp"
#include "LIEF/rust/DWARF/types/Interface.hpp"
#include "LIEF/rust/DWARF/types/PointerToMember.hpp"
#include "LIEF/rust/DWARF/types/RValueRef.hpp"
#include "LIEF/rust/DWARF/types/Reference.hpp"
#include "LIEF/rust/DWARF/types/Restrict.hpp"
#include "LIEF/rust/DWARF/types/SetTy.hpp"
#include "LIEF/rust/DWARF/types/Shared.hpp"
#include "LIEF/rust/DWARF/types/StringTy.hpp"
#include "LIEF/rust/DWARF/types/Subroutine.hpp"
#include "LIEF/rust/DWARF/types/TemplateAlias.hpp"
#include "LIEF/rust/DWARF/types/Thrown.hpp"
#include "LIEF/rust/DWARF/types/Volatile.hpp"
#include "LIEF/rust/DWARF/types/Enum.hpp"
