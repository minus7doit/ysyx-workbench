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
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+8,((7U & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                      >> 0xcU))),3);
        bufp->chgCData(oldp+9,((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)),7);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_24110005_NPC__DOT__imm),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_24110005_NPC__DOT__current_inst),32);
        bufp->chgBit(oldp+15,(((0x73U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel)) 
                               & (1U == vlSelf->ysyx_24110005_NPC__DOT__imm))));
        bufp->chgIData(oldp+16,(vlSelf->ysyx_24110005_NPC__DOT__pc),32);
        bufp->chgBit(oldp+17,((((0x33U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
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
                                               | (0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))))))) 
                               & ((0U != (0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                   >> 7U))) 
                                  | (IData)(((0U == 
                                              (0xf80U 
                                               & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                             & (0U 
                                                != vlSelf->ysyx_24110005_NPC__DOT__imm)))))));
        bufp->chgBit(oldp+18,(((0x33U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
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
                                              | (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_24110005_NPC__DOT__current_inst))))))))));
        bufp->chgBit(oldp+19,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_visit_valid));
        bufp->chgIData(oldp+20,(((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc)),32);
        bufp->chgSData(oldp+21,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel),10);
        bufp->chgBit(oldp+22,((0x23U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst))));
        bufp->chgCData(oldp+23,(((0x23U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                                  ? 1U : ((0xa3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                                           ? 3U : (
                                                   (0x123U 
                                                    == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                                                    ? 0xfU
                                                    : 0U)))),8);
        bufp->chgWData(oldp+24,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut),312);
        bufp->chgQData(oldp+34,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+36,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+38,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+40,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+42,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+44,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+46,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+48,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+59,(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+60,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[0]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[1]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[2]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[3]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[4]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[5]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[6]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[7]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[8]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[9]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[10]),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[11]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[12]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[13]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[14]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[15]),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[16]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[17]),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[18]),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[19]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[20]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[21]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[22]),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[23]),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[24]),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[25]),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[26]),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[27]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[28]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[29]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[30]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+92,(vlSelf->clk));
    bufp->chgBit(oldp+93,(vlSelf->rst));
    bufp->chgIData(oldp+94,(vlSelf->exit_code),32);
    bufp->chgIData(oldp+95,((((0x63U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
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
    bufp->chgIData(oldp+96,(vlSelf->ysyx_24110005_NPC__DOT__src1),32);
    bufp->chgIData(oldp+97,(((0U != (0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                              >> 0x14U)))
                              ? vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf
                             [(0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                        >> 0x14U))]
                              : 0U)),32);
    bufp->chgIData(oldp+98,(vlSelf->ysyx_24110005_NPC__DOT__reg_wdata),32);
    bufp->chgIData(oldp+99,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_addr),32);
    bufp->chgIData(oldp+100,(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_rdata),32);
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
}
