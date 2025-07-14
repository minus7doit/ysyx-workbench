// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCRC16_R__Syms.h"
#include "VCRC16_R.h"
#include "VCRC16_R___024root.h"

// FUNCTIONS
VCRC16_R__Syms::~VCRC16_R__Syms()
{
}

VCRC16_R__Syms::VCRC16_R__Syms(VerilatedContext* contextp, const char* namep, VCRC16_R* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
