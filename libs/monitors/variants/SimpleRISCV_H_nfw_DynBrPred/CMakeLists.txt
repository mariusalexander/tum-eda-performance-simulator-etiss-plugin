
TARGET_SOURCES(SWEVAL_MONITORS_LIB PRIVATE
  	src/SimpleRISCV_H_nfw_DynBrPred_Monitor.cpp
	src/SimpleRISCV_H_nfw_DynBrPred_InstructionMonitors.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_MONITORS_LIB PRIVATE
include
)
