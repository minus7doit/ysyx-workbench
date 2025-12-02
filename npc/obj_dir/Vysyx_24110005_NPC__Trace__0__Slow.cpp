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
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBus(c+140,"exit_code", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_24110005_NPC ");
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBus(c+140,"exit_code", false,-1, 31,0);
    tracep->declBus(c+143,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+144,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+145,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+147,"BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+148,"TYPE_S", false,-1, 6,0);
    tracep->declBit(c+149,"if_ar_valid", false,-1);
    tracep->declBit(c+50,"fetch_dec_valid", false,-1);
    tracep->declBit(c+51,"fetch_dec_ready", false,-1);
    tracep->declBit(c+52,"dec_exc_valid", false,-1);
    tracep->declBit(c+53,"dec_exc_ready", false,-1);
    tracep->declBit(c+54,"exc_wb_valid", false,-1);
    tracep->declBit(c+55,"exc_wb_ready", false,-1);
    tracep->declBit(c+56,"wb_bresp", false,-1);
    tracep->declBit(c+57,"mem_bresp", false,-1);
    tracep->declBit(c+58,"bresp", false,-1);
    tracep->declBit(c+59,"w_finish_sim", false,-1);
    tracep->declBus(c+60,"pc", false,-1, 31,0);
    tracep->declBus(c+10,"dnpc", false,-1, 31,0);
    tracep->declBus(c+61,"current_inst", false,-1, 31,0);
    tracep->declBus(c+62,"fun", false,-1, 2,0);
    tracep->declBus(c+63,"opcode", false,-1, 6,0);
    tracep->declBus(c+64,"waddr", false,-1, 4,0);
    tracep->declBus(c+65,"raddr1", false,-1, 4,0);
    tracep->declBus(c+66,"raddr2", false,-1, 4,0);
    tracep->declBus(c+67,"imm", false,-1, 31,0);
    tracep->declBus(c+130,"src1", false,-1, 31,0);
    tracep->declBus(c+131,"src2", false,-1, 31,0);
    tracep->declBus(c+11,"w_data", false,-1, 31,0);
    tracep->declBit(c+68,"wen_ret_and_j", false,-1);
    tracep->declBit(c+69,"wen", false,-1);
    tracep->declBit(c+150,"mem_wen", false,-1);
    tracep->declBit(c+70,"mem_w_valid", false,-1);
    tracep->declBit(c+71,"mem_w_ready", false,-1);
    tracep->declBit(c+72,"mem_ar_valid", false,-1);
    tracep->declBit(c+71,"mem_ar_ready", false,-1);
    tracep->declBus(c+151,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+12,"mem_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("Excute_Unit ");
    tracep->declBus(c+143,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+144,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+145,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBit(c+52,"dec_exc_valid", false,-1);
    tracep->declBit(c+53,"dec_exc_ready", false,-1);
    tracep->declBus(c+64,"w_addr", false,-1, 4,0);
    tracep->declBus(c+60,"pc", false,-1, 31,0);
    tracep->declBus(c+130,"src1", false,-1, 31,0);
    tracep->declBus(c+131,"src2", false,-1, 31,0);
    tracep->declBus(c+67,"imm", false,-1, 31,0);
    tracep->declBus(c+63,"opcode", false,-1, 6,0);
    tracep->declBus(c+62,"fun", false,-1, 2,0);
    tracep->declBus(c+10,"dnpc", false,-1, 31,0);
    tracep->declBus(c+11,"w_data", false,-1, 31,0);
    tracep->declBit(c+68,"wen", false,-1);
    tracep->declBus(c+12,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+70,"mem_w_valid", false,-1);
    tracep->declBit(c+71,"mem_w_ready", false,-1);
    tracep->declBit(c+57,"mem_bresp", false,-1);
    tracep->declBit(c+54,"exc_wb_valid", false,-1);
    tracep->declBit(c+55,"exc_wb_ready", false,-1);
    tracep->declBit(c+59,"w_finish_sim", false,-1);
    tracep->declBus(c+73,"snpc", false,-1, 31,0);
    tracep->declBus(c+152,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+153,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+154,"TYPE_I2", false,-1, 6,0);
    tracep->declBus(c+155,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+156,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+157,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+148,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+158,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+159,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+160,"TYPE_R", false,-1, 6,0);
    tracep->declBus(c+147,"BASE_ADDR", false,-1, 31,0);
    tracep->declBus(c+161,"ALL_1", false,-1, 31,0);
    tracep->declBus(c+162,"CSR_MSTATUS", false,-1, 11,0);
    tracep->declBus(c+163,"CSR_MTVEC", false,-1, 11,0);
    tracep->declBus(c+164,"CSR_MEPC", false,-1, 11,0);
    tracep->declBus(c+165,"CSR_MCAUSE", false,-1, 11,0);
    tracep->declBus(c+166,"CSR_ECALL", false,-1, 11,0);
    tracep->declBus(c+167,"CSR_MRET", false,-1, 11,0);
    tracep->declBus(c+168,"YIELD", false,-1, 31,0);
    tracep->declBus(c+169,"STATE_EX", false,-1, 1,0);
    tracep->declBus(c+170,"STATE_OUTPUT_WB", false,-1, 1,0);
    tracep->declBus(c+171,"STATE_STORE", false,-1, 1,0);
    tracep->declQuad(c+132,"signed_mulh__Vstatic__mul_result", false,-1, 63,0);
    tracep->declQuad(c+134,"unsigned_mulh__Vstatic__mul_result", false,-1, 63,0);
    tracep->declBus(c+74,"ex_state", false,-1, 1,0);
    tracep->declBus(c+10,"dnpc_reg", false,-1, 31,0);
    tracep->declBus(c+136,"mulh", false,-1, 31,0);
    tracep->declBus(c+137,"mul_unsigned", false,-1, 31,0);
    tracep->declBus(c+11,"w_data_reg", false,-1, 31,0);
    tracep->declBus(c+141,"csr_data", false,-1, 31,0);
    tracep->declBit(c+75,"csr_wen", false,-1);
    tracep->declBus(c+13,"m_status", false,-1, 31,0);
    tracep->declBus(c+14,"m_cause", false,-1, 31,0);
    tracep->declBus(c+15,"m_tvec", false,-1, 31,0);
    tracep->declBus(c+16,"m_epc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Inst_Decode_Unit ");
    tracep->declBus(c+143,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+145,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+144,"OP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"FUN_WIDTH", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBus(c+61,"inst", false,-1, 31,0);
    tracep->declBit(c+50,"fetch_dec_valid", false,-1);
    tracep->declBit(c+51,"fetch_dec_ready", false,-1);
    tracep->declBus(c+65,"r_addr1", false,-1, 4,0);
    tracep->declBus(c+66,"r_addr2", false,-1, 4,0);
    tracep->declBus(c+64,"dec_exc_waddr", false,-1, 4,0);
    tracep->declBus(c+67,"dec_exc_imm", false,-1, 31,0);
    tracep->declBus(c+62,"dec_exc_fun", false,-1, 2,0);
    tracep->declBus(c+63,"dec_exc_opcode", false,-1, 6,0);
    tracep->declBit(c+72,"mem_ar_valid", false,-1);
    tracep->declBit(c+71,"mem_ar_ready", false,-1);
    tracep->declBit(c+52,"dec_exc_valid", false,-1);
    tracep->declBit(c+53,"dec_exc_ready", false,-1);
    tracep->declBus(c+172,"TYPE_NUM", false,-1, 31,0);
    tracep->declBus(c+144,"TYPE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+152,"TYPE_I0", false,-1, 6,0);
    tracep->declBus(c+153,"TYPE_I1", false,-1, 6,0);
    tracep->declBus(c+155,"TYPE_CSR", false,-1, 6,0);
    tracep->declBus(c+156,"TYPE_B", false,-1, 6,0);
    tracep->declBus(c+157,"TYPE_J", false,-1, 6,0);
    tracep->declBus(c+148,"TYPE_S", false,-1, 6,0);
    tracep->declBus(c+158,"TYPE_U0", false,-1, 6,0);
    tracep->declBus(c+159,"TYPE_U1", false,-1, 6,0);
    tracep->declBus(c+160,"TYPE_R", false,-1, 6,0);
    tracep->declBus(c+169,"STATE_ID", false,-1, 1,0);
    tracep->declBus(c+170,"STATE_OUTPUT", false,-1, 1,0);
    tracep->declBus(c+171,"STATE_LOAD_DATA", false,-1, 1,0);
    tracep->declBus(c+62,"r_fun", false,-1, 2,0);
    tracep->declBus(c+63,"r_opcode", false,-1, 6,0);
    tracep->declBus(c+64,"r_waddr", false,-1, 4,0);
    tracep->declBus(c+67,"r_imm", false,-1, 31,0);
    tracep->declBus(c+76,"fun", false,-1, 2,0);
    tracep->declBus(c+77,"opcode", false,-1, 6,0);
    tracep->declBus(c+78,"w_addr", false,-1, 4,0);
    tracep->declBus(c+79,"imm", false,-1, 31,0);
    tracep->declBit(c+80,"mem_load_en", false,-1);
    tracep->declBus(c+81,"id_state", false,-1, 1,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+172,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+144,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+143,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+79,"out", false,-1, 31,0);
    tracep->declBus(c+77,"key", false,-1, 6,0);
    tracep->declBus(c+173,"default_out", false,-1, 31,0);
    tracep->declArray(c+82,"lut", false,-1, 350,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+172,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+144,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+143,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+174,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+79,"out", false,-1, 31,0);
    tracep->declBus(c+77,"key", false,-1, 6,0);
    tracep->declBus(c+173,"default_out", false,-1, 31,0);
    tracep->declArray(c+82,"lut", false,-1, 350,0);
    tracep->declBus(c+175,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declQuad(c+93+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+111+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+120,"lut_out", false,-1, 31,0);
    tracep->declBit(c+121,"hit", false,-1);
    tracep->declBus(c+176,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("Inst_Fetch_Unit ");
    tracep->declBus(c+143,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+143,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBus(c+60,"inst_ar_addr", false,-1, 31,0);
    tracep->declBus(c+61,"current_inst", false,-1, 31,0);
    tracep->declBit(c+58,"bresp", false,-1);
    tracep->declBit(c+51,"if_r_ready", false,-1);
    tracep->declBit(c+50,"if_r_valid", false,-1);
    tracep->declBit(c+122,"if_ar_valid", false,-1);
    tracep->declBit(c+123,"if_ar_ready", false,-1);
    tracep->declBit(c+177,"if_aw_ready", false,-1);
    tracep->declBit(c+177,"if_aw_valid", false,-1);
    tracep->declBus(c+178,"if_wdata", false,-1, 31,0);
    tracep->declBit(c+177,"if_w_ready", false,-1);
    tracep->declBit(c+177,"if_w_valid", false,-1);
    tracep->declBit(c+177,"if_bresp", false,-1);
    tracep->declBit(c+177,"if_bvalid", false,-1);
    tracep->declBit(c+177,"if_bready", false,-1);
    tracep->pushNamePrefix("IF_Sram ");
    tracep->declBus(c+143,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+143,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBus(c+60,"inst_ar_addr", false,-1, 31,0);
    tracep->declBit(c+123,"if_ar_ready", false,-1);
    tracep->declBit(c+122,"if_ar_valid", false,-1);
    tracep->declBus(c+61,"current_inst", false,-1, 31,0);
    tracep->declBit(c+51,"if_r_ready", false,-1);
    tracep->declBit(c+50,"if_r_valid", false,-1);
    tracep->declBus(c+60,"inst_aw_addr", false,-1, 31,0);
    tracep->declBit(c+177,"if_aw_ready", false,-1);
    tracep->declBit(c+177,"if_aw_valid", false,-1);
    tracep->declBus(c+178,"if_wdata", false,-1, 31,0);
    tracep->declBit(c+177,"if_w_valid", false,-1);
    tracep->declBit(c+177,"if_w_ready", false,-1);
    tracep->declBit(c+177,"bready", false,-1);
    tracep->declBit(c+177,"bvalid", false,-1);
    tracep->declBit(c+177,"bresp", false,-1);
    tracep->declBus(c+169,"STATE_IF", false,-1, 1,0);
    tracep->declBus(c+170,"STATE_OUTPUT", false,-1, 1,0);
    tracep->declBus(c+124,"if_state", false,-1, 1,0);
    tracep->declBus(c+61,"fetch_dec_inst", false,-1, 31,0);
    tracep->declBit(c+179,"inst", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Load_Store_Unit ");
    tracep->declBus(c+143,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+143,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBus(c+130,"src1", false,-1, 31,0);
    tracep->declBus(c+131,"src2", false,-1, 31,0);
    tracep->declBus(c+67,"imm", false,-1, 31,0);
    tracep->declBus(c+62,"fun", false,-1, 2,0);
    tracep->declBus(c+63,"opcode", false,-1, 6,0);
    tracep->declBit(c+72,"mem_ar_valid", false,-1);
    tracep->declBit(c+71,"mem_ar_ready", false,-1);
    tracep->declBus(c+12,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+55,"exc_wb_ready", false,-1);
    tracep->declBit(c+70,"mem_w_valid", false,-1);
    tracep->declBit(c+71,"mem_w_ready", false,-1);
    tracep->declBit(c+57,"mem_bresp", false,-1);
    tracep->declBus(c+152,"TYPE_I0", false,-1, 6,0);
    tracep->declBit(c+180,"bready", false,-1);
    tracep->declBus(c+142,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+125,"wmask", false,-1, 7,0);
    tracep->declBit(c+126,"mem_r_ready", false,-1);
    tracep->declBit(c+127,"mem_r_valid", false,-1);
    tracep->declBus(c+131,"mem_wdata", false,-1, 31,0);
    tracep->declBit(c+17,"bvalid", false,-1);
    tracep->pushNamePrefix("mem_sram ");
    tracep->declBus(c+143,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+143,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBus(c+125,"wmask", false,-1, 7,0);
    tracep->declBus(c+142,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+72,"mem_ar_valid", false,-1);
    tracep->declBit(c+71,"mem_ar_ready", false,-1);
    tracep->declBus(c+12,"mem_rdata", false,-1, 31,0);
    tracep->declBit(c+126,"mem_r_ready", false,-1);
    tracep->declBit(c+127,"mem_r_valid", false,-1);
    tracep->declBus(c+131,"mem_wdata", false,-1, 31,0);
    tracep->declBit(c+70,"mem_w_valid", false,-1);
    tracep->declBit(c+71,"mem_w_ready", false,-1);
    tracep->declBit(c+57,"mem_bresp", false,-1);
    tracep->declBit(c+17,"bvalid", false,-1);
    tracep->declBit(c+180,"bready", false,-1);
    tracep->declBus(c+169,"STATE_MEM_ACCESS", false,-1, 1,0);
    tracep->declBus(c+170,"STATE_R_OUTPUT", false,-1, 1,0);
    tracep->declBus(c+171,"STATE_STORE", false,-1, 1,0);
    tracep->declBus(c+128,"mem_state", false,-1, 1,0);
    tracep->declBus(c+12,"r_data", false,-1, 31,0);
    tracep->declBit(c+17,"r_bresp", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Write_Back_Unit ");
    tracep->declBus(c+145,"REG_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+143,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+138,"clk", false,-1);
    tracep->declBit(c+139,"rst", false,-1);
    tracep->declBit(c+69,"wen", false,-1);
    tracep->declBus(c+11,"w_data", false,-1, 31,0);
    tracep->declBus(c+64,"w_addr", false,-1, 4,0);
    tracep->declBus(c+65,"r_addr1", false,-1, 4,0);
    tracep->declBus(c+66,"r_addr2", false,-1, 4,0);
    tracep->declBus(c+130,"r_data1", false,-1, 31,0);
    tracep->declBus(c+131,"r_data2", false,-1, 31,0);
    tracep->declBit(c+54,"exc_wb_valid", false,-1);
    tracep->declBit(c+55,"exc_wb_ready", false,-1);
    tracep->declBit(c+56,"wb_bresp", false,-1);
    tracep->declBus(c+140,"exit_code", false,-1, 31,0);
    tracep->declBus(c+169,"STATE_REC", false,-1, 1,0);
    tracep->declBus(c+170,"STATE_WB", false,-1, 1,0);
    tracep->declBus(c+129,"wb_state", false,-1, 1,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+18+i*1,"rf", true,(i+0), 31,0);
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
    bufp->fullCData(oldp+1,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[8]),7);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__dnpc_reg),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__w_data_reg),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__r_data),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_status),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_cause),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_tvec),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_epc),32);
    bufp->fullBit(oldp+17,(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__r_bresp));
    bufp->fullIData(oldp+18,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[0]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[1]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[2]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[3]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[4]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[5]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[6]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[7]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[8]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[9]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[10]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[11]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[12]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[13]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[14]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[15]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[16]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[17]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[18]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[19]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[20]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[21]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[22]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[23]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[24]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[25]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[26]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[27]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[28]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[29]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[30]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[31]),32);
    bufp->fullBit(oldp+50,((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__if_state))));
    bufp->fullBit(oldp+51,((1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__id_state))));
    bufp->fullBit(oldp+52,((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__id_state))));
    bufp->fullBit(oldp+53,((1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state))));
    bufp->fullBit(oldp+54,((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state))));
    bufp->fullBit(oldp+55,((2U != (IData)(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__wb_state))));
    bufp->fullBit(oldp+56,((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__wb_state))));
    bufp->fullBit(oldp+57,((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__mem_state))));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_24110005_NPC__DOT__bresp));
    bufp->fullBit(oldp+59,(((0x73U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                            & ((1U == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm) 
                               & (0U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_fun))))));
    bufp->fullIData(oldp+60,(vlSelf->ysyx_24110005_NPC__DOT__pc),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst),32);
    bufp->fullCData(oldp+62,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_fun),3);
    bufp->fullCData(oldp+63,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode),7);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_waddr),5);
    bufp->fullCData(oldp+65,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+66,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm),32);
    bufp->fullBit(oldp+68,(((0x33U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                            | ((0x37U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                               | ((0x17U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                  | ((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                     | ((0x13U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                        | ((0x67U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                           | (((0x6fU 
                                                == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                               | (0x73U 
                                                  == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode))) 
                                              & (0U 
                                                 != (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_waddr)))))))))));
    bufp->fullBit(oldp+69,(((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state)) 
                            & (((0x33U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                | ((0x37U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                   | ((0x17U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                      | ((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                         | ((0x13U 
                                             == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                            | ((0x67U 
                                                == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                               | (((0x6fU 
                                                    == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                                   | (0x73U 
                                                      == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode))) 
                                                  & (0U 
                                                     != (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_waddr))))))))) 
                               & ((0U != (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_waddr)) 
                                  | ((0U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_waddr)) 
                                     & (0U != vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm)))))));
    bufp->fullBit(oldp+70,((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state))));
    bufp->fullBit(oldp+71,((1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__mem_state))));
    bufp->fullBit(oldp+72,((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__id_state))));
    bufp->fullIData(oldp+73,(((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc)),32);
    bufp->fullCData(oldp+74,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state),2);
    bufp->fullBit(oldp+75,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__csr_wen));
    bufp->fullCData(oldp+76,((7U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+77,((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst)),7);
    bufp->fullCData(oldp+78,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm),32);
    bufp->fullBit(oldp+80,((3U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst))));
    bufp->fullCData(oldp+81,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__id_state),2);
    bufp->fullWData(oldp+82,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut),351);
    bufp->fullQData(oldp+93,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+95,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+97,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+99,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+101,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+103,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+105,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+107,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullQData(oldp+109,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[8]),39);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+121,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__if_ar_valid));
    bufp->fullBit(oldp+123,((1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__if_state))));
    bufp->fullCData(oldp+124,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__if_state),2);
    bufp->fullCData(oldp+125,(((1U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_fun))
                                ? 3U : ((2U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_fun))
                                         ? 0xfU : 1U))),8);
    bufp->fullBit(oldp+126,(((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                             & (2U != (IData)(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__wb_state)))));
    bufp->fullBit(oldp+127,((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__mem_state))));
    bufp->fullCData(oldp+128,(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__mem_state),2);
    bufp->fullCData(oldp+129,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__wb_state),2);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_24110005_NPC__DOT__src1),32);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_24110005_NPC__DOT__src2),32);
    bufp->fullQData(oldp+132,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__Vstatic__mul_result),64);
    bufp->fullQData(oldp+134,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__Vstatic__mul_result),64);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mulh),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mul_unsigned),32);
    bufp->fullBit(oldp+138,(vlSelf->clk));
    bufp->fullBit(oldp+139,(vlSelf->rst));
    bufp->fullIData(oldp+140,(vlSelf->exit_code),32);
    bufp->fullIData(oldp+141,(((0x300U == (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm))
                                ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_status
                                : ((0x305U == (0xfffU 
                                               & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm))
                                    ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_tvec
                                    : ((0x341U == (0xfffU 
                                                   & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm))
                                        ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_epc
                                        : ((0x342U 
                                            == (0xfffU 
                                                & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm))
                                            ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_cause
                                            : 0xffffffffU))))),32);
    bufp->fullIData(oldp+142,((vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm 
                               + vlSelf->ysyx_24110005_NPC__DOT__src1)),32);
    bufp->fullIData(oldp+143,(0x20U),32);
    bufp->fullIData(oldp+144,(7U),32);
    bufp->fullIData(oldp+145,(5U),32);
    bufp->fullIData(oldp+146,(3U),32);
    bufp->fullIData(oldp+147,(0x80000000U),32);
    bufp->fullCData(oldp+148,(0x23U),7);
    bufp->fullBit(oldp+149,(vlSelf->ysyx_24110005_NPC__DOT__if_ar_valid));
    bufp->fullBit(oldp+150,(vlSelf->ysyx_24110005_NPC__DOT__mem_wen));
    bufp->fullIData(oldp+151,(vlSelf->ysyx_24110005_NPC__DOT__mem_wdata),32);
    bufp->fullCData(oldp+152,(3U),7);
    bufp->fullCData(oldp+153,(0x13U),7);
    bufp->fullCData(oldp+154,(0x67U),7);
    bufp->fullCData(oldp+155,(0x73U),7);
    bufp->fullCData(oldp+156,(0x63U),7);
    bufp->fullCData(oldp+157,(0x6fU),7);
    bufp->fullCData(oldp+158,(0x37U),7);
    bufp->fullCData(oldp+159,(0x17U),7);
    bufp->fullCData(oldp+160,(0x33U),7);
    bufp->fullIData(oldp+161,(1U),32);
    bufp->fullSData(oldp+162,(0x300U),12);
    bufp->fullSData(oldp+163,(0x305U),12);
    bufp->fullSData(oldp+164,(0x341U),12);
    bufp->fullSData(oldp+165,(0x342U),12);
    bufp->fullSData(oldp+166,(0U),12);
    bufp->fullSData(oldp+167,(0x302U),12);
    bufp->fullIData(oldp+168,(0xbU),32);
    bufp->fullCData(oldp+169,(1U),2);
    bufp->fullCData(oldp+170,(2U),2);
    bufp->fullCData(oldp+171,(3U),2);
    bufp->fullIData(oldp+172,(9U),32);
    bufp->fullIData(oldp+173,(0U),32);
    bufp->fullIData(oldp+174,(1U),32);
    bufp->fullIData(oldp+175,(0x27U),32);
    bufp->fullIData(oldp+176,(9U),32);
    bufp->fullBit(oldp+177,(0U));
    bufp->fullIData(oldp+178,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__if_wdata),32);
    bufp->fullBit(oldp+179,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__inst));
    bufp->fullBit(oldp+180,(1U));
}
