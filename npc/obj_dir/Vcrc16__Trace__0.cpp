// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcrc16__Syms.h"


void Vcrc16___024root__trace_chg_sub_0(Vcrc16___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcrc16___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root__trace_chg_top_0\n"); );
    // Init
    Vcrc16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc16___024root*>(voidSelf);
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcrc16___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcrc16___024root__trace_chg_sub_0(Vcrc16___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->rst_n));
    bufp->chgBit(oldp+1,(vlSelf->crc16_check_en));
    bufp->chgCData(oldp+2,(vlSelf->din),8);
    bufp->chgSData(oldp+3,(vlSelf->crc16_out),16);
    bufp->chgIData(oldp+4,((0xffffffU & (~ ((0x800000U 
                                             & ((IData)(vlSelf->din) 
                                                << 0x17U)) 
                                            | ((0x400000U 
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
                                                                    << 9U)))))))))))),24);
    bufp->chgIData(oldp+5,(vlSelf->crc16__DOT__CRC),17);
    bufp->chgSData(oldp+6,((0xffffU & vlSelf->crc16__DOT__inst_mod2__DOT__remain)),16);
    bufp->chgIData(oldp+7,(vlSelf->crc16__DOT__inst_mod2__DOT__result_mid),24);
    bufp->chgIData(oldp+8,(vlSelf->crc16__DOT__inst_mod2__DOT__result_next),24);
    bufp->chgIData(oldp+9,(vlSelf->crc16__DOT__inst_mod2__DOT__remain),17);
    bufp->chgIData(oldp+10,(vlSelf->crc16__DOT__inst_mod2__DOT__i),32);
}

void Vcrc16___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root__trace_cleanup\n"); );
    // Init
    Vcrc16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc16___024root*>(voidSelf);
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
