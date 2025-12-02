// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_24110005_NPC__DPI_H_
#define VERILATED_VYSYX_24110005_NPC__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005_NPC.v:12:34
    extern void device_update();
    // DPI import at /home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005_NPC.v:11:34
    extern void difftest_step(unsigned int pc, unsigned int npc);
    // DPI import at /home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005_NPC.v:7:34
    extern void finish_sim();
    // DPI import at /home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005_NPC.v:9:34
    extern void function_trace(unsigned int pc, unsigned int inst, unsigned int npc);
    // DPI import at /home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005_NPC.v:8:34
    extern void inst_trace(unsigned int pc, unsigned int inst, unsigned int npc);
    // DPI import at /home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005_inst_rom.v:24:29
    extern int pmem_read(unsigned int raddr);
    // DPI import at /home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005_Mem.v:24:30
    extern void pmem_write(unsigned int waddr, int wdata, char wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
