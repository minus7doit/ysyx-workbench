// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24110005_NPC.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24110005_NPC___024root.h"

VL_ATTR_COLD void Vysyx_24110005_NPC___024root___eval_static(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_24110005_NPC___024root___eval_initial__TOP(Vysyx_24110005_NPC___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24110005_NPC___024root___eval_initial(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval_initial\n"); );
    // Body
    Vysyx_24110005_NPC___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vysyx_24110005_NPC___024root___eval_initial__TOP(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[0U] = 0x33U;
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[1U] = 0x23U;
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[2U] = 0x6fU;
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[3U] = 0x63U;
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[4U] = 0x73U;
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[5U] = 0x13U;
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[6U] = 3U;
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[7U] = 0x17U;
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[8U] = 0x37U;
    vlSelf->ysyx_24110005_NPC__DOT__pc = 0x80000000U;
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_status = 0x1800U;
}

VL_ATTR_COLD void Vysyx_24110005_NPC___024root___eval_final(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_24110005_NPC___024root___eval_triggers__stl(Vysyx_24110005_NPC___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24110005_NPC___024root___dump_triggers__stl(Vysyx_24110005_NPC___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_24110005_NPC___024root___eval_stl(Vysyx_24110005_NPC___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24110005_NPC___024root___eval_settle(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_24110005_NPC___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24110005_NPC___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005_NPC.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_24110005_NPC___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24110005_NPC___024root___dump_triggers__stl(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24110005_NPC___024root___stl_sequent__TOP__0(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__2__Vfuncout;
    __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__2__a;
    __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__2__a = 0;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__2__b;
    __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__2__b = 0;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__3__Vfuncout;
    __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__3__a;
    __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__3__a = 0;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__3__b;
    __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__3__b = 0;
    // Body
    vlSelf->exit_code = vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf
        [0xaU];
    vlSelf->ysyx_24110005_NPC__DOT__exc_wb_ready = 
        (2U != (IData)(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__wb_state));
    vlSelf->ysyx_24110005_NPC__DOT__exc_wb_valid = 
        (2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state));
    vlSelf->ysyx_24110005_NPC__DOT__dec_exc_ready = 
        (1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[0U] 
        = (IData)((0x3300000000ULL | (((QData)((IData)(
                                                       (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                        >> 0x19U))) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                            >> 7U)))) 
                                        << 0x27U) | (QData)((IData)(
                                                                    (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                                     >> 0x19U)))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[1U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0x13U) | (IData)(
                                                        ((0x3300000000ULL 
                                                          | (((QData)((IData)(
                                                                              (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                                               >> 0x19U))) 
                                                              << 0x2cU) 
                                                             | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                                                >> 7U)))) 
                                                                 << 0x27U) 
                                                                | (QData)((IData)(
                                                                                (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                                                >> 0x19U)))))) 
                                                         >> 0x20U)));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[2U] 
        = (0x1180U | ((0xfc000000U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                      << 0xeU)) | (
                                                   (0x2000000U 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                       << 5U)) 
                                                   | ((0x1ff8000U 
                                                       & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                          >> 6U)) 
                                                      | (0x7fU 
                                                         & ((- (IData)(
                                                                       (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                                        >> 0x1fU))) 
                                                            >> 0xdU))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[3U] 
        = (0x1bc000U | ((0xfc000000U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                        << 1U)) | (
                                                   (0x3c00000U 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                       << 0xeU)) 
                                                   | ((0x3ff8U 
                                                       & ((- (IData)(
                                                                     (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                                      >> 0x1fU))) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                             >> 0x1dU)) 
                                                         | (3U 
                                                            & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                               >> 0x12U)))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[4U] 
        = (0xc600000U | ((0xf0000000U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                         << 8U)) | 
                         ((0x1ffffcU & ((- (IData)(
                                                   (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                    >> 0x1fU))) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                       >> 0x1eU)) 
                                                   | (1U 
                                                      & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                         >> 7U))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[5U] 
        = (0x30000000U | (0xfffffffU & ((0xfffff00U 
                                         & ((- (IData)(
                                                       (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                        >> 0x1fU))) 
                                            << 8U)) 
                                        | (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                           >> 0x18U))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[6U] 
        = (7U | (0xfffffff8U & (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                             >> 0x1fU))) 
                                 << 0xfU) | (0x7ff8U 
                                             & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                >> 0x11U)))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[7U] 
        = (0x98U | ((0xfffffc00U & (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                 >> 0x1fU))) 
                                     << 0x16U) | (0x3ffc00U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                     >> 0xaU)))) 
                    | (7U & ((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                         >> 0x1fU))) 
                             >> 0x11U))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[8U] 
        = (0xc00U | ((0xe0000000U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                     << 0x11U)) | (0x3ffU 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                                  >> 0x1fU))) 
                                                      >> 0xaU))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[9U] 
        = (0x2e0000U | (0x1fffffffU & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                       >> 0xfU)));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[0xaU] 
        = (0x37000000U | (0xfffff0U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                       >> 8U)));
    vlSelf->ysyx_24110005_NPC__DOT__mem_w_ready = (1U 
                                                   == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__mem_state));
    vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_r_valid 
        = (2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__mem_state));
    vlSelf->ysyx_24110005_NPC__DOT__fetch_dec_ready 
        = (1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__id_state));
    vlSelf->ysyx_24110005_NPC__DOT__mem_ar_valid = 
        (3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__id_state));
    vlSelf->ysyx_24110005_NPC__DOT__dec_exc_valid = 
        (2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__id_state));
    vlSelf->ysyx_24110005_NPC__DOT__fetch_dec_valid 
        = (2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__if_state));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__if_ar_ready 
        = (1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__if_state));
    vlSelf->ysyx_24110005_NPC__DOT__bresp = ((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__mem_state)) 
                                             | (2U 
                                                == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__wb_state)));
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__csr_wen 
        = ((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state)) 
           & ((0x73U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode)) 
              & ((1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_fun)) 
                 | ((5U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_fun)) 
                    | ((0U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_fun)) 
                       & (0U == (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm)))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x3300000000ULL | (QData)((IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                              >> 0x19U))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0xfe0U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                       >> 7U)))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | ((0x100000U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                             >> 0x14U)))))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                           >> 0x1fU))) 
                                               << 0xdU) 
                                              | ((0x1000U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                             >> 7U)))))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[8U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
           >> 0x19U);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                      >> 7U))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0x15U) | ((0x100000U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                             >> 0x14U))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0xdU) | ((0x1000U 
                                                 & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                            >> 7U))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[6U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[8U] 
        = (0xfffff000U & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst);
    vlSelf->ysyx_24110005_NPC__DOT__src1 = ((0U != 
                                             (0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                 >> 0xfU)))
                                             ? vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                 >> 0xfU))]
                                             : 0U);
    vlSelf->ysyx_24110005_NPC__DOT__src2 = ((0U != 
                                             (0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                 >> 0x14U)))
                                             ? vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                 >> 0x14U))]
                                             : 0U);
    vlSelf->__VdfgTmp_hca3e32e7__0 = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst 
                                                   >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
                       == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
           == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out
            : 0U);
    __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__2__b 
        = vlSelf->ysyx_24110005_NPC__DOT__src2;
    __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__2__a 
        = vlSelf->ysyx_24110005_NPC__DOT__src1;
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__Vstatic__mul_result 
        = ((0x100000000ULL | (QData)((IData)(__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__2__a))) 
           * (0x100000000ULL | (QData)((IData)(__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__2__b))));
    __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__2__Vfuncout 
        = (IData)((vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__Vstatic__mul_result 
                   >> 0x20U));
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mulh 
        = __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__2__Vfuncout;
    __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__3__b 
        = vlSelf->ysyx_24110005_NPC__DOT__src2;
    __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__3__a 
        = vlSelf->ysyx_24110005_NPC__DOT__src1;
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__Vstatic__mul_result 
        = ((QData)((IData)(__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__3__a)) 
           * (QData)((IData)(__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__3__b)));
    __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__3__Vfuncout 
        = (IData)((vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__Vstatic__mul_result 
                   >> 0x20U));
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mul_unsigned 
        = __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__3__Vfuncout;
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x7300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hca3e32e7__0)));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[5U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hca3e32e7__0)));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[6U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_hca3e32e7__0)));
}

VL_ATTR_COLD void Vysyx_24110005_NPC___024root___eval_stl(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_24110005_NPC___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24110005_NPC___024root___dump_triggers__act(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24110005_NPC___024root___dump_triggers__nba(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24110005_NPC___024root___ctor_var_reset(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->exit_code = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__if_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__fetch_dec_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__fetch_dec_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__dec_exc_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__dec_exc_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__exc_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__exc_wb_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__bresp = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__mem_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__mem_w_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__mem_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__if_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__if_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__if_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__if_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__fetch_dec_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__IF_Sram__DOT__inst = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_fun = VL_RAND_RESET_I(3);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_opcode = VL_RAND_RESET_I(7);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__r_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__id_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(351, vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__Vstatic__mul_result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__Vstatic__mul_result = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__ex_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__dnpc_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mulh = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mul_unsigned = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__w_data_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__csr_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_status = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_cause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_tvec = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_epc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_r_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__r_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__Load_Store_Unit__DOT__mem_sram__DOT__r_bresp = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__wb_state = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdfgTmp_hca3e32e7__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
