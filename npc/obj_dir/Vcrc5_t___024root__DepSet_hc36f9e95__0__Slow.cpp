// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrc5_t.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcrc5_t___024root.h"

VL_ATTR_COLD void Vcrc5_t___024root___eval_static(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcrc5_t___024root___eval_initial(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vcrc5_t___024root___eval_final(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcrc5_t___024root___eval_triggers__stl(Vcrc5_t___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc5_t___024root___dump_triggers__stl(Vcrc5_t___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcrc5_t___024root___eval_stl(Vcrc5_t___024root* vlSelf);

VL_ATTR_COLD void Vcrc5_t___024root___eval_settle(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vcrc5_t___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vcrc5_t___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/crc5_t.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vcrc5_t___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc5_t___024root___dump_triggers__stl(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vcrc5_t___024root___ico_sequent__TOP__0(Vcrc5_t___024root* vlSelf);

VL_ATTR_COLD void Vcrc5_t___024root___eval_stl(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vcrc5_t___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc5_t___024root___dump_triggers__ico(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc5_t___024root___dump_triggers__act(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc5_t___024root___dump_triggers__nba(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcrc5_t___024root___ctor_var_reset(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tx_addr = VL_RAND_RESET_I(7);
    vlSelf->tx_endp = VL_RAND_RESET_I(4);
    vlSelf->packet_out = VL_RAND_RESET_I(16);
    vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid = VL_RAND_RESET_I(16);
    vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next = VL_RAND_RESET_I(16);
    vlSelf->crc5_t__DOT__inst_mod2__DOT__remain = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
