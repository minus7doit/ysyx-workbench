// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCRC16_R.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCRC16_R__Syms.h"
#include "VCRC16_R___024root.h"

void VCRC16_R___024root___ctor_var_reset(VCRC16_R___024root* vlSelf);

VCRC16_R___024root::VCRC16_R___024root(VCRC16_R__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCRC16_R___024root___ctor_var_reset(this);
}

void VCRC16_R___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCRC16_R___024root::~VCRC16_R___024root() {
}
