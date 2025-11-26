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
    tracep->declBit(c+124,"clk", false,-1);
    tracep->declBit(c+125,"rst", false,-1);
    tracep->declBus(c+126,"exit_code", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24110005_NPC ");
    tracep->declBit(c+124,"clk", false,-1);
    tracep->declBit(c+125,"rst", false,-1);
    tracep->declBus(c+126,"exit_code", false,-1, 31,0);
    tracep->declBus(c+129,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+130,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+131,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+133,"BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+134,"STATE_IF", false,-1, 3,0);
    tracep->declBus(c+135,"STATE_ID", false,-1, 3,0);
    tracep->declBus(c+136,"STATE_EX", false,-1, 3,0);
    tracep->declBus(c+137,"STATE_WB", false,-1, 3,0);
    tracep->declBus(c+138,"IDLE", false,-1, 3,0);
    tracep->declBus(c+94,"cur_state", false,-1, 3,0);
    tracep->declBit(c+95,"if_valid", false,-1);
    tracep->declBit(c+95,"if_ready", false,-1);
    tracep->declBit(c+95,"fetch_dec_valid", false,-1);
    tracep->declBit(c+139,"fetch_dec_ready", false,-1);
    tracep->declBit(c+96,"dec_exc_valid", false,-1);
    tracep->declBit(c+139,"dec_exc_ready", false,-1);
    tracep->declBit(c+97,"exc_wb_valid", false,-1);
    tracep->declBit(c+139,"exc_wb_ready", false,-1);
    tracep->declBit(c+57,"bresp", false,-1);
    tracep->declBit(c+57,"bvalid", false,-1);
    tracep->declBit(c+98,"bready", false,-1);
    tracep->declBit(c+99,"w_finish_sim", false,-1);
    tracep->declBus(c+100,"pc", false,-1, 31,0);
    tracep->declBus(c+113,"dnpc", false,-1, 31,0);
    tracep->declBus(c+10,"current_inst", false,-1, 31,0);
    tracep->declBus(c+140,"fetch_dec_inst", false,-1, 31,0);
    tracep->declBus(c+11,"fun", false,-1, 2,0);
    tracep->declBus(c+12,"opcode", false,-1, 6,0);
    tracep->declBus(c+13,"waddr", false,-1, 4,0);
    tracep->declBus(c+14,"raddr1", false,-1, 4,0);
    tracep->declBus(c+15,"raddr2", false,-1, 4,0);
    tracep->declBus(c+16,"imm", false,-1, 31,0);
    tracep->declBus(c+101,"dec_exc_fun", false,-1, 2,0);
    tracep->declBus(c+102,"dec_exc_opcode", false,-1, 6,0);
    tracep->declBus(c+103,"dec_exc_waddr", false,-1, 4,0);
    tracep->declBus(c+104,"dec_exc_imm", false,-1, 31,0);
    tracep->declBus(c+114,"src1", false,-1, 31,0);
    tracep->declBus(c+115,"src2", false,-1, 31,0);
    tracep->declBus(c+116,"w_data", false,-1, 31,0);
    tracep->declBit(c+105,"wen_ret_and_j", false,-1);
    tracep->declBit(c+106,"wen", false,-1);
    tracep->declBus(c+127,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+107,"wmask", false,-1, 7,0);
    tracep->declBit(c+108,"mem_wen", false,-1);
    tracep->declBit(c+109,"mem_w_valid", false,-1);
    tracep->declBit(c+139,"mem_w_ready", false,-1);
    tracep->declBit(c+97,"mem_r_valid", false,-1);
    tracep->declBit(c+110,"mem_r_ready", false,-1);
    tracep->declBus(c+115,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+117,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+97,"mem_ar_valid", false,-1);
    tracep->declBit(c+139,"mem_ar_ready", false,-1);
    tracep->pushNamePrefix("Excute_Unit ");
    tracep->declBus(c+129,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+130,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+131,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+124,"clk", false,-1);
    tracep->declBus(c+103,"w_addr", false,-1, 4,0);
    tracep->declBus(c+100,"pc", false,-1, 31,0);
    tracep->declBus(c+114,"src1", false,-1, 31,0);
    tracep->declBus(c+115,"src2", false,-1, 31,0);
    tracep->declBus(c+104,"imm", false,-1, 31,0);
    tracep->declBus(c+102,"opcode", false,-1, 6,0);
    tracep->declBus(c+101,"fun", false,-1, 2,0);
    tracep->declBus(c+113,"dnpc", false,-1, 31,0);
    tracep->declBus(c+116,"w_data", false,-1, 31,0);
    tracep->declBit(c+105,"wen", false,-1);
    tracep->declBus(c+127,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+107,"wmask", false,-1, 7,0);
    tracep->declBit(c+108,"mem_wen", false,-1);
    tracep->declBit(c+110,"mem_ren", false,-1);
    tracep->declBus(c+115,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+117,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+99,"w_finish_sim", false,-1);
    tracep->declBus(c+141,"src1_comp", false,-1, 31,0);
    tracep->declBus(c+142,"src2_comp", false,-1, 31,0);
    tracep->declBus(c+143,"imm_comp", false,-1, 31,0);
    tracep->declBus(c+111,"snpc", false,-1, 31,0);
    tracep->declBus(c+144,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+145,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+146,"TYPE_I2", false,-1, 6,0);
    tracep->declBus(c+147,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+148,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+149,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+150,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+151,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+152,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+153,"TYPE_R", false,-1, 6,0);
    tracep->declBus(c+133,"BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+154,"ALL_1", false,-1, 31,0);
    tracep->declBus(c+155,"CSR_MSTATUS", false,-1, 11,0);
    tracep->declBus(c+156,"CSR_MTVEC", false,-1, 11,0);
    tracep->declBus(c+157,"CSR_MEPC", false,-1, 11,0);
    tracep->declBus(c+158,"CSR_MCAUSE", false,-1, 11,0);
    tracep->declBus(c+159,"CSR_ECALL", false,-1, 11,0);
    tracep->declBus(c+160,"CSR_MRET", false,-1, 11,0);
    tracep->declBus(c+161,"YIELD", false,-1, 31,0);
    tracep->declQuad(c+118,"signed_mulh__Vstatic__mul_result", false,-1, 63,0);
    tracep->declQuad(c+120,"unsigned_mulh__Vstatic__mul_result", false,-1, 63,0);
    tracep->declBus(c+113,"dnpc_reg", false,-1, 31,0);
    tracep->declBus(c+122,"mulh", false,-1, 31,0);
    tracep->declBus(c+123,"mul_unsigned", false,-1, 31,0);
    tracep->declBus(c+116,"w_data_reg", false,-1, 31,0);
    tracep->declBus(c+128,"csr_data", false,-1, 31,0);
    tracep->declBit(c+112,"csr_wen", false,-1);
    tracep->declBus(c+58,"m_status", false,-1, 31,0);
    tracep->declBus(c+59,"m_cause", false,-1, 31,0);
    tracep->declBus(c+60,"m_tvec", false,-1, 31,0);
    tracep->declBus(c+61,"m_epc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Inst_Decode_Unit ");
    tracep->declBus(c+129,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+131,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+130,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+10,"inst", false,-1, 31,0);
    tracep->declBus(c+14,"reg_r_addr1", false,-1, 4,0);
    tracep->declBus(c+15,"reg_r_addr2", false,-1, 4,0);
    tracep->declBus(c+13,"reg_w_addr", false,-1, 4,0);
    tracep->declBus(c+16,"imm", false,-1, 31,0);
    tracep->declBus(c+11,"fun", false,-1, 2,0);
    tracep->declBus(c+12,"opcode", false,-1, 6,0);
    tracep->declBus(c+162,"TYPE_NUM", false,-1, 31,0);
    tracep->declBus(c+130,"TYPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+144,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+145,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+147,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+148,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+149,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+150,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+151,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+152,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+153,"TYPE_R", false,-1, 6,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+162,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+130,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+129,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+16,"out", false,-1, 31,0);
    tracep->declBus(c+12,"key", false,-1, 6,0);
    tracep->declBus(c+163,"default_out", false,-1, 31,0);
    tracep->declArray(c+17,"lut", false,-1, 350,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+162,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+130,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+129,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+164,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+16,"out", false,-1, 31,0);
    tracep->declBus(c+12,"key", false,-1, 6,0);
    tracep->declBus(c+163,"default_out", false,-1, 31,0);
    tracep->declArray(c+17,"lut", false,-1, 350,0);
    tracep->declBus(c+165,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+28+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+46+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+55,"lut_out", false,-1, 31,0);
    tracep->declBit(c+56,"hit", false,-1);
    tracep->declBus(c+166,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("Inst_Fetch_Unit ");
    tracep->declBus(c+129,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+124,"clk", false,-1);
    tracep->declBit(c+125,"rst", false,-1);
    tracep->declBus(c+100,"inst_ar_addr", false,-1, 31,0);
    tracep->declBit(c+95,"if_ar_ready", false,-1);
    tracep->declBit(c+95,"if_ar_valid", false,-1);
    tracep->declBus(c+10,"current_inst", false,-1, 31,0);
    tracep->declBit(c+139,"if_r_ready", false,-1);
    tracep->declBit(c+95,"if_r_valid", false,-1);
    tracep->declBus(c+10,"fetch_dec_inst", false,-1, 31,0);
    tracep->declBit(c+167,"inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Write_Back_Unit ");
    tracep->declBus(c+131,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+124,"clk", false,-1);
    tracep->declBit(c+106,"wen", false,-1);
    tracep->declBus(c+116,"w_data", false,-1, 31,0);
    tracep->declBus(c+103,"w_addr", false,-1, 4,0);
    tracep->declBus(c+14,"r_addr1", false,-1, 4,0);
    tracep->declBus(c+15,"r_addr2", false,-1, 4,0);
    tracep->declBus(c+114,"r_data1", false,-1, 31,0);
    tracep->declBus(c+115,"r_data2", false,-1, 31,0);
    tracep->declBus(c+126,"exit_code", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+62+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_sram ");
    tracep->declBus(c+129,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+124,"clk", false,-1);
    tracep->declBus(c+107,"wmask", false,-1, 7,0);
    tracep->declBus(c+127,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+97,"mem_ar_valid", false,-1);
    tracep->declBit(c+139,"mem_ar_ready", false,-1);
    tracep->declBus(c+117,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+110,"mem_r_ready", false,-1);
    tracep->declBit(c+97,"mem_r_valid", false,-1);
    tracep->declBus(c+115,"mem_wdata", false,-1, 31,0);
    tracep->declBit(c+109,"mem_w_valid", false,-1);
    tracep->declBit(c+139,"mem_w_ready", false,-1);
    tracep->declBit(c+57,"bresp", false,-1);
    tracep->declBit(c+57,"bvalid", false,-1);
    tracep->declBit(c+98,"bready", false,-1);
    tracep->declBus(c+117,"r_data", false,-1, 31,0);
    tracep->declBit(c+57,"r_bresp", false,-1);
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
    bufp->fullCData(oldp+1,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[8]),7);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst),32);
    bufp->fullCData(oldp+11,((7U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+12,((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst)),7);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+14,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24110005_NPC__DOT__imm),32);
    bufp->fullWData(oldp+17,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut),351);
    bufp->fullQData(oldp+28,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+30,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+32,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+34,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+36,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+38,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+40,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+42,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+44,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[8]),39);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+56,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_24110005_NPC__DOT__mem_sram__DOT__r_bresp));
    bufp->fullIData(oldp+58,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_status),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_cause),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_tvec),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_epc),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[0]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[1]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[2]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[3]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[4]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[5]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[6]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[7]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[8]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[9]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[10]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[11]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[12]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[13]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[14]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[15]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[16]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[17]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[18]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[19]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[20]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[21]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[22]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[23]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[24]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[25]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[26]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[27]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[28]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[29]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[30]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[31]),32);
    bufp->fullCData(oldp+94,(vlSelf->ysyx_24110005_NPC__DOT__cur_state),4);
    bufp->fullBit(oldp+95,((1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))));
    bufp->fullBit(oldp+96,((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))));
    bufp->fullBit(oldp+97,((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))));
    bufp->fullBit(oldp+98,((4U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))));
    bufp->fullBit(oldp+99,(((0x73U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                            & ((1U == vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm) 
                               & (0U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))))));
    bufp->fullIData(oldp+100,(vlSelf->ysyx_24110005_NPC__DOT__pc),32);
    bufp->fullCData(oldp+101,(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun),3);
    bufp->fullCData(oldp+102,(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode),7);
    bufp->fullCData(oldp+103,(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_waddr),5);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm),32);
    bufp->fullBit(oldp+105,(((0x33U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                             | ((0x37U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                | ((0x17U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                   | ((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                      | ((0x13U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                         | ((0x67U 
                                             == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                            | (((0x6fU 
                                                 == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                                | (0x73U 
                                                   == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))) 
                                               & (0U 
                                                  != (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_waddr)))))))))));
    bufp->fullBit(oldp+106,(((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state)) 
                             & (((0x33U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                 | ((0x37U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                    | ((0x17U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                       | ((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                          | ((0x13U 
                                              == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                             | ((0x67U 
                                                 == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                                | (((0x6fU 
                                                     == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                                    | (0x73U 
                                                       == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))) 
                                                   & (0U 
                                                      != (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_waddr))))))))) 
                                & ((0U != (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_waddr)) 
                                   | ((0U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_waddr)) 
                                      & (0U != vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)))))));
    bufp->fullCData(oldp+107,(((1U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                ? 3U : ((2U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                         ? 0xfU : 1U))),8);
    bufp->fullBit(oldp+108,((0x23U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))));
    bufp->fullBit(oldp+109,(((0x23U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                             & (3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state)))));
    bufp->fullBit(oldp+110,((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))));
    bufp->fullIData(oldp+111,(((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc)),32);
    bufp->fullBit(oldp+112,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__csr_wen));
    bufp->fullIData(oldp+113,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__dnpc_reg),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_24110005_NPC__DOT__src1),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24110005_NPC__DOT__src2),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__w_data_reg),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_24110005_NPC__DOT__mem_sram__DOT__r_data),32);
    bufp->fullQData(oldp+118,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__Vstatic__mul_result),64);
    bufp->fullQData(oldp+120,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__Vstatic__mul_result),64);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mulh),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mul_unsigned),32);
    bufp->fullBit(oldp+124,(vlSelf->clk));
    bufp->fullBit(oldp+125,(vlSelf->rst));
    bufp->fullIData(oldp+126,(vlSelf->exit_code),32);
    bufp->fullIData(oldp+127,((vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm 
                               + vlSelf->ysyx_24110005_NPC__DOT__src1)),32);
    bufp->fullIData(oldp+128,(((0x300U == (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_status
                                : ((0x305U == (0xfffU 
                                               & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                    ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_tvec
                                    : ((0x341U == (0xfffU 
                                                   & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                        ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_epc
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                            ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_cause
                                            : 0xffffffffU))))),32);
    bufp->fullIData(oldp+129,(0x20U),32);
    bufp->fullIData(oldp+130,(7U),32);
    bufp->fullIData(oldp+131,(5U),32);
    bufp->fullIData(oldp+132,(3U),32);
    bufp->fullIData(oldp+133,(0x80000000U),32);
    bufp->fullCData(oldp+134,(1U),4);
    bufp->fullCData(oldp+135,(2U),4);
    bufp->fullCData(oldp+136,(3U),4);
    bufp->fullCData(oldp+137,(4U),4);
    bufp->fullCData(oldp+138,(0U),4);
    bufp->fullBit(oldp+139,(1U));
    bufp->fullIData(oldp+140,(vlSelf->ysyx_24110005_NPC__DOT__fetch_dec_inst),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__src1_comp),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__src2_comp),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__imm_comp),32);
    bufp->fullCData(oldp+144,(3U),7);
    bufp->fullCData(oldp+145,(0x13U),7);
    bufp->fullCData(oldp+146,(0x67U),7);
    bufp->fullCData(oldp+147,(0x73U),7);
    bufp->fullCData(oldp+148,(0x63U),7);
    bufp->fullCData(oldp+149,(0x6fU),7);
    bufp->fullCData(oldp+150,(0x23U),7);
    bufp->fullCData(oldp+151,(0x37U),7);
    bufp->fullCData(oldp+152,(0x17U),7);
    bufp->fullCData(oldp+153,(0x33U),7);
    bufp->fullIData(oldp+154,(1U),32);
    bufp->fullSData(oldp+155,(0x300U),12);
    bufp->fullSData(oldp+156,(0x305U),12);
    bufp->fullSData(oldp+157,(0x341U),12);
    bufp->fullSData(oldp+158,(0x342U),12);
    bufp->fullSData(oldp+159,(0U),12);
    bufp->fullSData(oldp+160,(0x302U),12);
    bufp->fullIData(oldp+161,(0xbU),32);
    bufp->fullIData(oldp+162,(9U),32);
    bufp->fullIData(oldp+163,(0U),32);
    bufp->fullIData(oldp+164,(1U),32);
    bufp->fullIData(oldp+165,(0x27U),32);
    bufp->fullIData(oldp+166,(9U),32);
    bufp->fullBit(oldp+167,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__inst));
}
