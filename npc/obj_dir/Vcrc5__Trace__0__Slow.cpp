// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcrc5__Syms.h"


VL_ATTR_COLD void Vcrc5___024root__trace_init_sub__TOP__0(Vcrc5___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+6,"crc5_en", false,-1);
    tracep->declBus(c+7,"din", false,-1, 10,0);
    tracep->declBus(c+8,"crc5_check", false,-1, 4,0);
    tracep->declBus(c+9,"crc5_out", false,-1, 4,0);
    tracep->declBit(c+10,"check_pass", false,-1);
    tracep->declBit(c+11,"addr_ok", false,-1);
    tracep->pushNamePrefix("crc5 ");
    tracep->declBus(c+15,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+16,"EDP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+17,"CRC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+6,"crc5_en", false,-1);
    tracep->declBus(c+7,"din", false,-1, 10,0);
    tracep->declBus(c+8,"crc5_check", false,-1, 4,0);
    tracep->declBus(c+9,"crc5_out", false,-1, 4,0);
    tracep->declBit(c+10,"check_pass", false,-1);
    tracep->declBit(c+11,"addr_ok", false,-1);
    tracep->declBus(c+19,"this_addr", false,-1, 6,0);
    tracep->declBus(c+20,"CRC", false,-1, 5,0);
    tracep->declBus(c+12,"i_addr", false,-1, 6,0);
    tracep->declBus(c+13,"i_edp", false,-1, 3,0);
    tracep->declBus(c+14,"data", false,-1, 15,0);
    tracep->declBus(c+1,"mod2_result", false,-1, 4,0);
    tracep->pushNamePrefix("inst_mod2 ");
    tracep->declBus(c+21,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+22,"DIVISOR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+6,"I_en", false,-1);
    tracep->declBus(c+14,"I_data", false,-1, 15,0);
    tracep->declBus(c+20,"I_divisor", false,-1, 5,0);
    tracep->declBus(c+1,"O_data", false,-1, 4,0);
    tracep->declBus(c+2,"result_mid", false,-1, 15,0);
    tracep->declBus(c+3,"result_next", false,-1, 15,0);
    tracep->declBus(c+4,"remain", false,-1, 5,0);
    tracep->declBus(c+5,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcrc5___024root__trace_init_top(Vcrc5___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root__trace_init_top\n"); );
    // Body
    Vcrc5___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcrc5___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcrc5___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcrc5___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcrc5___024root__trace_register(Vcrc5___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcrc5___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcrc5___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcrc5___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcrc5___024root__trace_full_sub_0(Vcrc5___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcrc5___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root__trace_full_top_0\n"); );
    // Init
    Vcrc5___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc5___024root*>(voidSelf);
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcrc5___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcrc5___024root__trace_full_sub_0(Vcrc5___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,((0x1fU & (IData)(vlSelf->crc5__DOT__inst_mod2__DOT__remain))),5);
    bufp->fullSData(oldp+2,(vlSelf->crc5__DOT__inst_mod2__DOT__result_mid),16);
    bufp->fullSData(oldp+3,(vlSelf->crc5__DOT__inst_mod2__DOT__result_next),16);
    bufp->fullCData(oldp+4,(vlSelf->crc5__DOT__inst_mod2__DOT__remain),6);
    bufp->fullIData(oldp+5,(vlSelf->crc5__DOT__inst_mod2__DOT__i),32);
    bufp->fullBit(oldp+6,(vlSelf->crc5_en));
    bufp->fullSData(oldp+7,(vlSelf->din),11);
    bufp->fullCData(oldp+8,(vlSelf->crc5_check),5);
    bufp->fullCData(oldp+9,(vlSelf->crc5_out),5);
    bufp->fullBit(oldp+10,(vlSelf->check_pass));
    bufp->fullBit(oldp+11,(vlSelf->addr_ok));
    bufp->fullCData(oldp+12,((0x7fU & (IData)(vlSelf->din))),7);
    bufp->fullCData(oldp+13,((0xfU & ((IData)(vlSelf->din) 
                                      >> 7U))),4);
    bufp->fullSData(oldp+14,(((0x8000U & ((~ (IData)(vlSelf->din)) 
                                          << 0xfU)) 
                              | ((0x4000U & ((~ ((IData)(vlSelf->din) 
                                                 >> 1U)) 
                                             << 0xeU)) 
                                 | ((0x2000U & ((~ 
                                                 ((IData)(vlSelf->din) 
                                                  >> 2U)) 
                                                << 0xdU)) 
                                    | ((0x1000U & (
                                                   (~ 
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
    bufp->fullIData(oldp+15,(7U),32);
    bufp->fullIData(oldp+16,(4U),32);
    bufp->fullIData(oldp+17,(5U),32);
    bufp->fullIData(oldp+18,(0xbU),32);
    bufp->fullCData(oldp+19,(8U),7);
    bufp->fullCData(oldp+20,(0x25U),6);
    bufp->fullIData(oldp+21,(0x10U),32);
    bufp->fullIData(oldp+22,(6U),32);
}
