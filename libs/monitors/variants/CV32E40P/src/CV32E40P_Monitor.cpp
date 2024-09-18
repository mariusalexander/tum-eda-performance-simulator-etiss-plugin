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

#include "CV32E40P_Monitor.h"

#include "softwareEval-backends/Channel.h"

#include <sstream>
#include <string>
#include <stdbool.h>
#include <cstdint>

extern "C"
{
  uint64_t *CV32E40P_Monitor_instrCnt;
  uint64_t *CV32E40P_Monitor_typeId_buffer;
  uint64_t *CV32E40P_Monitor_rs1_buffer;
  uint64_t *CV32E40P_Monitor_rs2_buffer;
  uint64_t *CV32E40P_Monitor_rd_buffer;
  uint64_t *CV32E40P_Monitor_pc_buffer;
  uint64_t *CV32E40P_Monitor_brTarget_buffer;
  uint64_t *CV32E40P_Monitor_rs2_data_buffer;
}

extern InstructionMonitorSet* CV32E40P_InstrMonitorSet;

CV32E40P_Monitor::CV32E40P_Monitor(): Monitor("CV32E40P_Monitor", CV32E40P_InstrMonitorSet)
{}

void CV32E40P_Monitor::connectChannel(Channel* channel_)
{
  Monitor::connectChannel(channel_);

  CV32E40P_Monitor_instrCnt = &(channel_->instrCnt);
  CV32E40P_Monitor_typeId_buffer = channel_->typeId;

  CV32E40P_Monitor_rs1_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rs1"));
  CV32E40P_Monitor_rs2_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rs2"));
  CV32E40P_Monitor_rd_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rd"));
  CV32E40P_Monitor_pc_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("pc"));
  CV32E40P_Monitor_brTarget_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("brTarget"));
  CV32E40P_Monitor_rs2_data_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rs2_data"));
}


std::string CV32E40P_Monitor::getBlockDeclarations(void) const
{
  std::stringstream ret_strs;
 
  ret_strs << "extern uint64_t *CV32E40P_Monitor_instrCnt;\n";
  ret_strs << "extern uint64_t *CV32E40P_Monitor_typeId_buffer;\n";

  ret_strs << "extern uint64_t *CV32E40P_Monitor_rs1_buffer;\n";
  ret_strs << "extern uint64_t *CV32E40P_Monitor_rs2_buffer;\n";
  ret_strs << "extern uint64_t *CV32E40P_Monitor_rd_buffer;\n";
  ret_strs << "extern uint64_t *CV32E40P_Monitor_pc_buffer;\n";
  ret_strs << "extern uint64_t *CV32E40P_Monitor_brTarget_buffer;\n";
  ret_strs << "extern uint64_t *CV32E40P_Monitor_rs2_data_buffer;\n";

  return ret_strs.str();
}
