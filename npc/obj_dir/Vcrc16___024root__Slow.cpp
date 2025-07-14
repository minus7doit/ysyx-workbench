// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrc16.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcrc16__Syms.h"
#include "Vcrc16___024root.h"

void Vcrc16___024root___ctor_var_reset(Vcrc16___024root* vlSelf);

Vcrc16___024root::Vcrc16___024root(Vcrc16__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcrc16___024root___ctor_var_reset(this);
}

void Vcrc16___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcrc16___024root::~Vcrc16___024root() {
}
