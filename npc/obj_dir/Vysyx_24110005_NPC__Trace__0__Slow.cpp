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
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBit(c+114,"rst", false,-1);
    tracep->declBus(c+115,"exit_code", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24110005_NPC ");
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBit(c+114,"rst", false,-1);
    tracep->declBus(c+115,"exit_code", false,-1, 31,0);
    tracep->declBus(c+119,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+120,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+121,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+122,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+123,"BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+124,"MAX_INS", false,-1, 31,0);
    tracep->declBus(c+46,"fun", false,-1, 2,0);
    tracep->declBus(c+47,"opcode", false,-1, 6,0);
    tracep->declBus(c+48,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+49,"reg_raddr1", false,-1, 4,0);
    tracep->declBus(c+50,"reg_raddr2", false,-1, 4,0);
    tracep->declBus(c+51,"imm", false,-1, 31,0);
    tracep->declBus(c+52,"current_inst", false,-1, 31,0);
    tracep->declBit(c+53,"w_finish_sim", false,-1);
    tracep->declBus(c+54,"pc", false,-1, 31,0);
    tracep->declBus(c+103,"dnpc", false,-1, 31,0);
    tracep->declBus(c+104,"src1", false,-1, 31,0);
    tracep->declBus(c+105,"src2", false,-1, 31,0);
    tracep->declBus(c+116,"reg_wdata", false,-1, 31,0);
    tracep->declBit(c+55,"reg_wen", false,-1);
    tracep->declBit(c+56,"wen_ret_and_j", false,-1);
    tracep->pushNamePrefix("alu_ins ");
    tracep->declBus(c+119,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+120,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+121,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+122,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBus(c+48,"w_addr", false,-1, 4,0);
    tracep->declBus(c+54,"pc", false,-1, 31,0);
    tracep->declBus(c+104,"src1", false,-1, 31,0);
    tracep->declBus(c+105,"src2", false,-1, 31,0);
    tracep->declBus(c+51,"imm", false,-1, 31,0);
    tracep->declBus(c+47,"opcode", false,-1, 6,0);
    tracep->declBus(c+46,"fun", false,-1, 2,0);
    tracep->declBus(c+103,"dnpc", false,-1, 31,0);
    tracep->declBus(c+116,"w_data", false,-1, 31,0);
    tracep->declBit(c+56,"wen", false,-1);
    tracep->declBit(c+53,"w_finish_sim", false,-1);
    tracep->declBus(c+125,"src1_comp", false,-1, 31,0);
    tracep->declBus(c+126,"src2_comp", false,-1, 31,0);
    tracep->declBus(c+127,"imm_comp", false,-1, 31,0);
    tracep->declBus(c+57,"snpc", false,-1, 31,0);
    tracep->declBus(c+106,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+105,"mem_wdata", false,-1, 31,0);
    tracep->declBit(c+58,"mem_visit_valid", false,-1);
    tracep->declBit(c+59,"mem_wen", false,-1);
    tracep->declBit(c+60,"mem_ren", false,-1);
    tracep->declBus(c+61,"wmask", false,-1, 7,0);
    tracep->declBus(c+117,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+128,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+129,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+130,"TYPE_I2", false,-1, 6,0);
    tracep->declBus(c+131,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+132,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+133,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+134,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+135,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+136,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+137,"TYPE_R", false,-1, 6,0);
    tracep->declBus(c+123,"BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+138,"ALL_1", false,-1, 31,0);
    tracep->declBus(c+139,"CSR_MSTATUS", false,-1, 11,0);
    tracep->declBus(c+140,"CSR_MTVEC", false,-1, 11,0);
    tracep->declBus(c+141,"CSR_MEPC", false,-1, 11,0);
    tracep->declBus(c+142,"CSR_MCAUSE", false,-1, 11,0);
    tracep->declBus(c+143,"CSR_ECALL", false,-1, 11,0);
    tracep->declBus(c+144,"CSR_MRET", false,-1, 11,0);
    tracep->declBus(c+145,"YIELD", false,-1, 31,0);
    tracep->declQuad(c+107,"signed_mulh__Vstatic__mul_result", false,-1, 63,0);
    tracep->declQuad(c+109,"unsigned_mulh__Vstatic__mul_result", false,-1, 63,0);
    tracep->declBus(c+111,"mulh", false,-1, 31,0);
    tracep->declBus(c+112,"mul_unsigned", false,-1, 31,0);
    tracep->declBus(c+118,"csr_data", false,-1, 31,0);
    tracep->declBit(c+62,"csr_wen", false,-1);
    tracep->declBus(c+10,"m_status", false,-1, 31,0);
    tracep->declBus(c+11,"m_cause", false,-1, 31,0);
    tracep->declBus(c+12,"m_tvec", false,-1, 31,0);
    tracep->declBus(c+13,"m_epc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ins_Decoder ");
    tracep->declBus(c+119,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+121,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+120,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+122,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"inst", false,-1, 31,0);
    tracep->declBus(c+49,"ra1", false,-1, 4,0);
    tracep->declBus(c+50,"ra2", false,-1, 4,0);
    tracep->declBus(c+51,"imm", false,-1, 31,0);
    tracep->declBus(c+46,"fun", false,-1, 2,0);
    tracep->declBus(c+47,"opcode", false,-1, 6,0);
    tracep->declBus(c+48,"w_addr", false,-1, 4,0);
    tracep->declBus(c+146,"TYPE_NUM", false,-1, 31,0);
    tracep->declBus(c+120,"TYPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+128,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+129,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+131,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+132,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+133,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+134,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+135,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+136,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+137,"TYPE_R", false,-1, 6,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+146,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+120,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+51,"out", false,-1, 31,0);
    tracep->declBus(c+47,"key", false,-1, 6,0);
    tracep->declBus(c+147,"default_out", false,-1, 31,0);
    tracep->declArray(c+63,"lut", false,-1, 350,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+146,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+120,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+148,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+51,"out", false,-1, 31,0);
    tracep->declBus(c+47,"key", false,-1, 6,0);
    tracep->declBus(c+147,"default_out", false,-1, 31,0);
    tracep->declArray(c+63,"lut", false,-1, 350,0);
    tracep->declBus(c+149,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+74+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+92+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+101,"lut_out", false,-1, 31,0);
    tracep->declBit(c+102,"hit", false,-1);
    tracep->declBus(c+150,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("reg_rd ");
    tracep->declBus(c+121,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+119,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+113,"clk", false,-1);
    tracep->declBit(c+55,"wen", false,-1);
    tracep->declBus(c+116,"w_data", false,-1, 31,0);
    tracep->declBus(c+48,"w_addr", false,-1, 4,0);
    tracep->declBus(c+49,"r_addr1", false,-1, 4,0);
    tracep->declBus(c+50,"r_addr2", false,-1, 4,0);
    tracep->declBus(c+104,"r_data1", false,-1, 31,0);
    tracep->declBus(c+105,"r_data2", false,-1, 31,0);
    tracep->declBus(c+115,"exit_code", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+14+i*1,"rf", true,(i+0), 31,0);
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
    bufp->fullCData(oldp+9,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[8]),7);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_status),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_cause),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_tvec),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_epc),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[0]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[1]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[2]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[3]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[4]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[5]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[6]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[7]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[8]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[9]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[10]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[11]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[12]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[13]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[14]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[15]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[16]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[17]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[18]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[19]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[20]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[21]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[22]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[23]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[24]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[25]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[26]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[27]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[28]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[29]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[30]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[31]),32);
    bufp->fullCData(oldp+46,((7U & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+47,((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)),7);
    bufp->fullCData(oldp+48,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+49,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_24110005_NPC__DOT__imm),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_24110005_NPC__DOT__current_inst),32);
    bufp->fullBit(oldp+53,((IData)(((0x73U == (0x707fU 
                                               & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                    & (1U == vlSelf->ysyx_24110005_NPC__DOT__imm)))));
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24110005_NPC__DOT__pc),32);
    bufp->fullBit(oldp+55,((((0x33U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
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
                                            | (((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                                | (0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_24110005_NPC__DOT__current_inst))) 
                                               & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                      >> 7U)))))))))) 
                            & ((0U != (0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                >> 7U))) 
                               | (IData)(((0U == (0xf80U 
                                                  & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                          & (0U != vlSelf->ysyx_24110005_NPC__DOT__imm)))))));
    bufp->fullBit(oldp+56,(((0x33U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
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
                                           | (((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                               | (0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_24110005_NPC__DOT__current_inst))) 
                                              & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                     >> 7U))))))))))));
    bufp->fullIData(oldp+57,(((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc)),32);
    bufp->fullBit(oldp+58,(((3U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                            | (0x23U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))));
    bufp->fullBit(oldp+59,((0x23U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst))));
    bufp->fullBit(oldp+60,((3U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst))));
    bufp->fullCData(oldp+61,(((0x1000U & vlSelf->ysyx_24110005_NPC__DOT__current_inst)
                               ? 3U : ((0x2000U & vlSelf->ysyx_24110005_NPC__DOT__current_inst)
                                        ? 0xfU : 1U))),8);
    bufp->fullBit(oldp+62,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__csr_wen));
    bufp->fullWData(oldp+63,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut),351);
    bufp->fullQData(oldp+74,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+76,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+78,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+80,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+82,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+84,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+86,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+88,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+90,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[8]),39);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+102,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+103,(vlSelf->ysyx_24110005_NPC__DOT__dnpc),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_24110005_NPC__DOT__src1),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_wdata),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_addr),32);
    bufp->fullQData(oldp+107,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__signed_mulh__Vstatic__mul_result),64);
    bufp->fullQData(oldp+109,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__unsigned_mulh__Vstatic__mul_result),64);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mulh),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mul_unsigned),32);
    bufp->fullBit(oldp+113,(vlSelf->clk));
    bufp->fullBit(oldp+114,(vlSelf->rst));
    bufp->fullIData(oldp+115,(vlSelf->exit_code),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_24110005_NPC__DOT__reg_wdata),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_rdata),32);
    bufp->fullIData(oldp+118,(((0x300U == (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__imm))
                                ? vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_status
                                : ((0x305U == (0xfffU 
                                               & vlSelf->ysyx_24110005_NPC__DOT__imm))
                                    ? vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_tvec
                                    : ((0x341U == (0xfffU 
                                                   & vlSelf->ysyx_24110005_NPC__DOT__imm))
                                        ? vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_epc
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->ysyx_24110005_NPC__DOT__imm))
                                            ? vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_cause
                                            : 0xffffffffU))))),32);
    bufp->fullIData(oldp+119,(0x20U),32);
    bufp->fullIData(oldp+120,(7U),32);
    bufp->fullIData(oldp+121,(5U),32);
    bufp->fullIData(oldp+122,(3U),32);
    bufp->fullIData(oldp+123,(0x80000000U),32);
    bufp->fullIData(oldp+124,(0x400U),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__src1_comp),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__src2_comp),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__imm_comp),32);
    bufp->fullCData(oldp+128,(3U),7);
    bufp->fullCData(oldp+129,(0x13U),7);
    bufp->fullCData(oldp+130,(0x67U),7);
    bufp->fullCData(oldp+131,(0x73U),7);
    bufp->fullCData(oldp+132,(0x63U),7);
    bufp->fullCData(oldp+133,(0x6fU),7);
    bufp->fullCData(oldp+134,(0x23U),7);
    bufp->fullCData(oldp+135,(0x37U),7);
    bufp->fullCData(oldp+136,(0x17U),7);
    bufp->fullCData(oldp+137,(0x33U),7);
    bufp->fullIData(oldp+138,(1U),32);
    bufp->fullSData(oldp+139,(0x300U),12);
    bufp->fullSData(oldp+140,(0x305U),12);
    bufp->fullSData(oldp+141,(0x341U),12);
    bufp->fullSData(oldp+142,(0x342U),12);
    bufp->fullSData(oldp+143,(0U),12);
    bufp->fullSData(oldp+144,(0x302U),12);
    bufp->fullIData(oldp+145,(0xbU),32);
    bufp->fullIData(oldp+146,(9U),32);
    bufp->fullIData(oldp+147,(0U),32);
    bufp->fullIData(oldp+148,(1U),32);
    bufp->fullIData(oldp+149,(0x27U),32);
    bufp->fullIData(oldp+150,(9U),32);
}
