/*
* Copyright 2026 Chair of EDA, Technical University of Munich
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

/********************* AUTO GENERATE FILE (create by M2-ISA-R::Trace-Generator) *********************/


#include "Monitor.h"

#include "etiss/Instruction.h"

#include <sstream>
#include <string>

InstructionMonitorSet *SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet = new InstructionMonitorSet("SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet");

static InstructionMonitor *instrMonitor_add = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "add",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sub = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "sub",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sll = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "sll",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_xor = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "xor",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 3 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_or = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "or",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_and = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "and",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_cadd = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "cadd",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(6,2);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 6 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_mul = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "mul",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_rem = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "rem",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 8 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_addi = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "addi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 9 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sltiu = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "sltiu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 10 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_xori = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "xori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 11 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_ori = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "ori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 12 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_andi = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "andi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 13 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_caddi = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "caddi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(11,7);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 14 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_cslli = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "cslli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(11,7);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 15 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_caddi16sp = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "caddi16sp",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 16 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << "2" << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << "2" << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_cmv = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "cmv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(6,2);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 17 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_cli = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "cli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 18 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sb = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "sb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 19 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sh = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "sh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 20 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sw = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "sw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 21 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_csw = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "csw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(9,7);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(4,2);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 22 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lh = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "lh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 23 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lw = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "lw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 24 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lbu = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "lbu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 25 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lhu = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "lhu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 26 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_clw = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "clw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(9,7);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(4,2);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 27 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_beq = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "beq",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 28 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_brTarget_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 3)) >> 3) << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_bne = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "bne",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 29 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_brTarget_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 3)) >> 3) << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_blt = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "blt",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 30 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_brTarget_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 3)) >> 3) << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_bge = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "bge",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 31 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_brTarget_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 3)) >> 3) << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_bltu = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "bltu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 32 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_brTarget_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 3)) >> 3) << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_bgeu = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "bgeu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 33 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs2_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_brTarget_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 3)) >> 3) << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_cbeqz = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "cbeqz",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(9,7);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_8(12,12);
    imm += R_imm_8.read(ba) << 8;
    static etiss::instr::BitArrayRange R_imm_3(11,10);
    imm += R_imm_3.read(ba) << 3;
    static etiss::instr::BitArrayRange R_imm_6(6,5);
    imm += R_imm_6.read(ba) << 6;
    static etiss::instr::BitArrayRange R_imm_1(4,3);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_5(2,2);
    imm += R_imm_5.read(ba) << 5;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 34 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_brTarget_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 7)) >> 7) << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_cbnez = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "cbnez",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(9,7);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_8(12,12);
    imm += R_imm_8.read(ba) << 8;
    static etiss::instr::BitArrayRange R_imm_3(11,10);
    imm += R_imm_3.read(ba) << 3;
    static etiss::instr::BitArrayRange R_imm_6(6,5);
    imm += R_imm_6.read(ba) << 6;
    static etiss::instr::BitArrayRange R_imm_1(4,3);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_5(2,2);
    imm += R_imm_5.read(ba) << 5;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 35 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_brTarget_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ + (((int16_t)(imm  << 7)) >> 7) << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor__def = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "_def",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 36 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lb = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "lb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 37 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_slti = new InstructionMonitor(
  SimpleRISCV_H_nfw_StaBrPred_InstrMonitorSet,
  "slti",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_typeId_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << 38 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rs1_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rs1 << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_rd_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "SimpleRISCV_H_nfw_StaBrPred_Monitor_pc_buffer[*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*SimpleRISCV_H_nfw_StaBrPred_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
