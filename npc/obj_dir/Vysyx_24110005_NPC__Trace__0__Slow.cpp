// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24110005_NPC__Syms.h"


VL_ATTR_COLD void Vysyx_24110005_NPC___024root__trace_init_sub__TOP__0(Vysyx_24110005_NPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+96,"exit_code", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24110005_NPC ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+96,"exit_code", false,-1, 31,0);
    tracep->declBus(c+103,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+104,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+105,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+106,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+107,"BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+108,"MAX_INS", false,-1, 31,0);
    tracep->declBus(c+9,"fun", false,-1, 2,0);
    tracep->declBus(c+10,"opcode", false,-1, 6,0);
    tracep->declBus(c+11,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+12,"reg_raddr1", false,-1, 4,0);
    tracep->declBus(c+13,"reg_raddr2", false,-1, 4,0);
    tracep->declBus(c+14,"imm", false,-1, 31,0);
    tracep->declBus(c+15,"current_inst", false,-1, 31,0);
    tracep->declBit(c+16,"w_finish_sim", false,-1);
    tracep->declBus(c+17,"pc", false,-1, 31,0);
    tracep->declBus(c+97,"dnpc", false,-1, 31,0);
    tracep->declBus(c+98,"src1", false,-1, 31,0);
    tracep->declBus(c+99,"src2", false,-1, 31,0);
    tracep->declBus(c+100,"reg_wdata", false,-1, 31,0);
    tracep->declBit(c+18,"reg_wen", false,-1);
    tracep->declBit(c+19,"wen_ret_and_j", false,-1);
    tracep->pushNamePrefix("alu_ins ");
    tracep->declBus(c+103,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+104,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+105,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+106,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBus(c+17,"pc", false,-1, 31,0);
    tracep->declBus(c+98,"src1", false,-1, 31,0);
    tracep->declBus(c+99,"src2", false,-1, 31,0);
    tracep->declBus(c+14,"imm", false,-1, 31,0);
    tracep->declBus(c+10,"opcode", false,-1, 6,0);
    tracep->declBus(c+9,"fun", false,-1, 2,0);
    tracep->declBus(c+97,"dnpc", false,-1, 31,0);
    tracep->declBus(c+100,"w_data", false,-1, 31,0);
    tracep->declBit(c+19,"wen", false,-1);
    tracep->declBit(c+16,"w_finish_sim", false,-1);
    tracep->declBus(c+109,"src1_comp", false,-1, 31,0);
    tracep->declBus(c+110,"src2_comp", false,-1, 31,0);
    tracep->declBit(c+20,"mem_visit_valid", false,-1);
    tracep->declBus(c+111,"imm_comp", false,-1, 31,0);
    tracep->declBus(c+21,"snpc", false,-1, 31,0);
    tracep->declBus(c+22,"sel", false,-1, 9,0);
    tracep->declBus(c+101,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+99,"mem_wdata", false,-1, 31,0);
    tracep->declBit(c+23,"mem_wen", false,-1);
    tracep->declBus(c+24,"wmask", false,-1, 7,0);
    tracep->declBus(c+102,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+112,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+113,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+114,"TYPE_I2", false,-1, 6,0);
    tracep->declBus(c+115,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+116,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+117,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+118,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+119,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+120,"TYPE_R", false,-1, 6,0);
    tracep->declBus(c+107,"BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+25,"op", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ins_Decoder ");
    tracep->declBus(c+103,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+105,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+104,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+106,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"inst", false,-1, 31,0);
    tracep->declBus(c+12,"ra1", false,-1, 4,0);
    tracep->declBus(c+13,"ra2", false,-1, 4,0);
    tracep->declBus(c+14,"imm", false,-1, 31,0);
    tracep->declBus(c+9,"fun", false,-1, 2,0);
    tracep->declBus(c+10,"opcode", false,-1, 6,0);
    tracep->declBus(c+11,"w_addr", false,-1, 4,0);
    tracep->declBus(c+121,"TYPE_NUM", false,-1, 31,0);
    tracep->declBus(c+104,"TYPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+112,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+113,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+122,"TYPE_I3", false,-1, 6,0);
    tracep->declBus(c+115,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+116,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+117,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+118,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+119,"TYPE_U1", false,-1, 6,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+121,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+104,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+103,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+14,"out", false,-1, 31,0);
    tracep->declBus(c+10,"key", false,-1, 6,0);
    tracep->declBus(c+123,"default_out", false,-1, 31,0);
    tracep->declArray(c+26,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+121,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+104,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+103,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+124,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+14,"out", false,-1, 31,0);
    tracep->declBus(c+10,"key", false,-1, 6,0);
    tracep->declBus(c+123,"default_out", false,-1, 31,0);
    tracep->declArray(c+26,"lut", false,-1, 311,0);
    tracep->declBus(c+125,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+36+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+52+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+60,"lut_out", false,-1, 31,0);
    tracep->declBit(c+61,"hit", false,-1);
    tracep->declBus(c+126,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("reg_rd ");
    tracep->declBus(c+105,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+103,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+18,"wen", false,-1);
    tracep->declBus(c+100,"w_data", false,-1, 31,0);
    tracep->declBus(c+11,"w_addr", false,-1, 4,0);
    tracep->declBus(c+12,"r_addr1", false,-1, 4,0);
    tracep->declBus(c+13,"r_addr2", false,-1, 4,0);
    tracep->declBus(c+98,"r_data1", false,-1, 31,0);
    tracep->declBus(c+99,"r_data2", false,-1, 31,0);
    tracep->declBus(c+96,"exit_code", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+62+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_24110005_NPC___024root__trace_init_top(Vysyx_24110005_NPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root__trace_init_top\n"); );
    // Body
    Vysyx_24110005_NPC___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_24110005_NPC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24110005_NPC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24110005_NPC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_24110005_NPC___024root__trace_register(Vysyx_24110005_NPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_24110005_NPC___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_24110005_NPC___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_24110005_NPC___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_24110005_NPC___024root__trace_full_sub_0(Vysyx_24110005_NPC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_24110005_NPC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_24110005_NPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24110005_NPC___024root*>(voidSelf);
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_24110005_NPC___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_24110005_NPC___024root__trace_full_sub_0(Vysyx_24110005_NPC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+9,((7U & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                   >> 0xcU))),3);
    bufp->fullCData(oldp+10,((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)),7);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+12,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24110005_NPC__DOT__imm),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24110005_NPC__DOT__current_inst),32);
    bufp->fullBit(oldp+16,(((0x73U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel)) 
                            & (1U == vlSelf->ysyx_24110005_NPC__DOT__imm))));
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24110005_NPC__DOT__pc),32);
    bufp->fullBit(oldp+18,((((0x33U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                             | ((0x37U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                | ((0x17U == (0x7fU 
                                              & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                   | ((3U == (0x7fU 
                                              & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                      | ((0x13U == 
                                          (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                         | ((0x67U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                            | (0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))))))) 
                            & ((0U != (0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                >> 7U))) 
                               | (IData)(((0U == (0xf80U 
                                                  & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                          & (0U != vlSelf->ysyx_24110005_NPC__DOT__imm)))))));
    bufp->fullBit(oldp+19,(((0x33U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                            | ((0x37U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                               | ((0x17U == (0x7fU 
                                             & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                  | ((3U == (0x7fU 
                                             & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                     | ((0x13U == (0x7fU 
                                                   & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                        | ((0x67U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                           | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_24110005_NPC__DOT__current_inst))))))))));
    bufp->fullBit(oldp+20,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_visit_valid));
    bufp->fullIData(oldp+21,(((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc)),32);
    bufp->fullSData(oldp+22,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel),10);
    bufp->fullBit(oldp+23,((0x23U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst))));
    bufp->fullCData(oldp+24,(((0x23U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                               ? 1U : ((0xa3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                                        ? 3U : ((0x123U 
                                                 == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                                                 ? 0xfU
                                                 : 0U)))),8);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__op_lut
                             [vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel]),4);
    bufp->fullWData(oldp+26,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut),312);
    bufp->fullQData(oldp+36,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+38,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+40,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+42,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+44,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+46,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+48,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+50,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+61,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+62,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[0]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[1]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[2]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[3]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[4]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[5]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[6]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[7]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[8]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[9]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[10]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[11]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[12]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[13]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[14]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[15]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[16]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[17]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[18]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[19]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[20]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[21]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[22]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[23]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[24]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[25]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[26]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[27]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[28]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[29]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[30]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[31]),32);
    bufp->fullBit(oldp+94,(vlSelf->clk));
    bufp->fullBit(oldp+95,(vlSelf->rst));
    bufp->fullIData(oldp+96,(vlSelf->exit_code),32);
    bufp->fullIData(oldp+97,((((0x63U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                               | (0x6fU == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))
                               ? (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                  + vlSelf->ysyx_24110005_NPC__DOT__imm)
                               : ((IData)((0x67U == 
                                           (0x707fU 
                                            & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))
                                   ? (0xfffffffeU & 
                                      (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                       + vlSelf->ysyx_24110005_NPC__DOT__imm))
                                   : ((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc)))),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_24110005_NPC__DOT__src1),32);
    bufp->fullIData(oldp+99,(((0U != (0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                               >> 0x14U)))
                               ? vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf
                              [(0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                         >> 0x14U))]
                               : 0U)),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_24110005_NPC__DOT__reg_wdata),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_addr),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_rdata),32);
    bufp->fullIData(oldp+103,(0x20U),32);
    bufp->fullIData(oldp+104,(7U),32);
    bufp->fullIData(oldp+105,(5U),32);
    bufp->fullIData(oldp+106,(3U),32);
    bufp->fullIData(oldp+107,(0x80000000U),32);
    bufp->fullIData(oldp+108,(0x400U),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__src1_comp),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__src2_comp),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__imm_comp),32);
    bufp->fullCData(oldp+112,(3U),7);
    bufp->fullCData(oldp+113,(0x13U),7);
    bufp->fullCData(oldp+114,(0x67U),7);
    bufp->fullCData(oldp+115,(0x63U),7);
    bufp->fullCData(oldp+116,(0x6fU),7);
    bufp->fullCData(oldp+117,(0x23U),7);
    bufp->fullCData(oldp+118,(0x37U),7);
    bufp->fullCData(oldp+119,(0x17U),7);
    bufp->fullCData(oldp+120,(0x33U),7);
    bufp->fullIData(oldp+121,(8U),32);
    bufp->fullCData(oldp+122,(0x73U),7);
    bufp->fullIData(oldp+123,(0U),32);
    bufp->fullIData(oldp+124,(1U),32);
    bufp->fullIData(oldp+125,(0x27U),32);
    bufp->fullIData(oldp+126,(8U),32);
}
