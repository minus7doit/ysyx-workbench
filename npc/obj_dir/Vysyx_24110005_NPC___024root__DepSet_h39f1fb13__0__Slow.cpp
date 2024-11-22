// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24110005_NPC.h for the primary calling header

#include "verilated.h"

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
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_24110005_NPC___024root___eval_initial__TOP(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[0U] = 0x23U;
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[1U] = 0x6fU;
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[2U] = 0x63U;
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[3U] = 0x13U;
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[5U] = 0x17U;
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[6U] = 0x37U;
    vlSelf->ysyx_24110005_NPC__DOT__inst_mem[0U] = 0x500093U;
    vlSelf->ysyx_24110005_NPC__DOT__inst_mem[1U] = 0xa08113U;
    vlSelf->ysyx_24110005_NPC__DOT__inst_mem[2U] = 0xffd10193U;
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
                VL_FATAL_MT("vsrc/ysyx_24110005_NPC.v", 1, "", "Settle region did not converge.");
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
    IData/*31:0*/ __VdfgTmp_h31b0dff8__0;
    __VdfgTmp_h31b0dff8__0 = 0;
    IData/*31:0*/ __VdfgTmp_h92c42027__0;
    __VdfgTmp_h92c42027__0 = 0;
    IData/*30:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__data_abs;
    __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__data_abs = 0;
    CData/*0:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__data_sign;
    __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__data_sign = 0;
    IData/*30:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__data_abs;
    __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__data_abs = 0;
    CData/*0:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__data_sign;
    __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__data_sign = 0;
    IData/*30:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__data_abs;
    __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__data_abs = 0;
    CData/*0:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__data_sign;
    __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__data_sign = 0;
    // Body
    vlSelf->ysyx_24110005_NPC__DOT__inst = vlSelf->ysyx_24110005_NPC__DOT__inst_mem
        [(0x3ffU & (vlSelf->ysyx_24110005_NPC__DOT__pc 
                    >> 2U))];
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | ((0x100000U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->ysyx_24110005_NPC__DOT__inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                             >> 0x14U)))))))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                           >> 0x1fU))) 
                                               << 0xdU) 
                                              | ((0x1000U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                             >> 7U)))))))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[5U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_24110005_NPC__DOT__inst))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[6U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_24110005_NPC__DOT__inst))));
    vlSelf->ysyx_24110005_NPC__DOT__src2 = ((0U != 
                                             (0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                 >> 0x14U)))
                                             ? vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                 >> 0x14U))]
                                             : 0U);
    __VdfgTmp_h31b0dff8__0 = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                 >> 7U))));
    vlSelf->ysyx_24110005_NPC__DOT__src1 = ((0U != 
                                             (0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                 >> 0xfU)))
                                             ? vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                 >> 0xfU))]
                                             : 0U);
    __VdfgTmp_h92c42027__0 = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                           >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__inst 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                      >> 7U))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__inst 
                        >> 0x1fU))) << 0x15U) | ((0x100000U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->ysyx_24110005_NPC__DOT__inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                             >> 0x14U))))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__inst 
                        >> 0x1fU))) << 0xdU) | ((0x1000U 
                                                 & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                            >> 7U))))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[5U] 
        = (0xfffff000U & vlSelf->ysyx_24110005_NPC__DOT__inst);
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->ysyx_24110005_NPC__DOT__inst);
    __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__data_sign 
        = (vlSelf->ysyx_24110005_NPC__DOT__src2 >> 0x1fU);
    __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__data_abs 
        = (0x7fffffffU & vlSelf->ysyx_24110005_NPC__DOT__src2);
    if ((0U == __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__data_abs)) {
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__Vfuncout = 0U;
    } else {
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__Vfuncout 
            = ((0x7fffffffU & vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__Vfuncout) 
               | ((IData)(__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__data_sign) 
                  << 0x1fU));
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__Vfuncout 
            = ((0x80000000U & vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__Vfuncout) 
               | (0x7fffffffU & ((IData)(__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__data_sign)
                                  ? ((IData)(0x80000000U) 
                                     - __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__data_abs)
                                  : __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__data_abs)));
    }
    vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__src2_comp 
        = vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__Vfuncout;
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[0U] 
        = (IData)((0x2300000000ULL | (((QData)((IData)(
                                                       (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                        >> 0x1fU))) 
                                       << 0x3bU) | 
                                      (((QData)((IData)(
                                                        (0xffU 
                                                         & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                            >> 0xcU)))) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                             >> 0x14U)))) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            (0x3ffU 
                                                             & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                                >> 0x15U)))) 
                                            << 0x28U) 
                                           | (QData)((IData)(__VdfgTmp_h31b0dff8__0))))))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[1U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__inst 
                        >> 0x1fU))) << 0x1cU) | (IData)(
                                                        ((0x2300000000ULL 
                                                          | (((QData)((IData)(
                                                                              (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                                               >> 0x1fU))) 
                                                              << 0x3bU) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                                                >> 0xcU)))) 
                                                                 << 0x33U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                                                >> 0x14U)))) 
                                                                    << 0x32U) 
                                                                   | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                                                >> 0x15U)))) 
                                                                       << 0x28U) 
                                                                      | (QData)((IData)(__VdfgTmp_h31b0dff8__0))))))) 
                                                         >> 0x20U)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[2U] 
        = (0x3780U | (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__inst 
                                   >> 0x1fU))) << 0x1bU) 
                      | ((0x4000000U & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                        >> 5U)) | (
                                                   (0x2000000U 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                       << 0x12U)) 
                                                   | ((0x1f80000U 
                                                       & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                          >> 6U)) 
                                                      | ((0x78000U 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                             << 7U)) 
                                                         | (0x7fU 
                                                            & ((- (IData)(
                                                                          (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                                           >> 0x1fU))) 
                                                               >> 4U))))))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[3U] 
        = (0x18c000U | ((0xffe00000U & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                        << 1U)) | (0x3fffU 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                                  >> 0x1fU))) 
                                                      >> 5U))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[4U] 
        = (0x2600000U | ((0xf0000000U & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                         << 8U)) | 
                         (0x1fffffU & ((0x1ffffeU & 
                                        ((- (IData)(
                                                    (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                     >> 0x1fU))) 
                                         << 1U)) | 
                                       (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                        >> 0x1fU)))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[5U] 
        = (0x30000000U | (0xfffffffU & ((0xfffff00U 
                                         & ((- (IData)(
                                                       (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                        >> 0x1fU))) 
                                            << 8U)) 
                                        | (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                           >> 0x18U))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[6U] 
        = (0xffff8000U & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                          << 3U));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[7U] 
        = (0xb8U | ((0xffc00000U & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                    << 0xaU)) | (0x7fffU 
                                                 & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                    >> 0x1dU))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[8U] 
        = (0xdc00U | (0x3fffffU & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                   >> 0x16U)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x2300000000ULL | (QData)((IData)(__VdfgTmp_h31b0dff8__0)));
    __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__data_sign 
        = (vlSelf->ysyx_24110005_NPC__DOT__src1 >> 0x1fU);
    __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__data_abs 
        = (0x7fffffffU & vlSelf->ysyx_24110005_NPC__DOT__src1);
    if ((0U == __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__data_abs)) {
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__Vfuncout = 0U;
    } else {
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__Vfuncout 
            = ((0x7fffffffU & vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__Vfuncout) 
               | ((IData)(__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__data_sign) 
                  << 0x1fU));
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__Vfuncout 
            = ((0x80000000U & vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__Vfuncout) 
               | (0x7fffffffU & ((IData)(__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__data_sign)
                                  ? ((IData)(0x80000000U) 
                                     - __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__data_abs)
                                  : __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__data_abs)));
    }
    vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__src1_comp 
        = vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__Vfuncout;
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x1300000000ULL | (QData)((IData)(__VdfgTmp_h92c42027__0)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)(__VdfgTmp_h92c42027__0)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
                       == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
           == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_24110005_NPC__DOT__imm = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit)
                                            ? vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out
                                            : 0U);
    __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__data_sign 
        = (vlSelf->ysyx_24110005_NPC__DOT__imm >> 0x1fU);
    __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__data_abs 
        = (0x7fffffffU & vlSelf->ysyx_24110005_NPC__DOT__imm);
    if ((0U == __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__data_abs)) {
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__Vfuncout = 0U;
    } else {
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__Vfuncout 
            = ((0x7fffffffU & vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__Vfuncout) 
               | ((IData)(__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__data_sign) 
                  << 0x1fU));
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__Vfuncout 
            = ((0x80000000U & vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__Vfuncout) 
               | (0x7fffffffU & ((IData)(__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__data_sign)
                                  ? ((IData)(0x80000000U) 
                                     - __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__data_abs)
                                  : __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__data_abs)));
    }
    vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__imm_comp 
        = vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__Vfuncout;
    if ((0x13U == ((0x380U & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                              >> 5U)) | (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst)))) {
        vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__w_data_comp 
            = (vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__src1_comp 
               + vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__imm_comp);
        vlSelf->ysyx_24110005_NPC__DOT__w_data = ((vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__w_data_comp 
                                                   >> 0x1fU)
                                                   ? 
                                                  ((0x80000000U 
                                                    & vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__w_data_comp) 
                                                   | (0x7fffffffU 
                                                      & (~ 
                                                         (vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__w_data_comp 
                                                          - (IData)(1U)))))
                                                   : vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__w_data_comp);
    } else {
        vlSelf->ysyx_24110005_NPC__DOT__w_data = 0U;
    }
}

VL_ATTR_COLD void Vysyx_24110005_NPC___024root___eval_stl(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_24110005_NPC___024root___stl_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
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
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->ysyx_24110005_NPC__DOT__inst_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24110005_NPC__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__w_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(273, vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__src1_comp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__src2_comp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__imm_comp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__w_data_comp = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__0__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__1__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__2__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
