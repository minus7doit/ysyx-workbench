// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcrc5_t.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcrc5_t___024root.h"

VL_INLINE_OPT void Vcrc5_t___024root___ico_sequent__TOP__0(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
        = ((0x8000U & ((~ (IData)(vlSelf->tx_addr)) 
                       << 0xfU)) | ((0x4000U & ((~ 
                                                 ((IData)(vlSelf->tx_addr) 
                                                  >> 1U)) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->tx_addr) 
                                                     >> 2U)) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((~ ((IData)(vlSelf->tx_addr) 
                                                  >> 3U)) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & ((~ 
                                                  ((IData)(vlSelf->tx_addr) 
                                                   >> 4U)) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & ((IData)(vlSelf->tx_addr) 
                                                    << 5U)) 
                                                | ((0x200U 
                                                    & ((IData)(vlSelf->tx_addr) 
                                                       << 3U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSelf->tx_endp) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((IData)(vlSelf->tx_endp) 
                                                             << 6U)) 
                                                         | ((0x40U 
                                                             & ((IData)(vlSelf->tx_endp) 
                                                                << 4U)) 
                                                            | (0x20U 
                                                               & ((IData)(vlSelf->tx_endp) 
                                                                  << 2U))))))))))));
    if ((0x8000U & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid))) {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                 >> 0xaU)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = ((0xf800U & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                           << 0xbU)) | (0x7feU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                                  << 1U)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    } else {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                        >> 0xaU));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = (0xfffeU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                          << 1U));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    }
    if ((0x8000U & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid))) {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                 >> 0xaU)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = ((0xf800U & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                           << 0xbU)) | (0x7feU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                                  << 1U)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    } else {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                        >> 0xaU));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = (0xfffeU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                          << 1U));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    }
    if ((0x8000U & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid))) {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                 >> 0xaU)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = ((0xf800U & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                           << 0xbU)) | (0x7feU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                                  << 1U)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    } else {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                        >> 0xaU));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = (0xfffeU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                          << 1U));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    }
    if ((0x8000U & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid))) {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                 >> 0xaU)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = ((0xf800U & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                           << 0xbU)) | (0x7feU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                                  << 1U)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    } else {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                        >> 0xaU));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = (0xfffeU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                          << 1U));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    }
    if ((0x8000U & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid))) {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                 >> 0xaU)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = ((0xf800U & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                           << 0xbU)) | (0x7feU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                                  << 1U)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    } else {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                        >> 0xaU));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = (0xfffeU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                          << 1U));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    }
    if ((0x8000U & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid))) {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                 >> 0xaU)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = ((0xf800U & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                           << 0xbU)) | (0x7feU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                                  << 1U)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    } else {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                        >> 0xaU));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = (0xfffeU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                          << 1U));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    }
    if ((0x8000U & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid))) {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                 >> 0xaU)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = ((0xf800U & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                           << 0xbU)) | (0x7feU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                                  << 1U)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    } else {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                        >> 0xaU));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = (0xfffeU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                          << 1U));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    }
    if ((0x8000U & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid))) {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                 >> 0xaU)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = ((0xf800U & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                           << 0xbU)) | (0x7feU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                                  << 1U)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    } else {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                        >> 0xaU));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = (0xfffeU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                          << 1U));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    }
    if ((0x8000U & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid))) {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                 >> 0xaU)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = ((0xf800U & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                           << 0xbU)) | (0x7feU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                                  << 1U)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    } else {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                        >> 0xaU));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = (0xfffeU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                          << 1U));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    }
    if ((0x8000U & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid))) {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                 >> 0xaU)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = ((0xf800U & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                           << 0xbU)) | (0x7feU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                                  << 1U)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    } else {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                        >> 0xaU));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = (0xfffeU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                          << 1U));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    }
    if ((0x8000U & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid))) {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & (0x25U ^ ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                 >> 0xaU)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = ((0xf800U & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                           << 0xbU)) | (0x7feU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                                                  << 1U)));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    } else {
        vlSelf->crc5_t__DOT__inst_mod2__DOT__remain 
            = (0x3fU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                        >> 0xaU));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next 
            = (0xfffeU & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid) 
                          << 1U));
        vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid 
            = vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next;
    }
    vlSelf->packet_out = ((0xf800U & ((~ ((0x10U & 
                                           ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                                            << 4U)) 
                                          | ((8U & 
                                              ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                                               << 2U)) 
                                             | ((4U 
                                                 & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                                                         >> 4U))))))) 
                                      << 0xbU)) | (
                                                   ((IData)(vlSelf->tx_endp) 
                                                    << 7U) 
                                                   | (IData)(vlSelf->tx_addr)));
}

void Vcrc5_t___024root___eval_ico(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vcrc5_t___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vcrc5_t___024root___eval_act(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___eval_act\n"); );
}

void Vcrc5_t___024root___eval_nba(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___eval_nba\n"); );
}

void Vcrc5_t___024root___eval_triggers__ico(Vcrc5_t___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc5_t___024root___dump_triggers__ico(Vcrc5_t___024root* vlSelf);
#endif  // VL_DEBUG
void Vcrc5_t___024root___eval_triggers__act(Vcrc5_t___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc5_t___024root___dump_triggers__act(Vcrc5_t___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcrc5_t___024root___dump_triggers__nba(Vcrc5_t___024root* vlSelf);
#endif  // VL_DEBUG

void Vcrc5_t___024root___eval(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___eval\n"); );
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
        Vcrc5_t___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vcrc5_t___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/crc5_t.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vcrc5_t___024root___eval_ico(vlSelf);
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
            Vcrc5_t___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcrc5_t___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/crc5_t.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vcrc5_t___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcrc5_t___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/crc5_t.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcrc5_t___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcrc5_t___024root___eval_debug_assertions(Vcrc5_t___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->tx_addr & 0x80U))) {
        Verilated::overWidthError("tx_addr");}
    if (VL_UNLIKELY((vlSelf->tx_endp & 0xf0U))) {
        Verilated::overWidthError("tx_endp");}
}
#endif  // VL_DEBUG
