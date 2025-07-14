// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCRC16_R__Syms.h"


void VCRC16_R___024root__trace_chg_sub_0(VCRC16_R___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCRC16_R___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root__trace_chg_top_0\n"); );
    // Init
    VCRC16_R___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCRC16_R___024root*>(voidSelf);
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCRC16_R___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCRC16_R___024root__trace_chg_sub_0(VCRC16_R___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst_n));
    bufp->chgCData(oldp+2,(vlSelf->din),8);
    bufp->chgBit(oldp+3,(vlSelf->I_valid));
    bufp->chgBit(oldp+4,(vlSelf->O_ready));
    bufp->chgBit(oldp+5,(vlSelf->crc16_en));
    bufp->chgBit(oldp+6,(vlSelf->I_sop));
    bufp->chgBit(oldp+7,(vlSelf->I_eop));
    bufp->chgBit(oldp+8,(vlSelf->w_en));
    bufp->chgCData(oldp+9,(vlSelf->dout),8);
    bufp->chgBit(oldp+10,(vlSelf->O_sop));
    bufp->chgBit(oldp+11,(vlSelf->O_eop));
    bufp->chgBit(oldp+12,(vlSelf->O_valid));
    bufp->chgBit(oldp+13,(vlSelf->I_ready));
    bufp->chgBit(oldp+14,(vlSelf->crc16_err));
    bufp->chgSData(oldp+15,(vlSelf->CRC16_R__DOT__r_crc16_out),16);
    bufp->chgIData(oldp+16,((((0x800000U & ((IData)(vlSelf->din) 
                                            << 0x17U)) 
                              | ((0x400000U & ((IData)(vlSelf->din) 
                                               << 0x15U)) 
                                 | ((0x200000U & ((IData)(vlSelf->din) 
                                                  << 0x13U)) 
                                    | ((0x100000U & 
                                        ((IData)(vlSelf->din) 
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
                                << 8U))),24);
    bufp->chgSData(oldp+17,((0xffffU & vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain)),16);
    bufp->chgBit(oldp+18,(vlSelf->CRC16_R__DOT____Vcellinp__inst_mod2__I_en));
    bufp->chgIData(oldp+19,(vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid),24);
    bufp->chgIData(oldp+20,(vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next),24);
    bufp->chgIData(oldp+21,(vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain),17);
    bufp->chgIData(oldp+22,(vlSelf->CRC16_R__DOT__inst_mod2__DOT__i),32);
}

void VCRC16_R___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root__trace_cleanup\n"); );
    // Init
    VCRC16_R___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCRC16_R___024root*>(voidSelf);
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
