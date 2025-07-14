// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrc16.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcrc16__Syms.h"
#include "Vcrc16___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc16___024root___dump_triggers__ico(Vcrc16___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrc16___024root___eval_triggers__ico(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcrc16___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc16___024root___dump_triggers__act(Vcrc16___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrc16___024root___eval_triggers__act(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->rst_n) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__rst_n));
    vlSelf->__Vtrigrprev__TOP__rst_n = vlSelf->rst_n;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcrc16___024root___dump_triggers__act(vlSelf);
    }
#endif
}
