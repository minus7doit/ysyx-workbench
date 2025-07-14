// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrc16.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcrc16___024root.h"

VL_INLINE_OPT void Vcrc16___024root___ico_sequent__TOP__0(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->crc16_check_en) {
        vlSelf->crc16__DOT__inst_mod2__DOT__i = 9U;
        vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
            = (0xffffffU & (~ ((0x800000U & ((IData)(vlSelf->din) 
                                             << 0x17U)) 
                               | ((0x400000U & ((IData)(vlSelf->din) 
                                                << 0x15U)) 
                                  | ((0x200000U & ((IData)(vlSelf->din) 
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
                                                       << 9U)))))))))));
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
    } else {
        vlSelf->crc16__DOT__inst_mod2__DOT__remain = 0U;
        vlSelf->crc16__DOT__inst_mod2__DOT__result_next = 0U;
        vlSelf->crc16__DOT__inst_mod2__DOT__result_mid = 0U;
    }
    vlSelf->crc16_out = (0xffffU & (~ ((0x8000U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                   << 0xfU)) 
                                       | ((0x4000U 
                                           & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                              << 0xdU)) 
                                          | ((0x2000U 
                                              & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                 << 0xbU)) 
                                             | ((0x1000U 
                                                 & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                    << 9U)) 
                                                | ((0x800U 
                                                    & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                       << 7U)) 
                                                   | ((0x400U 
                                                       & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                          << 5U)) 
                                                      | ((0x200U 
                                                          & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                             << 3U)) 
                                                         | ((0x100U 
                                                             & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                << 1U)) 
                                                            | ((0x80U 
                                                                & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                   >> 1U)) 
                                                               | ((0x40U 
                                                                   & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                      >> 3U)) 
                                                                  | ((0x20U 
                                                                      & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                         >> 5U)) 
                                                                     | ((0x10U 
                                                                         & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                            >> 7U)) 
                                                                        | ((8U 
                                                                            & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                               >> 9U)) 
                                                                           | ((4U 
                                                                               & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                                >> 0xbU)) 
                                                                              | ((2U 
                                                                                & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                                >> 0xdU)) 
                                                                                | (1U 
                                                                                & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                                >> 0xfU)))))))))))))))))));
}

void Vcrc16___024root___eval_ico(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vcrc16___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vcrc16___024root___eval_act(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcrc16___024root___nba_sequent__TOP__0(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->crc16__DOT__CRC = 0x18005U;
    }
    if (vlSelf->crc16_check_en) {
        vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
            = (0xffffffU & (~ ((0x800000U & ((IData)(vlSelf->din) 
                                             << 0x17U)) 
                               | ((0x400000U & ((IData)(vlSelf->din) 
                                                << 0x15U)) 
                                  | ((0x200000U & ((IData)(vlSelf->din) 
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
                                                       << 9U)))))))))));
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x800000U & vlSelf->crc16__DOT__inst_mod2__DOT__result_mid)) {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & ((vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                >> 7U) ^ vlSelf->crc16__DOT__CRC));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = ((0xffff00U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                 << 8U)) | (0xfeU & 
                                            (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                             << 1U)));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                = (0x1ffffU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                               >> 7U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_next 
                = (0xfffffeU & (vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                                << 1U));
            vlSelf->crc16__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc16__DOT__inst_mod2__DOT__result_next;
        }
    } else {
        vlSelf->crc16__DOT__inst_mod2__DOT__remain = 0U;
        vlSelf->crc16__DOT__inst_mod2__DOT__result_next = 0U;
        vlSelf->crc16__DOT__inst_mod2__DOT__result_mid = 0U;
    }
    vlSelf->crc16_out = (0xffffU & (~ ((0x8000U & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                   << 0xfU)) 
                                       | ((0x4000U 
                                           & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                              << 0xdU)) 
                                          | ((0x2000U 
                                              & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                 << 0xbU)) 
                                             | ((0x1000U 
                                                 & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                    << 9U)) 
                                                | ((0x800U 
                                                    & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                       << 7U)) 
                                                   | ((0x400U 
                                                       & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                          << 5U)) 
                                                      | ((0x200U 
                                                          & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                             << 3U)) 
                                                         | ((0x100U 
                                                             & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                << 1U)) 
                                                            | ((0x80U 
                                                                & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                   >> 1U)) 
                                                               | ((0x40U 
                                                                   & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                      >> 3U)) 
                                                                  | ((0x20U 
                                                                      & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                         >> 5U)) 
                                                                     | ((0x10U 
                                                                         & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                            >> 7U)) 
                                                                        | ((8U 
                                                                            & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                               >> 9U)) 
                                                                           | ((4U 
                                                                               & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                                >> 0xbU)) 
                                                                              | ((2U 
                                                                                & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                                >> 0xdU)) 
                                                                                | (1U 
                                                                                & (vlSelf->crc16__DOT__inst_mod2__DOT__remain 
                                                                                >> 0xfU)))))))))))))))))));
}

void Vcrc16___024root___eval_nba(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vcrc16___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vcrc16___024root___eval_triggers__ico(Vcrc16___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc16___024root___dump_triggers__ico(Vcrc16___024root* vlSelf);
#endif  // VL_DEBUG
void Vcrc16___024root___eval_triggers__act(Vcrc16___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc16___024root___dump_triggers__act(Vcrc16___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc16___024root___dump_triggers__nba(Vcrc16___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrc16___024root___eval(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vcrc16___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vcrc16___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/crc16.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vcrc16___024root___eval_ico(vlSelf);
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
            Vcrc16___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcrc16___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/crc16.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vcrc16___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcrc16___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/crc16.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcrc16___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcrc16___024root___eval_debug_assertions(Vcrc16___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->crc16_check_en & 0xfeU))) {
        Verilated::overWidthError("crc16_check_en");}
}
#endif  // VL_DEBUG
