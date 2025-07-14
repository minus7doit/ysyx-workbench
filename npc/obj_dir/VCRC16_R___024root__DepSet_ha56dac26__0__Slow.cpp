// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCRC16_R.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCRC16_R___024root.h"

VL_ATTR_COLD void VCRC16_R___024root___eval_static(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCRC16_R___024root___eval_initial(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst_n = vlSelf->rst_n;
}

VL_ATTR_COLD void VCRC16_R___024root___eval_final(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___eval_final\n"); );
}

VL_ATTR_COLD void VCRC16_R___024root___eval_triggers__stl(VCRC16_R___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCRC16_R___024root___dump_triggers__stl(VCRC16_R___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VCRC16_R___024root___eval_stl(VCRC16_R___024root* vlSelf);

VL_ATTR_COLD void VCRC16_R___024root___eval_settle(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VCRC16_R___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VCRC16_R___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/CRC16_R.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VCRC16_R___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCRC16_R___024root___dump_triggers__stl(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VCRC16_R___024root___ico_sequent__TOP__0(VCRC16_R___024root* vlSelf);

VL_ATTR_COLD void VCRC16_R___024root___eval_stl(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VCRC16_R___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCRC16_R___024root___dump_triggers__ico(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VCRC16_R___024root___dump_triggers__act(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or [changed] rst_n)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCRC16_R___024root___dump_triggers__nba(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or [changed] rst_n)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCRC16_R___024root___ctor_var_reset(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->din = VL_RAND_RESET_I(8);
    vlSelf->I_valid = VL_RAND_RESET_I(1);
    vlSelf->O_ready = VL_RAND_RESET_I(1);
    vlSelf->crc16_en = VL_RAND_RESET_I(1);
    vlSelf->I_sop = VL_RAND_RESET_I(1);
    vlSelf->I_eop = VL_RAND_RESET_I(1);
    vlSelf->w_en = VL_RAND_RESET_I(1);
    vlSelf->dout = VL_RAND_RESET_I(8);
    vlSelf->O_sop = VL_RAND_RESET_I(1);
    vlSelf->O_eop = VL_RAND_RESET_I(1);
    vlSelf->O_valid = VL_RAND_RESET_I(1);
    vlSelf->I_ready = VL_RAND_RESET_I(1);
    vlSelf->crc16_err = VL_RAND_RESET_I(1);
    vlSelf->CRC16_R__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->CRC16_R__DOT__r_crc16_out = VL_RAND_RESET_I(16);
    vlSelf->CRC16_R__DOT____Vcellinp__inst_mod2__I_en = VL_RAND_RESET_I(1);
    vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid = VL_RAND_RESET_I(24);
    vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next = VL_RAND_RESET_I(24);
    vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain = VL_RAND_RESET_I(17);
    vlSelf->CRC16_R__DOT__inst_mod2__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
