// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24110005_NPC.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24110005_NPC___024root.h"

void Vysyx_24110005_NPC___024root___eval_act(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval_act\n"); );
}

void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__alu_ins__DOT__finish_sim_TOP();

VL_INLINE_OPT void Vysyx_24110005_NPC___024root___nba_sequent__TOP__0(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0;
    __Vdlyvdim0__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0;
    __Vdlyvval__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0;
    __Vdlyvset__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0 = 0U;
    if ((1U & (~ ((0x23U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst)) 
                  | (0x63U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst)))))) {
        __Vdlyvval__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0 
            = vlSelf->ysyx_24110005_NPC__DOT__w_data;
        __Vdlyvset__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0 
            = (0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                        >> 7U));
    }
    vlSelf->ysyx_24110005_NPC__DOT__pc = ((IData)(vlSelf->rst)
                                           ? 0x80000000U
                                           : ((IData)(4U) 
                                              + vlSelf->ysyx_24110005_NPC__DOT__pc));
    if (__Vdlyvset__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0) {
        vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[__Vdlyvdim0__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0] 
            = __Vdlyvval__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0;
    }
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
        = (0x300000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->ysyx_24110005_NPC__DOT__inst))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[6U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_24110005_NPC__DOT__inst))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[7U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_24110005_NPC__DOT__inst))));
    vlSelf->ysyx_24110005_NPC__DOT____Vcellinp__alu_ins__sel 
        = ((0x380U & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                      >> 5U)) | (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst));
    vlSelf->ysyx_24110005_NPC__DOT__src2 = ((0U != 
                                             (0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                 >> 0x14U)))
                                             ? vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                 >> 0x14U))]
                                             : 0U);
    vlSelf->__VdfgTmp_h31b0dff8__0 = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0xfe0U 
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
    vlSelf->__VdfgTmp_h92c42027__0 = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__inst 
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
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->ysyx_24110005_NPC__DOT__inst);
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__data_sign 
        = (vlSelf->ysyx_24110005_NPC__DOT__src2 >> 0x1fU);
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__data_abs 
        = (0x7fffffffU & vlSelf->ysyx_24110005_NPC__DOT__src2);
    if ((0U == vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__data_abs)) {
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__Vfuncout = 0U;
    } else {
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__Vfuncout 
            = ((0x7fffffffU & vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__Vfuncout) 
               | ((IData)(vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__data_sign) 
                  << 0x1fU));
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__Vfuncout 
            = ((0x80000000U & vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__Vfuncout) 
               | (0x7fffffffU & ((IData)(vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__data_sign)
                                  ? ((IData)(1U) + 
                                     (~ vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__data_abs))
                                  : vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__data_abs)));
    }
    vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__src2_comp 
        = vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__Vfuncout;
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
                                           | (QData)((IData)(vlSelf->__VdfgTmp_h31b0dff8__0))))))));
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
                                                                      | (QData)((IData)(vlSelf->__VdfgTmp_h31b0dff8__0))))))) 
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
        = (0xe600000U | ((0xf0000000U & (vlSelf->ysyx_24110005_NPC__DOT__inst 
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
        = (1U | (0xffff8000U & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                << 3U)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[7U] 
        = (0x18U | ((0xffc00000U & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                    << 0xaU)) | (0x7fffU 
                                                 & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                                    >> 0x1dU))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[8U] 
        = (0x5c00U | ((0xe0000000U & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                      << 0x11U)) | 
                      (0x3fffffU & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                    >> 0x16U))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[9U] 
        = (0x6e0000U | (0x1fffffffU & (vlSelf->ysyx_24110005_NPC__DOT__inst 
                                       >> 0xfU)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h31b0dff8__0)));
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__data_sign 
        = (vlSelf->ysyx_24110005_NPC__DOT__src1 >> 0x1fU);
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__data_abs 
        = (0x7fffffffU & vlSelf->ysyx_24110005_NPC__DOT__src1);
    if ((0U == vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__data_abs)) {
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__Vfuncout = 0U;
    } else {
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__Vfuncout 
            = ((0x7fffffffU & vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__Vfuncout) 
               | ((IData)(vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__data_sign) 
                  << 0x1fU));
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__Vfuncout 
            = ((0x80000000U & vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__Vfuncout) 
               | (0x7fffffffU & ((IData)(vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__data_sign)
                                  ? ((IData)(1U) + 
                                     (~ vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__data_abs))
                                  : vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__data_abs)));
    }
    vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__src1_comp 
        = vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__Vfuncout;
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x7300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h92c42027__0)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h92c42027__0)));
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
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_24110005_NPC__DOT__imm = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit)
                                            ? vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out
                                            : 0U);
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__data_sign 
        = (vlSelf->ysyx_24110005_NPC__DOT__imm >> 0x1fU);
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__data_abs 
        = (0x7fffffffU & vlSelf->ysyx_24110005_NPC__DOT__imm);
    if ((0U == vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__data_abs)) {
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__Vfuncout = 0U;
    } else {
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__Vfuncout 
            = ((0x7fffffffU & vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__Vfuncout) 
               | ((IData)(vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__data_sign) 
                  << 0x1fU));
        vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__Vfuncout 
            = ((0x80000000U & vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__Vfuncout) 
               | (0x7fffffffU & ((IData)(vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__data_sign)
                                  ? ((IData)(1U) + 
                                     (~ vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__data_abs))
                                  : vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__data_abs)));
    }
    vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__imm_comp 
        = vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__Vfuncout;
    if ((0x13U == (IData)(vlSelf->ysyx_24110005_NPC__DOT____Vcellinp__alu_ins__sel))) {
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
    } else if ((0x73U == (IData)(vlSelf->ysyx_24110005_NPC__DOT____Vcellinp__alu_ins__sel))) {
        if ((1U == vlSelf->ysyx_24110005_NPC__DOT__imm)) {
            Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__alu_ins__DOT__finish_sim_TOP();
        }
    } else {
        vlSelf->ysyx_24110005_NPC__DOT__w_data = 0U;
    }
}

void Vysyx_24110005_NPC___024root___eval_nba(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24110005_NPC___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_24110005_NPC___024root___eval_triggers__act(Vysyx_24110005_NPC___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24110005_NPC___024root___dump_triggers__act(Vysyx_24110005_NPC___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24110005_NPC___024root___dump_triggers__nba(Vysyx_24110005_NPC___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24110005_NPC___024root___eval(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_24110005_NPC___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_24110005_NPC___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ysyx_24110005_NPC.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_24110005_NPC___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_24110005_NPC___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_24110005_NPC.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_24110005_NPC___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_24110005_NPC___024root___eval_debug_assertions(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
