// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCRC16_R.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCRC16_R___024root.h"

VL_INLINE_OPT void VCRC16_R___024root___ico_sequent__TOP__0(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->CRC16_R__DOT____Vcellinp__inst_mod2__I_en 
        = ((~ (IData)(vlSelf->I_sop)) & (IData)(vlSelf->crc16_en));
    if (vlSelf->CRC16_R__DOT____Vcellinp__inst_mod2__I_en) {
        vlSelf->CRC16_R__DOT__inst_mod2__DOT__i = 9U;
        vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
            = (((0x800000U & ((IData)(vlSelf->din) 
                              << 0x17U)) | ((0x400000U 
                                             & ((IData)(vlSelf->din) 
                                                << 0x15U)) 
                                            | ((0x200000U 
                                                & ((IData)(vlSelf->din) 
                                                   << 0x13U)) 
                                               | ((0x100000U 
                                                   & ((IData)(vlSelf->din) 
                                                      << 0x11U)) 
                                                  | ((0x80000U 
                                                      & ((IData)(vlSelf->din) 
                                                         << 0xfU)) 
                                                     | ((0x40000U 
                                                         & ((IData)(vlSelf->din) 
                                                            << 0xdU)) 
                                                        | ((0x20000U 
                                                            & ((IData)(vlSelf->din) 
                                                               << 0xbU)) 
                                                           | (0x10000U 
                                                              & ((IData)(vlSelf->din) 
                                                                 << 9U))))))))) 
               ^ ((IData)(vlSelf->CRC16_R__DOT__r_crc16_out) 
                  << 8U));
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
    } else {
        vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain = 0U;
        vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next = 0U;
        vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid = 0U;
    }
}

void VCRC16_R___024root___eval_ico(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VCRC16_R___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VCRC16_R___024root___eval_act(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___eval_act\n"); );
}

VL_INLINE_OPT void VCRC16_R___024root___nba_sequent__TOP__0(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__CRC16_R__DOT__r_crc16_out;
    __Vdly__CRC16_R__DOT__r_crc16_out = 0;
    // Body
    __Vdly__CRC16_R__DOT__r_crc16_out = vlSelf->CRC16_R__DOT__r_crc16_out;
    if (vlSelf->rst_n) {
        __Vdly__CRC16_R__DOT__r_crc16_out = (0xffffU 
                                             & ((((IData)(vlSelf->crc16_en) 
                                                  & (~ (IData)(vlSelf->I_sop))) 
                                                 & (IData)(vlSelf->I_valid))
                                                 ? vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain
                                                 : 
                                                (((IData)(vlSelf->crc16_en) 
                                                  & (~ (IData)(vlSelf->I_sop)))
                                                  ? (IData)(vlSelf->CRC16_R__DOT__r_crc16_out)
                                                  : 0xffffU)));
        vlSelf->crc16_err = ((0x800dU != (IData)(vlSelf->CRC16_R__DOT__r_crc16_out)) 
                             & (IData)(vlSelf->O_eop));
    } else {
        __Vdly__CRC16_R__DOT__r_crc16_out = 0xffffU;
        vlSelf->crc16_err = 0U;
    }
    vlSelf->CRC16_R__DOT__r_crc16_out = __Vdly__CRC16_R__DOT__r_crc16_out;
}

VL_INLINE_OPT void VCRC16_R___024root___nba_sequent__TOP__1(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst_n) {
        vlSelf->O_ready = 1U;
        vlSelf->dout = vlSelf->din;
        vlSelf->O_sop = vlSelf->I_sop;
        vlSelf->O_valid = ((IData)(vlSelf->I_valid) 
                           & (IData)(vlSelf->w_en));
        vlSelf->O_eop = vlSelf->I_eop;
    } else {
        vlSelf->O_ready = 0U;
        vlSelf->dout = 0U;
        vlSelf->O_sop = 0U;
        vlSelf->O_valid = 0U;
        vlSelf->O_eop = 0U;
    }
}

VL_INLINE_OPT void VCRC16_R___024root___nba_sequent__TOP__2(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->CRC16_R__DOT____Vcellinp__inst_mod2__I_en) {
        vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
            = (((0x800000U & ((IData)(vlSelf->din) 
                              << 0x17U)) | ((0x400000U 
                                             & ((IData)(vlSelf->din) 
                                                << 0x15U)) 
                                            | ((0x200000U 
                                                & ((IData)(vlSelf->din) 
                                                   << 0x13U)) 
                                               | ((0x100000U 
                                                   & ((IData)(vlSelf->din) 
                                                      << 0x11U)) 
                                                  | ((0x80000U 
                                                      & ((IData)(vlSelf->din) 
                                                         << 0xfU)) 
                                                     | ((0x40000U 
                                                         & ((IData)(vlSelf->din) 
                                                            << 0xdU)) 
                                                        | ((0x20000U 
                                                            & ((IData)(vlSelf->din) 
                                                               << 0xbU)) 
                                                           | (0x10000U 
                                                              & ((IData)(vlSelf->din) 
                                                                 << 9U))))))))) 
               ^ ((IData)(vlSelf->CRC16_R__DOT__r_crc16_out) 
                  << 8U));
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (0x18005U ^ (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                           >> 7U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next;
        }
    } else {
        vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain = 0U;
        vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next = 0U;
        vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid = 0U;
    }
}

void VCRC16_R___024root___eval_nba(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VCRC16_R___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VCRC16_R___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VCRC16_R___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void VCRC16_R___024root___eval_triggers__ico(VCRC16_R___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCRC16_R___024root___dump_triggers__ico(VCRC16_R___024root* vlSelf);
#endif  // VL_DEBUG
void VCRC16_R___024root___eval_triggers__act(VCRC16_R___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCRC16_R___024root___dump_triggers__act(VCRC16_R___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCRC16_R___024root___dump_triggers__nba(VCRC16_R___024root* vlSelf);
#endif  // VL_DEBUG

void VCRC16_R___024root___eval(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VCRC16_R___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VCRC16_R___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/CRC16_R.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VCRC16_R___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VCRC16_R___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VCRC16_R___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/CRC16_R.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VCRC16_R___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VCRC16_R___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/CRC16_R.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VCRC16_R___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VCRC16_R___024root___eval_debug_assertions(VCRC16_R___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->I_valid & 0xfeU))) {
        Verilated::overWidthError("I_valid");}
    if (VL_UNLIKELY((vlSelf->crc16_en & 0xfeU))) {
        Verilated::overWidthError("crc16_en");}
    if (VL_UNLIKELY((vlSelf->I_sop & 0xfeU))) {
        Verilated::overWidthError("I_sop");}
    if (VL_UNLIKELY((vlSelf->I_eop & 0xfeU))) {
        Verilated::overWidthError("I_eop");}
    if (VL_UNLIKELY((vlSelf->w_en & 0xfeU))) {
        Verilated::overWidthError("w_en");}
    if (VL_UNLIKELY((vlSelf->I_ready & 0xfeU))) {
        Verilated::overWidthError("I_ready");}
}
#endif  // VL_DEBUG
