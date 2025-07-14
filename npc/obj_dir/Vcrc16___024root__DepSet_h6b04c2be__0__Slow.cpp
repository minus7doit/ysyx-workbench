// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrc16.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcrc16___024root.h"

VL_ATTR_COLD void Vcrc16___024root___eval_static(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcrc16___024root___eval_initial(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__rst_n = vlSelf->rst_n;
}

VL_ATTR_COLD void Vcrc16___024root___eval_final(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcrc16___024root___eval_triggers__stl(Vcrc16___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc16___024root___dump_triggers__stl(Vcrc16___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcrc16___024root___eval_stl(Vcrc16___024root* vlSelf);

VL_ATTR_COLD void Vcrc16___024root___eval_settle(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vcrc16___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vcrc16___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/crc16.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vcrc16___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc16___024root___dump_triggers__stl(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vcrc16___024root___ico_sequent__TOP__0(Vcrc16___024root* vlSelf);

VL_ATTR_COLD void Vcrc16___024root___eval_stl(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vcrc16___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc16___024root___dump_triggers__ico(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vcrc16___024root___dump_triggers__act(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc16___024root___dump_triggers__nba(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcrc16___024root___ctor_var_reset(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->crc16_check_en = VL_RAND_RESET_I(1);
    vlSelf->din = VL_RAND_RESET_I(8);
    vlSelf->crc16_out = VL_RAND_RESET_I(16);
    vlSelf->crc16__DOT__CRC = VL_RAND_RESET_I(17);
    vlSelf->crc16__DOT__inst_mod2__DOT__result_mid = VL_RAND_RESET_I(24);
    vlSelf->crc16__DOT__inst_mod2__DOT__result_next = VL_RAND_RESET_I(24);
    vlSelf->crc16__DOT__inst_mod2__DOT__remain = VL_RAND_RESET_I(17);
    vlSelf->crc16__DOT__inst_mod2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
