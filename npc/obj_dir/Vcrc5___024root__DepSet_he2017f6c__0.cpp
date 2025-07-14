// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrc5.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcrc5___024root.h"

VL_INLINE_OPT void Vcrc5___024root___ico_sequent__TOP__0(Vcrc5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->crc5_en) {
        vlSelf->crc5__DOT__inst_mod2__DOT__i = 0xcU;
        vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
            = ((0x8000U & ((~ (IData)(vlSelf->din)) 
                           << 0xfU)) | ((0x4000U & 
                                         ((~ ((IData)(vlSelf->din) 
                                              >> 1U)) 
                                          << 0xeU)) 
                                        | ((0x2000U 
                                            & ((~ ((IData)(vlSelf->din) 
                                                   >> 2U)) 
                                               << 0xdU)) 
                                           | ((0x1000U 
                                               & ((~ 
                                                   ((IData)(vlSelf->din) 
                                                    >> 3U)) 
                                                  << 0xcU)) 
                                              | ((0x800U 
                                                  & ((~ 
                                                      ((IData)(vlSelf->din) 
                                                       >> 4U)) 
                                                     << 0xbU)) 
                                                 | ((0x400U 
                                                     & ((IData)(vlSelf->din) 
                                                        << 5U)) 
                                                    | ((0x200U 
                                                        & ((IData)(vlSelf->din) 
                                                           << 3U)) 
                                                       | ((0x100U 
                                                           & ((IData)(vlSelf->din) 
                                                              << 1U)) 
                                                          | ((0x80U 
                                                              & ((IData)(vlSelf->din) 
                                                                 >> 1U)) 
                                                             | ((0x40U 
                                                                 & ((IData)(vlSelf->din) 
                                                                    >> 3U)) 
                                                                | (0x20U 
                                                                   & ((IData)(vlSelf->din) 
                                                                      >> 5U))))))))))));
        if ((0x8000U & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid))) {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                     >> 0xaU)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = ((0xf800U & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                               << 0xbU)) | (0x7feU 
                                            & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                               << 1U)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                            >> 0xaU));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = (0xfffeU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                              << 1U));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x8000U & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid))) {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                     >> 0xaU)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = ((0xf800U & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                               << 0xbU)) | (0x7feU 
                                            & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                               << 1U)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                            >> 0xaU));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = (0xfffeU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                              << 1U));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x8000U & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid))) {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                     >> 0xaU)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = ((0xf800U & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                               << 0xbU)) | (0x7feU 
                                            & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                               << 1U)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                            >> 0xaU));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = (0xfffeU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                              << 1U));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x8000U & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid))) {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                     >> 0xaU)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = ((0xf800U & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                               << 0xbU)) | (0x7feU 
                                            & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                               << 1U)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                            >> 0xaU));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = (0xfffeU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                              << 1U));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x8000U & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid))) {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                     >> 0xaU)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = ((0xf800U & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                               << 0xbU)) | (0x7feU 
                                            & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                               << 1U)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                            >> 0xaU));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = (0xfffeU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                              << 1U));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x8000U & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid))) {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                     >> 0xaU)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = ((0xf800U & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                               << 0xbU)) | (0x7feU 
                                            & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                               << 1U)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                            >> 0xaU));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = (0xfffeU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                              << 1U));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x8000U & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid))) {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                     >> 0xaU)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = ((0xf800U & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                               << 0xbU)) | (0x7feU 
                                            & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                               << 1U)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                            >> 0xaU));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = (0xfffeU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                              << 1U));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x8000U & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid))) {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                     >> 0xaU)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = ((0xf800U & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                               << 0xbU)) | (0x7feU 
                                            & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                               << 1U)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                            >> 0xaU));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = (0xfffeU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                              << 1U));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x8000U & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid))) {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                     >> 0xaU)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = ((0xf800U & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                               << 0xbU)) | (0x7feU 
                                            & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                               << 1U)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                            >> 0xaU));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = (0xfffeU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                              << 1U));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x8000U & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid))) {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                     >> 0xaU)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = ((0xf800U & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                               << 0xbU)) | (0x7feU 
                                            & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                               << 1U)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                            >> 0xaU));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = (0xfffeU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                              << 1U));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        }
        if ((0x8000U & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid))) {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                     >> 0xaU)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = ((0xf800U & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                               << 0xbU)) | (0x7feU 
                                            & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                                               << 1U)));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        } else {
            vlSelf->crc5__DOT__inst_mod2__DOT__remain 
                = (0x3fU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                            >> 0xaU));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_next 
                = (0xfffeU & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid) 
                              << 1U));
            vlSelf->crc5__DOT__inst_mod2__DOT__result_mid 
                = vlSelf->crc5__DOT__inst_mod2__DOT__result_next;
        }
    } else {
        vlSelf->crc5__DOT__inst_mod2__DOT__remain = 0U;
        vlSelf->crc5__DOT__inst_mod2__DOT__result_next = 0U;
        vlSelf->crc5__DOT__inst_mod2__DOT__result_mid = 0U;
    }
    vlSelf->addr_ok = (8U == (0x7fU & (IData)(vlSelf->din)));
    vlSelf->crc5_out = (0x1fU & (~ ((0x10U & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                                              << 4U)) 
                                    | ((8U & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                                              << 2U)) 
                                       | ((4U & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain)) 
                                          | ((2U & 
                                              ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                                               >> 2U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain) 
                                                   >> 4U))))))));
    vlSelf->check_pass = ((IData)(vlSelf->crc5_out) 
                          == (IData)(vlSelf->crc5_check));
}

void Vcrc5___024root___eval_ico(Vcrc5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vcrc5___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vcrc5___024root___eval_act(Vcrc5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root___eval_act\n"); );
}

void Vcrc5___024root___eval_nba(Vcrc5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root___eval_nba\n"); );
}

void Vcrc5___024root___eval_triggers__ico(Vcrc5___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc5___024root___dump_triggers__ico(Vcrc5___024root* vlSelf);
#endif  // VL_DEBUG
void Vcrc5___024root___eval_triggers__act(Vcrc5___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc5___024root___dump_triggers__act(Vcrc5___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc5___024root___dump_triggers__nba(Vcrc5___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrc5___024root___eval(Vcrc5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vcrc5___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vcrc5___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/crc5.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vcrc5___024root___eval_ico(vlSelf);
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
            Vcrc5___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcrc5___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/crc5.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vcrc5___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcrc5___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/crc5.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcrc5___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcrc5___024root___eval_debug_assertions(Vcrc5___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->crc5_en & 0xfeU))) {
        Verilated::overWidthError("crc5_en");}
    if (VL_UNLIKELY((vlSelf->din & 0xf800U))) {
        Verilated::overWidthError("din");}
    if (VL_UNLIKELY((vlSelf->crc5_check & 0xe0U))) {
        Verilated::overWidthError("crc5_check");}
}
#endif  // VL_DEBUG
