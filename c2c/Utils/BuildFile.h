/* Copyright 2013-2019 Bas van den Berg
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

#ifndef UTILS_BUILDFILE_H
#define UTILS_BUILDFILE_H

#include <string>
#include "Utils/StringList.h"

namespace C2 {

class BuildFile {
public:
    BuildFile();

    std::string target;
    std::string cc;
    std::string cflags;
    std::string ldflags;
    //std::string path;
    StringList libDirs;

    std::string outputDir;
};

}

#endif

