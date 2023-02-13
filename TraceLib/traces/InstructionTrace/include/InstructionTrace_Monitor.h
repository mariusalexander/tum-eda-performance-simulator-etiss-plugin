/*
 * Copyright 2022 Chair of EDA, Technical University of Munich
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *	 http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/********************* AUTO GENERATE FILE (create by Trace-Generator) *********************/

#ifndef INSTRUCTIONTRACE_MONITOR_H
#define INSTRUCTIONTRACE_MONITOR_H

#include "Components/Monitor.h"
#include "Components/Channel.h"

#include <string>

class InstructionTrace_Monitor : public Monitor
{
public:

  InstructionTrace_Monitor();

  virtual void connectChannel(Channel*);
  virtual std::string getBlockDeclarations(void) const;
};

#endif // INSTRUCTIONTRACE_MONITOR_H