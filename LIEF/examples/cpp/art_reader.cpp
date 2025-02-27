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
#include <iostream>
#include <memory>

#include <LIEF/ART.hpp>
#include <LIEF/logging.hpp>

using namespace LIEF::ART;


int main(int argc, char **argv) {
  LIEF::logging::set_level(LIEF::logging::LEVEL::DEBUG);
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <ART file>" << '\n';
    return EXIT_FAILURE;
  }
  if (std::unique_ptr<const File> file = LIEF::ART::Parser::parse(argv[1])) {
    std::cout << *file << "\n";
    return EXIT_SUCCESS;
  }

  return EXIT_FAILURE;
}

