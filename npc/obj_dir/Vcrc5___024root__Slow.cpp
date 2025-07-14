// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrc5.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcrc5__Syms.h"
#include "Vcrc5___024root.h"

void Vcrc5___024root___ctor_var_reset(Vcrc5___024root* vlSelf);

Vcrc5___024root::Vcrc5___024root(Vcrc5__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcrc5___024root___ctor_var_reset(this);
}

void Vcrc5___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcrc5___024root::~Vcrc5___024root() {
}
