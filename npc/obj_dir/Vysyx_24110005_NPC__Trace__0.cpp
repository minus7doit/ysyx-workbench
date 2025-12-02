// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24110005_NPC__Syms.h"


void Vysyx_24110005_NPC___024root__trace_chg_sub_0(Vysyx_24110005_NPC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_24110005_NPC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_24110005_NPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24110005_NPC___024root*>(voidSelf);
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_24110005_NPC___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_24110005_NPC___024root__trace_chg_sub_0(Vysyx_24110005_NPC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[8]),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+9,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__dnpc_reg),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__w_data_reg),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__r_data),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_status),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_cause),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_tvec),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_epc),32);
        bufp->chgBit(oldp+16,(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__r_bresp));
        bufp->chgIData(oldp+17,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[0]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[1]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[2]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[3]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[4]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[5]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[6]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[7]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[8]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[9]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[10]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[11]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[12]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[13]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[14]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[15]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[16]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[17]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[18]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[19]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[20]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[21]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[22]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[23]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[24]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[25]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[26]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[27]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[28]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[29]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[30]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+49,((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__if_state))));
        bufp->chgBit(oldp+50,((1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__id_state))));
        bufp->chgBit(oldp+51,((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__id_state))));
        bufp->chgBit(oldp+52,((1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state))));
        bufp->chgBit(oldp+53,((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state))));
        bufp->chgBit(oldp+54,((2U != (IData)(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__wb_state))));
        bufp->chgBit(oldp+55,((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__wb_state))));
        bufp->chgBit(oldp+56,((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__mem_state))));
        bufp->chgBit(oldp+57,(vlSelf->ysyx_24110005_NPC__DOT__bresp));
        bufp->chgBit(oldp+58,(((0x73U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                               & ((1U == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm) 
                                  & (0U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_fun))))));
        bufp->chgIData(oldp+59,(vlSelf->ysyx_24110005_NPC__DOT__pc),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst),32);
        bufp->chgCData(oldp+61,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_fun),3);
        bufp->chgCData(oldp+62,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode),7);
        bufp->chgCData(oldp+63,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_waddr),5);
        bufp->chgCData(oldp+64,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+65,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm),32);
        bufp->chgBit(oldp+67,(((0x33U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                               | ((0x37U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                  | ((0x17U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                     | ((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                        | ((0x13U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                           | ((0x67U 
                                               == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                              | (((0x6fU 
                                                   == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                                  | (0x73U 
                                                     == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode))) 
                                                 & (0U 
                                                    != (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_waddr)))))))))));
        bufp->chgBit(oldp+68,(((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state)) 
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
        bufp->chgBit(oldp+69,((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state))));
        bufp->chgBit(oldp+70,((1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__mem_state))));
        bufp->chgBit(oldp+71,((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__id_state))));
        bufp->chgIData(oldp+72,(((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc)),32);
        bufp->chgCData(oldp+73,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state),2);
        bufp->chgBit(oldp+74,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__csr_wen));
        bufp->chgCData(oldp+75,((7U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+76,((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst)),7);
        bufp->chgCData(oldp+77,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                          >> 7U))),5);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm),32);
        bufp->chgBit(oldp+79,((3U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst))));
        bufp->chgCData(oldp+80,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__id_state),2);
        bufp->chgWData(oldp+81,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut),351);
        bufp->chgQData(oldp+92,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+94,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+96,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+98,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+100,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+102,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+104,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+106,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgQData(oldp+108,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[8]),39);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+116,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+117,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+120,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+121,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__if_ar_valid));
        bufp->chgBit(oldp+122,((1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__if_state))));
        bufp->chgCData(oldp+123,(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__if_state),2);
        bufp->chgCData(oldp+124,(((1U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_fun))
                                   ? 3U : ((2U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_fun))
                                            ? 0xfU : 1U))),8);
        bufp->chgBit(oldp+125,(((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
                                & (2U != (IData)(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__wb_state)))));
        bufp->chgBit(oldp+126,((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__mem_state))));
        bufp->chgCData(oldp+127,(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__mem_state),2);
        bufp->chgCData(oldp+128,(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__wb_state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+129,(vlSelf->ysyx_24110005_NPC__DOT__src1),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_24110005_NPC__DOT__src2),32);
        bufp->chgQData(oldp+131,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__Vstatic__mul_result),64);
        bufp->chgQData(oldp+133,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__Vstatic__mul_result),64);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mulh),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mul_unsigned),32);
    }
    bufp->chgBit(oldp+137,(vlSelf->clk));
    bufp->chgBit(oldp+138,(vlSelf->rst));
    bufp->chgIData(oldp+139,(vlSelf->exit_code),32);
    bufp->chgIData(oldp+140,(((0x300U == (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm))
                               ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_status
                               : ((0x305U == (0xfffU 
                                              & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm))
                                   ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_tvec
                                   : ((0x341U == (0xfffU 
                                                  & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm))
                                       ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_epc
                                       : ((0x342U == 
                                           (0xfffU 
                                            & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm))
                                           ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_cause
                                           : 0xffffffffU))))),32);
    bufp->chgIData(oldp+141,((vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm 
                              + vlSelf->ysyx_24110005_NPC__DOT__src1)),32);
}

void Vysyx_24110005_NPC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root__trace_cleanup\n"); );
    // Init
    Vysyx_24110005_NPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24110005_NPC___024root*>(voidSelf);
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
