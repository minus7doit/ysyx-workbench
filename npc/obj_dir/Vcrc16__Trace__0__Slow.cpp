// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcrc16__Syms.h"


VL_ATTR_COLD void Vcrc16___024root__trace_init_sub__TOP__0(Vcrc16___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+2,"crc16_check_en", false,-1);
    tracep->declBus(c+3,"din", false,-1, 7,0);
    tracep->declBus(c+4,"crc16_out", false,-1, 15,0);
    tracep->pushNamePrefix("crc16 ");
    tracep->declBus(c+12,"CRC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+2,"crc16_check_en", false,-1);
    tracep->declBus(c+3,"din", false,-1, 7,0);
    tracep->declBus(c+4,"crc16_out", false,-1, 15,0);
    tracep->declBus(c+5,"data", false,-1, 23,0);
    tracep->declBus(c+6,"CRC", false,-1, 16,0);
    tracep->declBus(c+7,"mod2_result", false,-1, 15,0);
    tracep->pushNamePrefix("inst_mod2 ");
    tracep->declBus(c+14,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"DIVISOR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+2,"I_en", false,-1);
    tracep->declBus(c+5,"I_data", false,-1, 23,0);
    tracep->declBus(c+6,"I_divisor", false,-1, 16,0);
    tracep->declBus(c+7,"O_data", false,-1, 15,0);
    tracep->declBus(c+8,"result_mid", false,-1, 23,0);
    tracep->declBus(c+9,"result_next", false,-1, 23,0);
    tracep->declBus(c+10,"remain", false,-1, 16,0);
    tracep->declBus(c+11,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcrc16___024root__trace_init_top(Vcrc16___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root__trace_init_top\n"); );
    // Body
    Vcrc16___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcrc16___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcrc16___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcrc16___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcrc16___024root__trace_register(Vcrc16___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcrc16___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcrc16___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcrc16___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcrc16___024root__trace_full_sub_0(Vcrc16___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcrc16___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root__trace_full_top_0\n"); );
    // Init
    Vcrc16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc16___024root*>(voidSelf);
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcrc16___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcrc16___024root__trace_full_sub_0(Vcrc16___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcrc16___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->rst_n));
    bufp->fullBit(oldp+2,(vlSelf->crc16_check_en));
    bufp->fullCData(oldp+3,(vlSelf->din),8);
    bufp->fullSData(oldp+4,(vlSelf->crc16_out),16);
    bufp->fullIData(oldp+5,((0xffffffU & (~ ((0x800000U 
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
    bufp->fullIData(oldp+6,(vlSelf->crc16__DOT__CRC),17);
    bufp->fullSData(oldp+7,((0xffffU & vlSelf->crc16__DOT__inst_mod2__DOT__remain)),16);
    bufp->fullIData(oldp+8,(vlSelf->crc16__DOT__inst_mod2__DOT__result_mid),24);
    bufp->fullIData(oldp+9,(vlSelf->crc16__DOT__inst_mod2__DOT__result_next),24);
    bufp->fullIData(oldp+10,(vlSelf->crc16__DOT__inst_mod2__DOT__remain),17);
    bufp->fullIData(oldp+11,(vlSelf->crc16__DOT__inst_mod2__DOT__i),32);
    bufp->fullIData(oldp+12,(0x10U),32);
    bufp->fullIData(oldp+13,(8U),32);
    bufp->fullIData(oldp+14,(0x18U),32);
    bufp->fullIData(oldp+15,(0x11U),32);
}
