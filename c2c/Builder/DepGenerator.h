/* Copyright 2013,2014 Bas van den Berg
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

#ifndef BUILDER_DEP_GENERATOR_H
#define BUILDER_DEP_GENERATOR_H

#include <string>
#include <vector>

namespace C2 {

class AST;
class PkgInfo;
class StringBuilder;
class Decl;

class DepGenerator {
public:
    DepGenerator() {}
    ~DepGenerator();

    void analyse(const AST& ast);
    void write(StringBuilder& output) const;
private:
    PkgInfo* getInfo(const std::string& pkgname);
    void writeAST(const AST& ast, StringBuilder& output, unsigned indent) const;
    void writeDecl(const Decl* D, StringBuilder& output, unsigned indent) const;

    typedef std::vector<PkgInfo*> Packages;
    Packages packages;

    DepGenerator(const DepGenerator&);
    DepGenerator& operator= (const DepGenerator&);
};

}

#endif

