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

void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__finish_sim_TOP();
void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__inst_trace_TOP(IData/*31:0*/ pc, IData/*31:0*/ inst, IData/*31:0*/ npc);
void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__function_trace_TOP(IData/*31:0*/ pc, IData/*31:0*/ inst, IData/*31:0*/ npc);
void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__difftest_step_TOP(IData/*31:0*/ pc, IData/*31:0*/ npc);

VL_INLINE_OPT void Vysyx_24110005_NPC___024root___nba_sequent__TOP__0(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0 = 0U;
    if (((0x73U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel)) 
         & (1U == vlSelf->ysyx_24110005_NPC__DOT__imm))) {
        Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__finish_sim_TOP();
    } else if ((1U & (~ (IData)(vlSelf->rst)))) {
        Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__inst_trace_TOP(vlSelf->ysyx_24110005_NPC__DOT__pc, vlSelf->ysyx_24110005_NPC__DOT__current_inst, 
                                                                                (((0x63U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                                                                | (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                                                                + vlSelf->ysyx_24110005_NPC__DOT__imm)
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))
                                                                                 ? 
                                                                                (0xfffffffeU 
                                                                                & (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                                                + vlSelf->ysyx_24110005_NPC__DOT__imm))
                                                                                 : 
                                                                                ((IData)(4U) 
                                                                                + vlSelf->ysyx_24110005_NPC__DOT__pc))));
        Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__function_trace_TOP(vlSelf->ysyx_24110005_NPC__DOT__pc, vlSelf->ysyx_24110005_NPC__DOT__current_inst, 
                                                                                (((0x63U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                                                                | (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                                                                + vlSelf->ysyx_24110005_NPC__DOT__imm)
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))
                                                                                 ? 
                                                                                (0xfffffffeU 
                                                                                & (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                                                + vlSelf->ysyx_24110005_NPC__DOT__imm))
                                                                                 : 
                                                                                ((IData)(4U) 
                                                                                + vlSelf->ysyx_24110005_NPC__DOT__pc))));
        Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__difftest_step_TOP(vlSelf->ysyx_24110005_NPC__DOT__pc, 
                                                                                (((0x63U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                                                                | (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))
                                                                                 ? 
                                                                                (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                                                                + vlSelf->ysyx_24110005_NPC__DOT__imm)
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))
                                                                                 ? 
                                                                                (0xfffffffeU 
                                                                                & (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                                                + vlSelf->ysyx_24110005_NPC__DOT__imm))
                                                                                 : 
                                                                                ((IData)(4U) 
                                                                                + vlSelf->ysyx_24110005_NPC__DOT__pc))));
    }
    if ((((0x33U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
          | ((0x37U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
             | ((0x17U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                | ((3U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                   | ((0x13U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                      | ((0x67U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                         | (0x6fU == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))))))) 
         & ((0U != (0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                             >> 7U))) | (IData)(((0U 
                                                  == 
                                                  (0xf80U 
                                                   & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                                 & (0U 
                                                    != vlSelf->ysyx_24110005_NPC__DOT__imm)))))) {
        vlSelf->__Vdlyvval__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0 
            = vlSelf->ysyx_24110005_NPC__DOT__reg_wdata;
        vlSelf->__Vdlyvset__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0 
            = (0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                        >> 7U));
    }
}

void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__alu_ins__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vysyx_24110005_NPC___024root___nba_sequent__TOP__1(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__pmem_read__5__Vfuncout;
    __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__pmem_read__5__Vfuncout = 0;
    // Body
    if (vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_visit_valid) {
        Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__pmem_read_TOP(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_addr, __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__pmem_read__5__Vfuncout);
        vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_rdata 
            = __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__pmem_read__5__Vfuncout;
        if ((0x23U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst))) {
            Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__alu_ins__DOT__pmem_write_TOP(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_addr, 
                                                                                ((0U 
                                                                                != 
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                                                >> 0x14U)))
                                                                                 ? 
                                                                                vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                                                >> 0x14U))]
                                                                                 : 0U), 
                                                                                ((0x23U 
                                                                                == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((0xa3U 
                                                                                == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0x123U 
                                                                                == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                                                                                 ? 0xfU
                                                                                 : 0U))));
        }
    } else {
        vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_rdata = 0U;
    }
}

VL_INLINE_OPT void Vysyx_24110005_NPC___024root___nba_sequent__TOP__2(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ysyx_24110005_NPC__DOT__pc = ((IData)(vlSelf->rst)
                                           ? 0x80000000U
                                           : vlSelf->ysyx_24110005_NPC__DOT__dnpc);
    Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__pmem_read_TOP(vlSelf->ysyx_24110005_NPC__DOT__pc, vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__pmem_read__0__Vfuncout);
    vlSelf->ysyx_24110005_NPC__DOT__current_inst = vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__pmem_read__0__Vfuncout;
    vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_visit_valid 
        = ((3U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
           | (0x23U == (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | ((0x100000U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                             >> 0x14U)))))))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                           >> 0x1fU))) 
                                               << 0xdU) 
                                              | ((0x1000U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                             >> 7U)))))))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[5U] 
        = (0x300000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelf->ysyx_24110005_NPC__DOT__current_inst))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[6U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_24110005_NPC__DOT__current_inst))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[7U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_24110005_NPC__DOT__current_inst))));
    vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel 
        = ((0x380U & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                      >> 5U)) | (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst));
    vlSelf->__VdfgTmp_h1a1a97ac__0 = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                         >> 7U))));
    vlSelf->__VdfgTmp_h6578c3af__0 = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                   >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                      >> 7U))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                        >> 0x1fU))) << 0x15U) | ((0x100000U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                             >> 0x14U))))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                        >> 0x1fU))) << 0xdU) | ((0x1000U 
                                                 & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                            >> 7U))))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[5U] 
        = (0xfffff000U & vlSelf->ysyx_24110005_NPC__DOT__current_inst);
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->ysyx_24110005_NPC__DOT__current_inst);
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->ysyx_24110005_NPC__DOT__current_inst);
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[0U] 
        = (IData)((0x2300000000ULL | (((QData)((IData)(
                                                       (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                        >> 0x1fU))) 
                                       << 0x3bU) | 
                                      (((QData)((IData)(
                                                        (0xffU 
                                                         & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                            >> 0xcU)))) 
                                        << 0x33U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                             >> 0x14U)))) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            (0x3ffU 
                                                             & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                                >> 0x15U)))) 
                                            << 0x28U) 
                                           | (QData)((IData)(vlSelf->__VdfgTmp_h1a1a97ac__0))))))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[1U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                        >> 0x1fU))) << 0x1cU) | (IData)(
                                                        ((0x2300000000ULL 
                                                          | (((QData)((IData)(
                                                                              (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                                               >> 0x1fU))) 
                                                              << 0x3bU) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                                                >> 0xcU)))) 
                                                                 << 0x33U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                                                >> 0x14U)))) 
                                                                    << 0x32U) 
                                                                   | (((QData)((IData)(
                                                                                (0x3ffU 
                                                                                & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                                                >> 0x15U)))) 
                                                                       << 0x28U) 
                                                                      | (QData)((IData)(vlSelf->__VdfgTmp_h1a1a97ac__0))))))) 
                                                         >> 0x20U)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[2U] 
        = (0x3780U | (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                   >> 0x1fU))) << 0x1bU) 
                      | ((0x4000000U & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                        >> 5U)) | (
                                                   (0x2000000U 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                       << 0x12U)) 
                                                   | ((0x1f80000U 
                                                       & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                          >> 6U)) 
                                                      | ((0x78000U 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                             << 7U)) 
                                                         | (0x7fU 
                                                            & ((- (IData)(
                                                                          (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                                           >> 0x1fU))) 
                                                               >> 4U))))))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[3U] 
        = (0x18c000U | ((0xffe00000U & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                        << 1U)) | (0x3fffU 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                                  >> 0x1fU))) 
                                                      >> 5U))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[4U] 
        = (0xe600000U | ((0xf0000000U & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                         << 8U)) | 
                         (0x1fffffU & ((0x1ffffeU & 
                                        ((- (IData)(
                                                    (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                     >> 0x1fU))) 
                                         << 1U)) | 
                                       (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                        >> 0x1fU)))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[5U] 
        = (0x30000000U | (0xfffffffU & ((0xfffff00U 
                                         & ((- (IData)(
                                                       (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                        >> 0x1fU))) 
                                            << 8U)) 
                                        | (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                           >> 0x18U))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[6U] 
        = (1U | (0xffff8000U & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                << 3U)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[7U] 
        = (0x18U | ((0xffc00000U & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                    << 0xaU)) | (0x7fffU 
                                                 & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                    >> 0x1dU))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[8U] 
        = (0x5c00U | ((0xe0000000U & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                      << 0x11U)) | 
                      (0x3fffffU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                    >> 0x16U))));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut[9U] 
        = (0x6e0000U | (0x1fffffffU & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                       >> 0xfU)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h1a1a97ac__0)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x7300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h6578c3af__0)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h6578c3af__0)));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
                       == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
           == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__current_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_24110005_NPC__DOT__imm = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit)
                                            ? vlSelf->ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out
                                            : 0U);
}

VL_INLINE_OPT void Vysyx_24110005_NPC___024root___nba_sequent__TOP__3(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->__Vdlyvset__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0) {
        vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[vlSelf->__Vdlyvdim0__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0] 
            = vlSelf->__Vdlyvval__ysyx_24110005_NPC__DOT__reg_rd__DOT__rf__v0;
    }
    vlSelf->exit_code = vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf
        [0xaU];
}

VL_INLINE_OPT void Vysyx_24110005_NPC___024root___nba_comb__TOP__0(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24110005_NPC__DOT__src1 = ((0U != 
                                             (0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                 >> 0xfU)))
                                             ? vlSelf->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__current_inst 
                                                 >> 0xfU))]
                                             : 0U);
    vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_addr 
        = (vlSelf->ysyx_24110005_NPC__DOT__imm + vlSelf->ysyx_24110005_NPC__DOT__src1);
    vlSelf->ysyx_24110005_NPC__DOT__dnpc = (((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_24110005_NPC__DOT__current_inst)) 
                                             | (0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))
                                             ? (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                                + vlSelf->ysyx_24110005_NPC__DOT__imm)
                                             : ((IData)(
                                                        (0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->ysyx_24110005_NPC__DOT__current_inst)))
                                                 ? 
                                                (0xfffffffeU 
                                                 & (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__imm))
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->ysyx_24110005_NPC__DOT__pc)));
}

VL_INLINE_OPT void Vysyx_24110005_NPC___024root___nba_comb__TOP__1(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->ysyx_24110005_NPC__DOT__reg_wdata = (((
                                                   ((((((0x13U 
                                                         == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel)) 
                                                        | (0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel)))) 
                                                       | (0x67U 
                                                          == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))) 
                                                      | (0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel)))) 
                                                     | (0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel)))) 
                                                    | (0x83U 
                                                       == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))) 
                                                   | (0x103U 
                                                      == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))) 
                                                  | (0x203U 
                                                     == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel)))
                                                  ? 
                                                 ((0x13U 
                                                   == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                                                   ? 
                                                  (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                   + vlSelf->ysyx_24110005_NPC__DOT__imm)
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel)))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__pc)
                                                    : 
                                                   ((0x67U 
                                                     == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->ysyx_24110005_NPC__DOT__pc)
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel)))
                                                      ? 
                                                     (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                                      + vlSelf->ysyx_24110005_NPC__DOT__imm)
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel)))
                                                       ? vlSelf->ysyx_24110005_NPC__DOT__imm
                                                       : 
                                                      ((0x83U 
                                                        == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_rdata 
                                                                        >> 0x10U)))) 
                                                         << 0x10U) 
                                                        | (0xffffU 
                                                           & vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_rdata))
                                                        : 
                                                       ((0x103U 
                                                         == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                                                         ? vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_rdata
                                                         : 
                                                        (0xffU 
                                                         & vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_rdata))))))))
                                                  : 
                                                 ((0x283U 
                                                   == (IData)(vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__sel))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_rdata)
                                                   : 0U));
}

void Vysyx_24110005_NPC___024root___eval_nba(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24110005_NPC___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_24110005_NPC___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24110005_NPC___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24110005_NPC___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_24110005_NPC___024root___nba_comb__TOP__0(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vysyx_24110005_NPC___024root___nba_comb__TOP__1(vlSelf);
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
    VlTriggerVec<3> __VpreTriggered;
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
                    VL_FATAL_MT("/home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005_NPC.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/minus7/ysyx-workbench/npc/./vsrc/ysyx_24110005_NPC.v", 1, "", "NBA region did not converge.");
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
