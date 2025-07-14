// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcrc5__Syms.h"


void Vcrc5___024root__trace_chg_sub_0(Vcrc5___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcrc5___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root__trace_chg_top_0\n"); );
    // Init
    Vcrc5___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc5___024root*>(voidSelf);
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcrc5___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcrc5___024root__trace_chg_sub_0(Vcrc5___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,((0x1fU & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain))),5);
        bufp->chgSData(oldp+1,(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid),16);
        bufp->chgSData(oldp+2,(vlSelf->crc5__DOT__inst_mod2__DOT__result_next),16);
        bufp->chgCData(oldp+3,(vlSelf->crc5__DOT__inst_mod2__DOT__remain),6);
        bufp->chgIData(oldp+4,(vlSelf->crc5__DOT__inst_mod2__DOT__i),32);
    }
    bufp->chgBit(oldp+5,(vlSelf->crc5_en));
    bufp->chgSData(oldp+6,(vlSelf->din),11);
    bufp->chgCData(oldp+7,(vlSelf->crc5_check),5);
    bufp->chgCData(oldp+8,(vlSelf->crc5_out),5);
    bufp->chgBit(oldp+9,(vlSelf->check_pass));
    bufp->chgBit(oldp+10,(vlSelf->addr_ok));
    bufp->chgCData(oldp+11,((0x7fU & (IData)(vlSelf->din))),7);
    bufp->chgCData(oldp+12,((0xfU & ((IData)(vlSelf->din) 
                                     >> 7U))),4);
    bufp->chgSData(oldp+13,(((0x8000U & ((~ (IData)(vlSelf->din)) 
                                         << 0xfU)) 
                             | ((0x4000U & ((~ ((IData)(vlSelf->din) 
                                                >> 1U)) 
                                            << 0xeU)) 
                                | ((0x2000U & ((~ ((IData)(vlSelf->din) 
                                                   >> 2U)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((~ 
                                                   ((IData)(vlSelf->din) 
                                                    >> 3U)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          ((~ ((IData)(vlSelf->din) 
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
                                                              >> 5U))))))))))))),16);
}

void Vcrc5___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root__trace_cleanup\n"); );
    // Init
    Vcrc5___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc5___024root*>(voidSelf);
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
