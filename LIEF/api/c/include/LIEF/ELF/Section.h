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
#ifndef LIEF_C_ELF_SECTION_H
#define LIEF_C_ELF_SECTION_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct Elf_Section_t {
  const char* name;
  uint32_t    flags;
  uint32_t    type;
  uint64_t    virtual_address;
  uint64_t    offset;
  uint64_t    original_size;
  uint32_t    link;
  uint32_t    info;
  uint64_t    alignment;
  uint64_t    entry_size;
  uint64_t    size;
  uint8_t*    content;
  double      entropy;
};

typedef struct Elf_Section_t Elf_Section_t;

#ifdef __cplusplus
}
#endif

#endif
