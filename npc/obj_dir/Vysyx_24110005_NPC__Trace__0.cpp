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
        bufp->chgCData(oldp+0,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[8]),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+9,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_status),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_cause),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_tvec),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_epc),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[0]),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[1]),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[2]),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[3]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[4]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[5]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[6]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[7]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[8]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[9]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[10]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[11]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[12]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[13]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[14]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[15]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[16]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[17]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[18]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[19]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[20]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[21]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[22]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[23]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[24]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[25]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[26]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[27]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[28]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[29]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[30]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+45,((7U & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+46,((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)),7);
        bufp->chgCData(oldp+47,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+48,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+49,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_24110005_NPC__DOT__imm),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_24110005_NPC__DOT__current_inst),32);
        bufp->chgBit(oldp+52,((IData)(((0x73U == (0x707fU 
                                                  & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                       & (1U == vlSelf->ysyx_24110005_NPC__DOT__imm)))));
        bufp->chgIData(oldp+53,(vlSelf->ysyx_24110005_NPC__DOT__pc),32);
        bufp->chgBit(oldp+54,((((0x33U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                | ((0x37U == (0x7fU 
                                              & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                   | ((0x17U == (0x7fU 
                                                 & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                      | ((3U == (0x7fU 
                                                 & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                         | ((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                            | ((0x67U 
                                                == 
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
                                                         >> 7U)))))))))) 
                               & ((0U != (0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                   >> 7U))) 
                                  | (IData)(((0U == 
                                              (0xf80U 
                                               & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                             & (0U 
                                                != vlSelf->ysyx_24110005_NPC__DOT__imm)))))));
        bufp->chgBit(oldp+55,(((0x33U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                               | ((0x37U == (0x7fU 
                                             & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                  | ((0x17U == (0x7fU 
                                                & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                     | ((3U == (0x7fU 
                                                & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                        | ((0x13U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
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
                                                        >> 7U))))))))))));
        bufp->chgIData(oldp+56,(((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc)),32);
        bufp->chgBit(oldp+57,(((3U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                               | (0x23U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))));
        bufp->chgBit(oldp+58,((0x23U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst))));
        bufp->chgBit(oldp+59,((3U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst))));
        bufp->chgCData(oldp+60,(((0x1000U & vlSelf->ysyx_24110005_NPC__DOT__current_inst)
                                  ? 3U : ((0x2000U 
                                           & vlSelf->ysyx_24110005_NPC__DOT__current_inst)
                                           ? 0xfU : 1U))),8);
        bufp->chgBit(oldp+61,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__csr_wen));
        bufp->chgWData(oldp+62,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut),351);
        bufp->chgQData(oldp+73,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+75,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+77,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+79,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+81,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+83,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+85,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+87,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgQData(oldp+89,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[8]),39);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+101,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+102,(vlSelf->ysyx_24110005_NPC__DOT__dnpc),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_24110005_NPC__DOT__src1),32);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_wdata),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_addr),32);
        bufp->chgQData(oldp+106,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__signed_mulh__Vstatic__mul_result),64);
        bufp->chgQData(oldp+108,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__unsigned_mulh__Vstatic__mul_result),64);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mulh),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mul_unsigned),32);
    }
    bufp->chgBit(oldp+112,(vlSelf->clk));
    bufp->chgBit(oldp+113,(vlSelf->rst));
    bufp->chgIData(oldp+114,(vlSelf->exit_code),32);
    bufp->chgIData(oldp+115,(vlSelf->ysyx_24110005_NPC__DOT__reg_wdata),32);
    bufp->chgIData(oldp+116,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_rdata),32);
    bufp->chgIData(oldp+117,(((0x300U == (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__imm))
                               ? vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_status
                               : ((0x305U == (0xfffU 
                                              & vlSelf->ysyx_24110005_NPC__DOT__imm))
                                   ? vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_tvec
                                   : ((0x341U == (0xfffU 
                                                  & vlSelf->ysyx_24110005_NPC__DOT__imm))
                                       ? vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_epc
                                       : ((0x342U == 
                                           (0xfffU 
                                            & vlSelf->ysyx_24110005_NPC__DOT__imm))
                                           ? vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__m_cause
                                           : 0xffffffffU))))),32);
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
