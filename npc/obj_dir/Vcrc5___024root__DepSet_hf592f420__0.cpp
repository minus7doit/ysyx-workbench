// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrc5.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcrc5__Syms.h"
#include "Vcrc5___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc5___024root___dump_triggers__ico(Vcrc5___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrc5___024root___eval_triggers__ico(Vcrc5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcrc5___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc5___024root___dump_triggers__act(Vcrc5___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrc5___024root___eval_triggers__act(Vcrc5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcrc5___024root___dump_triggers__act(vlSelf);
    }
#endif
}
