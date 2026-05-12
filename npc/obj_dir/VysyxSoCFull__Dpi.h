// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005.v:79:32
    extern void difftest_step(unsigned int pc, unsigned int npc);
    // DPI import at /home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005.v:77:32
    extern void finish_sim();
    // DPI import at /home/minus7/ysyx-workbench/npc/../ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005.v:78:32
    extern void inst_trace(unsigned int pc, unsigned int inst, unsigned int npc);
    // DPI import at /home/minus7/ysyx-workbench/npc/../ysyxSoC/build/ysyxSoCFull.v:6766:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005.v:80:32
    extern void mtrace_read(unsigned int addr, unsigned int len);
    // DPI import at /home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005.v:81:32
    extern void mtrace_write(unsigned int addr, unsigned int len, unsigned int data);

#ifdef __cplusplus
}
#endif

#endif  // guard
