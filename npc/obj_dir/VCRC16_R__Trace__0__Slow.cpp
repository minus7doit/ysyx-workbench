// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCRC16_R__Syms.h"


VL_ATTR_COLD void VCRC16_R___024root__trace_init_sub__TOP__0(VCRC16_R___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst_n", false,-1);
    tracep->declBus(c+3,"din", false,-1, 7,0);
    tracep->declBit(c+4,"I_valid", false,-1);
    tracep->declBit(c+5,"O_ready", false,-1);
    tracep->declBit(c+6,"crc16_en", false,-1);
    tracep->declBit(c+7,"I_sop", false,-1);
    tracep->declBit(c+8,"I_eop", false,-1);
    tracep->declBit(c+9,"w_en", false,-1);
    tracep->declBus(c+10,"dout", false,-1, 7,0);
    tracep->declBit(c+11,"O_sop", false,-1);
    tracep->declBit(c+12,"O_eop", false,-1);
    tracep->declBit(c+13,"O_valid", false,-1);
    tracep->declBit(c+14,"I_ready", false,-1);
    tracep->declBit(c+15,"crc16_err", false,-1);
    tracep->pushNamePrefix("CRC16_R ");
    tracep->declBus(c+24,"CRC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+25,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst_n", false,-1);
    tracep->declBus(c+3,"din", false,-1, 7,0);
    tracep->declBit(c+4,"I_valid", false,-1);
    tracep->declBit(c+5,"O_ready", false,-1);
    tracep->declBit(c+6,"crc16_en", false,-1);
    tracep->declBit(c+7,"I_sop", false,-1);
    tracep->declBit(c+8,"I_eop", false,-1);
    tracep->declBit(c+9,"w_en", false,-1);
    tracep->declBus(c+10,"dout", false,-1, 7,0);
    tracep->declBit(c+11,"O_sop", false,-1);
    tracep->declBit(c+12,"O_eop", false,-1);
    tracep->declBit(c+13,"O_valid", false,-1);
    tracep->declBit(c+14,"I_ready", false,-1);
    tracep->declBit(c+15,"crc16_err", false,-1);
    tracep->declBus(c+26,"CRC", false,-1, 16,0);
    tracep->declBus(c+27,"Residue", false,-1, 15,0);
    tracep->declBus(c+28,"IDLE", false,-1, 2,0);
    tracep->declBus(c+29,"DATA_CHECK", false,-1, 2,0);
    tracep->declBus(c+30,"CHECK_END", false,-1, 2,0);
    tracep->declBus(c+31,"state", false,-1, 2,0);
    tracep->declBus(c+16,"r_crc16_out", false,-1, 15,0);
    tracep->declBus(c+17,"data", false,-1, 23,0);
    tracep->declBus(c+18,"mod2_result", false,-1, 15,0);
    tracep->pushNamePrefix("inst_mod2 ");
    tracep->declBus(c+32,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+33,"DIVISOR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+19,"I_en", false,-1);
    tracep->declBus(c+17,"I_data", false,-1, 23,0);
    tracep->declBus(c+26,"I_divisor", false,-1, 16,0);
    tracep->declBus(c+18,"O_data", false,-1, 15,0);
    tracep->declBus(c+20,"result_mid", false,-1, 23,0);
    tracep->declBus(c+21,"result_next", false,-1, 23,0);
    tracep->declBus(c+22,"remain", false,-1, 16,0);
    tracep->declBus(c+23,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCRC16_R___024root__trace_init_top(VCRC16_R___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root__trace_init_top\n"); );
    // Body
    VCRC16_R___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCRC16_R___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCRC16_R___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCRC16_R___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCRC16_R___024root__trace_register(VCRC16_R___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCRC16_R___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCRC16_R___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCRC16_R___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCRC16_R___024root__trace_full_sub_0(VCRC16_R___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCRC16_R___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root__trace_full_top_0\n"); );
    // Init
    VCRC16_R___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCRC16_R___024root*>(voidSelf);
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCRC16_R___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCRC16_R___024root__trace_full_sub_0(VCRC16_R___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCRC16_R___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst_n));
    bufp->fullCData(oldp+3,(vlSelf->din),8);
    bufp->fullBit(oldp+4,(vlSelf->I_valid));
    bufp->fullBit(oldp+5,(vlSelf->O_ready));
    bufp->fullBit(oldp+6,(vlSelf->crc16_en));
    bufp->fullBit(oldp+7,(vlSelf->I_sop));
    bufp->fullBit(oldp+8,(vlSelf->I_eop));
    bufp->fullBit(oldp+9,(vlSelf->w_en));
    bufp->fullCData(oldp+10,(vlSelf->dout),8);
    bufp->fullBit(oldp+11,(vlSelf->O_sop));
    bufp->fullBit(oldp+12,(vlSelf->O_eop));
    bufp->fullBit(oldp+13,(vlSelf->O_valid));
    bufp->fullBit(oldp+14,(vlSelf->I_ready));
    bufp->fullBit(oldp+15,(vlSelf->crc16_err));
    bufp->fullSData(oldp+16,(vlSelf->CRC16_R__DOT__r_crc16_out),16);
    bufp->fullIData(oldp+17,((((0x800000U & ((IData)(vlSelf->din) 
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
                                                       << 9U))))))))) 
                              ^ ((IData)(vlSelf->CRC16_R__DOT__r_crc16_out) 
                                 << 8U))),24);
    bufp->fullSData(oldp+18,((0xffffU & vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain)),16);
    bufp->fullBit(oldp+19,(vlSelf->CRC16_R__DOT____Vcellinp__inst_mod2__I_en));
    bufp->fullIData(oldp+20,(vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_mid),24);
    bufp->fullIData(oldp+21,(vlSelf->CRC16_R__DOT__inst_mod2__DOT__result_next),24);
    bufp->fullIData(oldp+22,(vlSelf->CRC16_R__DOT__inst_mod2__DOT__remain),17);
    bufp->fullIData(oldp+23,(vlSelf->CRC16_R__DOT__inst_mod2__DOT__i),32);
    bufp->fullIData(oldp+24,(0x10U),32);
    bufp->fullIData(oldp+25,(8U),32);
    bufp->fullIData(oldp+26,(0x18005U),17);
    bufp->fullSData(oldp+27,(0x800dU),16);
    bufp->fullCData(oldp+28,(1U),3);
    bufp->fullCData(oldp+29,(2U),3);
    bufp->fullCData(oldp+30,(4U),3);
    bufp->fullCData(oldp+31,(vlSelf->CRC16_R__DOT__state),3);
    bufp->fullIData(oldp+32,(0x18U),32);
    bufp->fullIData(oldp+33,(0x11U),32);
}
