// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcrc5_t__Syms.h"


VL_ATTR_COLD void Vcrc5_t___024root__trace_init_sub__TOP__0(Vcrc5_t___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+6,"tx_addr", false,-1, 6,0);
    tracep->declBus(c+7,"tx_endp", false,-1, 3,0);
    tracep->declBus(c+8,"packet_out", false,-1, 15,0);
    tracep->pushNamePrefix("crc5_t ");
    tracep->declBus(c+11,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"ENDP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"CRC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+6,"tx_addr", false,-1, 6,0);
    tracep->declBus(c+7,"tx_endp", false,-1, 3,0);
    tracep->declBus(c+8,"packet_out", false,-1, 15,0);
    tracep->declBus(c+15,"CRC", false,-1, 5,0);
    tracep->declBus(c+9,"addr_endp", false,-1, 10,0);
    tracep->declBus(c+10,"data_to_mod2", false,-1, 15,0);
    tracep->declBus(c+1,"crc5_out", false,-1, 4,0);
    tracep->declBus(c+2,"mod2_result", false,-1, 4,0);
    tracep->pushNamePrefix("inst_mod2 ");
    tracep->declBus(c+16,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+17,"DIVISOR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+18,"I_en", false,-1);
    tracep->declBus(c+10,"I_data", false,-1, 15,0);
    tracep->declBus(c+15,"I_divisor", false,-1, 5,0);
    tracep->declBus(c+2,"O_data", false,-1, 4,0);
    tracep->declBus(c+3,"result_mid", false,-1, 15,0);
    tracep->declBus(c+4,"result_next", false,-1, 15,0);
    tracep->declBus(c+5,"remain", false,-1, 5,0);
    tracep->declBus(c+19,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcrc5_t___024root__trace_init_top(Vcrc5_t___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root__trace_init_top\n"); );
    // Body
    Vcrc5_t___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcrc5_t___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcrc5_t___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcrc5_t___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcrc5_t___024root__trace_register(Vcrc5_t___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcrc5_t___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcrc5_t___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcrc5_t___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcrc5_t___024root__trace_full_sub_0(Vcrc5_t___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcrc5_t___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root__trace_full_top_0\n"); );
    // Init
    Vcrc5_t___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc5_t___024root*>(voidSelf);
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcrc5_t___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcrc5_t___024root__trace_full_sub_0(Vcrc5_t___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc5_t___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,((0x1fU & (~ ((0x10U & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                                                   << 4U)) 
                                         | ((8U & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                                                   << 2U)) 
                                            | ((4U 
                                                & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain)) 
                                               | ((2U 
                                                   & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                                                      >> 2U)) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain) 
                                                        >> 4U))))))))),5);
    bufp->fullCData(oldp+2,((0x1fU & (IData)(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain))),5);
    bufp->fullSData(oldp+3,(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_mid),16);
    bufp->fullSData(oldp+4,(vlSelf->crc5_t__DOT__inst_mod2__DOT__result_next),16);
    bufp->fullCData(oldp+5,(vlSelf->crc5_t__DOT__inst_mod2__DOT__remain),6);
    bufp->fullCData(oldp+6,(vlSelf->tx_addr),7);
    bufp->fullCData(oldp+7,(vlSelf->tx_endp),4);
    bufp->fullSData(oldp+8,(vlSelf->packet_out),16);
    bufp->fullSData(oldp+9,((((IData)(vlSelf->tx_endp) 
                              << 7U) | (IData)(vlSelf->tx_addr))),11);
    bufp->fullSData(oldp+10,(((0x8000U & ((~ (IData)(vlSelf->tx_addr)) 
                                          << 0xfU)) 
                              | ((0x4000U & ((~ ((IData)(vlSelf->tx_addr) 
                                                 >> 1U)) 
                                             << 0xeU)) 
                                 | ((0x2000U & ((~ 
                                                 ((IData)(vlSelf->tx_addr) 
                                                  >> 2U)) 
                                                << 0xdU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    ((IData)(vlSelf->tx_addr) 
                                                     >> 3U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           ((~ ((IData)(vlSelf->tx_addr) 
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
                                                               << 2U))))))))))))),16);
    bufp->fullIData(oldp+11,(7U),32);
    bufp->fullIData(oldp+12,(4U),32);
    bufp->fullIData(oldp+13,(5U),32);
    bufp->fullIData(oldp+14,(0xbU),32);
    bufp->fullCData(oldp+15,(0x25U),6);
    bufp->fullIData(oldp+16,(0x10U),32);
    bufp->fullIData(oldp+17,(6U),32);
    bufp->fullBit(oldp+18,(1U));
    bufp->fullIData(oldp+19,(0xcU),32);
}
