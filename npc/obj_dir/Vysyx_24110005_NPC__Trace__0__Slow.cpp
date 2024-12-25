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
    tracep->pushNamePrefix("ysyx_24110005_NPC ");
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBit(c+95,"rst", false,-1);
    tracep->declBus(c+96,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+97,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+99,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+100,"MAX_INS", false,-1, 31,0);
    tracep->declBus(c+9,"pc", false,-1, 31,0);
    tracep->declBus(c+10,"inst", false,-1, 31,0);
    tracep->declBus(c+11,"fun", false,-1, 2,0);
    tracep->declBus(c+12,"opcode", false,-1, 6,0);
    tracep->declBus(c+13,"w_addr", false,-1, 4,0);
    tracep->declBus(c+14,"ra1", false,-1, 4,0);
    tracep->declBus(c+15,"ra2", false,-1, 4,0);
    tracep->declBus(c+16,"imm", false,-1, 31,0);
    tracep->declBus(c+17,"src1", false,-1, 31,0);
    tracep->declBus(c+18,"src2", false,-1, 31,0);
    tracep->declBus(c+19,"w_data", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->pushNamePrefix("alu_ins ");
    tracep->declBus(c+96,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+97,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+99,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+17,"src1", false,-1, 31,0);
    tracep->declBus(c+18,"src2", false,-1, 31,0);
    tracep->declBus(c+16,"imm", false,-1, 31,0);
    tracep->declBus(c+21,"sel", false,-1, 9,0);
    tracep->declBus(c+13,"w_addr", false,-1, 4,0);
    tracep->declBus(c+19,"w_data", false,-1, 31,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->declBus(c+22,"src1_comp", false,-1, 31,0);
    tracep->declBus(c+23,"src2_comp", false,-1, 31,0);
    tracep->declBus(c+24,"imm_comp", false,-1, 31,0);
    tracep->declBus(c+101,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+102,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+25,"w_data_comp", false,-1, 31,0);
    tracep->pushNamePrefix("comp1 ");
    tracep->declBus(c+96,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+17,"data", false,-1, 31,0);
    tracep->declBus(c+22,"data_comp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("comp2 ");
    tracep->declBus(c+96,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"data", false,-1, 31,0);
    tracep->declBus(c+23,"data_comp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("comp3 ");
    tracep->declBus(c+96,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+16,"data", false,-1, 31,0);
    tracep->declBus(c+24,"data_comp", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ins_Decoder ");
    tracep->declBus(c+96,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+97,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+99,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"inst", false,-1, 31,0);
    tracep->declBus(c+14,"ra1", false,-1, 4,0);
    tracep->declBus(c+15,"ra2", false,-1, 4,0);
    tracep->declBus(c+16,"imm", false,-1, 31,0);
    tracep->declBus(c+11,"fun", false,-1, 2,0);
    tracep->declBus(c+12,"opcode", false,-1, 6,0);
    tracep->declBus(c+13,"w_addr", false,-1, 4,0);
    tracep->declBus(c+103,"TYPE_NUM", false,-1, 31,0);
    tracep->declBus(c+97,"TYPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+104,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+105,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+106,"TYPE_I3", false,-1, 6,0);
    tracep->declBus(c+101,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+107,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+102,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+108,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+109,"TYPE_U1", false,-1, 6,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+103,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+97,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+96,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+16,"out", false,-1, 31,0);
    tracep->declBus(c+12,"key", false,-1, 6,0);
    tracep->declBus(c+110,"default_out", false,-1, 31,0);
    tracep->declArray(c+26,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+103,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+97,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+96,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+111,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+16,"out", false,-1, 31,0);
    tracep->declBus(c+12,"key", false,-1, 6,0);
    tracep->declBus(c+110,"default_out", false,-1, 31,0);
    tracep->declArray(c+26,"lut", false,-1, 311,0);
    tracep->declBus(c+112,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+113,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("reg_rd ");
    tracep->declBus(c+98,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+96,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+94,"clk", false,-1);
    tracep->declBus(c+19,"w_data", false,-1, 31,0);
    tracep->declBus(c+13,"w_addr", false,-1, 4,0);
    tracep->declBit(c+20,"wen", false,-1);
    tracep->declBus(c+17,"r_data1", false,-1, 31,0);
    tracep->declBus(c+14,"r_addr1", false,-1, 4,0);
    tracep->declBus(c+18,"r_data2", false,-1, 31,0);
    tracep->declBus(c+15,"r_addr2", false,-1, 4,0);
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
    bufp->fullIData(oldp+9,(vlSelf->ysyx_24110005_NPC__DOT__pc),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24110005_NPC__DOT__inst),32);
    bufp->fullCData(oldp+11,((7U & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+12,((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst)),7);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+14,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24110005_NPC__DOT__imm),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24110005_NPC__DOT__src1),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24110005_NPC__DOT__src2),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24110005_NPC__DOT__w_data),32);
    bufp->fullBit(oldp+20,((1U & (~ ((0x23U == (0x7fU 
                                                & vlSelf->ysyx_24110005_NPC__DOT__inst)) 
                                     | (0x63U == (0x7fU 
                                                  & vlSelf->ysyx_24110005_NPC__DOT__inst)))))));
    bufp->fullSData(oldp+21,(vlSelf->ysyx_24110005_NPC__DOT____Vcellinp__alu_ins__sel),10);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__src1_comp),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__src2_comp),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__imm_comp),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__w_data_comp),32);
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
    bufp->fullIData(oldp+96,(0x20U),32);
    bufp->fullIData(oldp+97,(7U),32);
    bufp->fullIData(oldp+98,(5U),32);
    bufp->fullIData(oldp+99,(3U),32);
    bufp->fullIData(oldp+100,(0x400U),32);
    bufp->fullCData(oldp+101,(0x63U),7);
    bufp->fullCData(oldp+102,(0x23U),7);
    bufp->fullIData(oldp+103,(8U),32);
    bufp->fullCData(oldp+104,(3U),7);
    bufp->fullCData(oldp+105,(0x13U),7);
    bufp->fullCData(oldp+106,(0x73U),7);
    bufp->fullCData(oldp+107,(0x6fU),7);
    bufp->fullCData(oldp+108,(0x37U),7);
    bufp->fullCData(oldp+109,(0x17U),7);
    bufp->fullIData(oldp+110,(0U),32);
    bufp->fullIData(oldp+111,(1U),32);
    bufp->fullIData(oldp+112,(0x27U),32);
    bufp->fullIData(oldp+113,(8U),32);
}
