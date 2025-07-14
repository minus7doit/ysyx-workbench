// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcrc5_t__Syms.h"


void Vcrc5_t___024root__trace_chg_sub_0(Vcrc5_t___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcrc5_t___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root__trace_chg_top_0\n"); );
    // Init
    Vcrc5_t___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc5_t___024root*>(voidSelf);
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcrc5_t___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcrc5_t___024root__trace_chg_sub_0(Vcrc5_t___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,((0x1fU & (~ ((0x10U 
                                             & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                                                << 4U)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                                                   << 2U)) 
                                               | ((4U 
                                                   & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                                                           >> 4U))))))))),5);
        bufp->chgCData(oldp+1,((0x1fU & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain))),5);
        bufp->chgSData(oldp+2,(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid),16);
        bufp->chgSData(oldp+3,(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next),16);
        bufp->chgCData(oldp+4,(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain),6);
    }
    bufp->chgCData(oldp+5,(vlSelf->tx_addr),7);
    bufp->chgCData(oldp+6,(vlSelf->tx_endp),4);
    bufp->chgSData(oldp+7,(vlSelf->packet_out),16);
    bufp->chgSData(oldp+8,((((IData)(vlSelf->tx_endp) 
                             << 7U) | (IData)(vlSelf->tx_addr))),11);
    bufp->chgSData(oldp+9,(((0x8000U & ((~ (IData)(vlSelf->tx_addr)) 
                                        << 0xfU)) | 
                            ((0x4000U & ((~ ((IData)(vlSelf->tx_addr) 
                                             >> 1U)) 
                                         << 0xeU)) 
                             | ((0x2000U & ((~ ((IData)(vlSelf->tx_addr) 
                                                >> 2U)) 
                                            << 0xdU)) 
                                | ((0x1000U & ((~ ((IData)(vlSelf->tx_addr) 
                                                   >> 3U)) 
                                               << 0xcU)) 
                                   | ((0x800U & ((~ 
                                                  ((IData)(vlSelf->tx_addr) 
                                                   >> 4U)) 
                                                 << 0xbU)) 
                                      | ((0x400U & 
                                          ((IData)(vlSelf->tx_addr) 
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
                                                           << 2U))))))))))))),16);
}

void Vcrc5_t___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root__trace_cleanup\n"); );
    // Init
    Vcrc5_t___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc5_t___024root*>(voidSelf);
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
