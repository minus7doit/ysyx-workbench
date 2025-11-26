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

void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_INLINE_OPT void Vysyx_24110005_NPC___024root___nba_sequent__TOP__0(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__pmem_read__2__Vfuncout;
    __Vfunc_ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__pmem_read__2__Vfuncout = 0;
    IData/*31:0*/ __Vdly__ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst;
    __Vdly__ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst = 0;
    // Body
    vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_imm 
        = vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm;
    vlSelf->__Vdly__ysyx_24110005_NPC__DOT__cur_state 
        = vlSelf->ysyx_24110005_NPC__DOT__cur_state;
    vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_waddr 
        = vlSelf->ysyx_24110005_NPC__DOT__dec_exc_waddr;
    vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_fun 
        = vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun;
    vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_opcode 
        = vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode;
    __Vdly__ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
        = vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst;
    if (vlSelf->rst) {
        vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_imm = 0U;
        vlSelf->__Vdly__ysyx_24110005_NPC__DOT__cur_state = 0U;
        vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_waddr = 0U;
        vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_fun = 0U;
        vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_opcode = 0U;
    } else {
        if ((2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))) {
            vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_imm 
                = vlSelf->ysyx_24110005_NPC__DOT__imm;
            vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_waddr 
                = (0x1fU & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                            >> 7U));
            vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_fun 
                = (7U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                         >> 0xcU));
            vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_opcode 
                = (0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst);
        } else {
            vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_imm 
                = vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm;
            vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_waddr 
                = (0x1fU & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_waddr));
            vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_fun 
                = (7U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun));
            vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_opcode 
                = (0x7fU & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode));
        }
        if ((8U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))) {
            vlSelf->__Vdly__ysyx_24110005_NPC__DOT__cur_state 
                = vlSelf->ysyx_24110005_NPC__DOT__cur_state;
        } else if ((4U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))) {
            if ((2U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))) {
                vlSelf->__Vdly__ysyx_24110005_NPC__DOT__cur_state 
                    = vlSelf->ysyx_24110005_NPC__DOT__cur_state;
            } else if ((1U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))) {
                vlSelf->__Vdly__ysyx_24110005_NPC__DOT__cur_state 
                    = vlSelf->ysyx_24110005_NPC__DOT__cur_state;
            } else {
                if ((1U & (((~ (IData)(vlSelf->ysyx_24110005_NPC__DOT__bready)) 
                            ^ (IData)(vlSelf->ysyx_24110005_NPC__DOT__mem_sram__DOT__r_bresp)) 
                           | ((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                              ^ (IData)(vlSelf->ysyx_24110005_NPC__DOT__mem_r_valid))))) {
                    vlSelf->__Vdly__ysyx_24110005_NPC__DOT__cur_state 
                        = vlSelf->ysyx_24110005_NPC__DOT__cur_state;
                }
                vlSelf->__Vdly__ysyx_24110005_NPC__DOT__cur_state = 1U;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))) {
            if ((1U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))) {
                if (vlSelf->ysyx_24110005_NPC__DOT__mem_r_valid) {
                    vlSelf->__Vdly__ysyx_24110005_NPC__DOT__cur_state = 4U;
                }
            } else if (vlSelf->ysyx_24110005_NPC__DOT__dec_exc_valid) {
                vlSelf->__Vdly__ysyx_24110005_NPC__DOT__cur_state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))) {
            if (vlSelf->ysyx_24110005_NPC__DOT__fetch_dec_valid) {
                vlSelf->__Vdly__ysyx_24110005_NPC__DOT__cur_state = 2U;
            }
        } else {
            vlSelf->__Vdly__ysyx_24110005_NPC__DOT__cur_state = 1U;
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst = 0U;
    } else if ((1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))) {
        Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__pmem_read_TOP(vlSelf->ysyx_24110005_NPC__DOT__pc, __Vfunc_ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__pmem_read__2__Vfuncout);
        __Vdly__ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
            = __Vfunc_ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__pmem_read__2__Vfuncout;
    } else {
        __Vdly__ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
            = vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst;
    }
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
        = __Vdly__ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst;
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[0U] 
        = (IData)((0x3300000000ULL | (((QData)((IData)(
                                                       (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                        >> 0x19U))) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        (0x1fU 
                                                         & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                            >> 7U)))) 
                                        << 0x27U) | (QData)((IData)(
                                                                    (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                                     >> 0x19U)))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[1U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0x13U) | (IData)(
                                                        ((0x3300000000ULL 
                                                          | (((QData)((IData)(
                                                                              (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                                               >> 0x19U))) 
                                                              << 0x2cU) 
                                                             | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                                                >> 7U)))) 
                                                                 << 0x27U) 
                                                                | (QData)((IData)(
                                                                                (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                                                >> 0x19U)))))) 
                                                         >> 0x20U)));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[2U] 
        = (0x1180U | ((0xfc000000U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                      << 0xeU)) | (
                                                   (0x2000000U 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                       << 5U)) 
                                                   | ((0x1ff8000U 
                                                       & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                          >> 6U)) 
                                                      | (0x7fU 
                                                         & ((- (IData)(
                                                                       (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                                        >> 0x1fU))) 
                                                            >> 0xdU))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[3U] 
        = (0x1bc000U | ((0xfc000000U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                        << 1U)) | (
                                                   (0x3c00000U 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                       << 0xeU)) 
                                                   | ((0x3ff8U 
                                                       & ((- (IData)(
                                                                     (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                                      >> 0x1fU))) 
                                                          << 3U)) 
                                                      | ((4U 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                             >> 0x1dU)) 
                                                         | (3U 
                                                            & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                               >> 0x12U)))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[4U] 
        = (0xc600000U | ((0xf0000000U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                         << 8U)) | 
                         ((0x1ffffcU & ((- (IData)(
                                                   (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                    >> 0x1fU))) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                       >> 0x1eU)) 
                                                   | (1U 
                                                      & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                         >> 7U))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[5U] 
        = (0x30000000U | (0xfffffffU & ((0xfffff00U 
                                         & ((- (IData)(
                                                       (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                        >> 0x1fU))) 
                                            << 8U)) 
                                        | (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                           >> 0x18U))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[6U] 
        = (7U | (0xfffffff8U & (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                             >> 0x1fU))) 
                                 << 0xfU) | (0x7ff8U 
                                             & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                >> 0x11U)))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[7U] 
        = (0x98U | ((0xfffffc00U & (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                 >> 0x1fU))) 
                                     << 0x16U) | (0x3ffc00U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                     >> 0xaU)))) 
                    | (7U & ((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                         >> 0x1fU))) 
                             >> 0x11U))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[8U] 
        = (0xc00U | ((0xe0000000U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                     << 0x11U)) | (0x3ffU 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                                  >> 0x1fU))) 
                                                      >> 0xaU))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[9U] 
        = (0x2e0000U | (0x1fffffffU & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                       >> 0xfU)));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut[0xaU] 
        = (0x37000000U | (0xfffff0U & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                       >> 8U)));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x3300000000ULL | (QData)((IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                              >> 0x19U))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0xfe0U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                       >> 7U)))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | ((0x100000U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                             >> 0x14U)))))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                           >> 0x1fU))) 
                                               << 0xdU) 
                                              | ((0x1000U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                             >> 7U)))))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[8U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
           >> 0x19U);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                      >> 7U))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0x15U) | ((0x100000U 
                                                  & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                             >> 0x14U))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0xdU) | ((0x1000U 
                                                 & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                            >> 7U))))));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[6U] 
        = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list[8U] 
        = (0xfffff000U & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst);
    vlSelf->__VdfgTmp_h2c17f151__0 = (((- (IData)((vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                   >> 0x14U));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
                       == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
           == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
                          == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst) 
              == vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_24110005_NPC__DOT__imm = ((IData)(vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit)
                                            ? vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out
                                            : 0U);
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x7300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h2c17f151__0)));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[5U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h2c17f151__0)));
    vlSelf->ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list[6U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h2c17f151__0)));
}

void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__mem_sram__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__finish_sim_TOP();
void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__difftest_step_TOP(IData/*31:0*/ pc, IData/*31:0*/ npc);

VL_INLINE_OPT void Vysyx_24110005_NPC___024root___nba_sequent__TOP__1(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf__v0;
    __Vdlyvdim0__ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf__v0;
    __Vdlyvval__ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf__v0;
    __Vdlyvset__ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf__v0 = 0;
    // Body
    if (((0x23U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
         & (3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state)))) {
        Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__mem_sram__DOT__pmem_write_TOP(
                                                                                (vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm 
                                                                                + vlSelf->ysyx_24110005_NPC__DOT__src1), vlSelf->ysyx_24110005_NPC__DOT__src2, 
                                                                                ((1U 
                                                                                & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                                                 ? 0xfU
                                                                                 : 1U)));
    }
    if (((0x73U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
         & ((1U == vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm) 
            & (0U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))))) {
        Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__finish_sim_TOP();
    } else if ((1U & (~ (IData)(vlSelf->rst)))) {
        if ((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))) {
            Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__difftest_step_TOP(vlSelf->ysyx_24110005_NPC__DOT__pc, vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__dnpc_reg);
        }
    }
    __Vdlyvset__ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf__v0 = 0U;
    if (((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state)) 
         & (((0x33U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
             | ((0x37U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                | ((0x17U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                   | ((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                      | ((0x13U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                         | ((0x67U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                            | (((0x6fU == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
                                | (0x73U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))) 
                               & (0U != (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_waddr))))))))) 
            & ((0U != (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_waddr)) 
               | ((0U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_waddr)) 
                  & (0U != vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)))))) {
        __Vdlyvval__ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf__v0 
            = vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__w_data_reg;
        __Vdlyvset__ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf__v0 
            = vlSelf->ysyx_24110005_NPC__DOT__dec_exc_waddr;
    }
    if (vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__csr_wen) {
        if ((0x300U != (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))) {
            if ((0x305U != (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))) {
                if ((0x341U != (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))) {
                    if ((0x342U == (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))) {
                        vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_cause 
                            = vlSelf->ysyx_24110005_NPC__DOT__src1;
                    } else if ((0U == (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))) {
                        vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_cause = 0xbU;
                    }
                }
                if ((0x341U == (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))) {
                    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_epc 
                        = vlSelf->ysyx_24110005_NPC__DOT__src1;
                } else if ((0x342U != (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))) {
                    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_epc 
                        = ((0U == (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                            ? vlSelf->ysyx_24110005_NPC__DOT__pc
                            : 0xffffffffU);
                }
            }
            if ((0x305U == (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))) {
                vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_tvec 
                    = vlSelf->ysyx_24110005_NPC__DOT__src1;
            }
        }
        if ((0x300U == (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))) {
            vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_status 
                = vlSelf->ysyx_24110005_NPC__DOT__src1;
        }
    }
    vlSelf->ysyx_24110005_NPC__DOT__mem_sram__DOT__r_bresp 
        = ((0x23U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
           & (3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state)));
    if (__Vdlyvset__ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf__v0) {
        vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[__Vdlyvdim0__ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf__v0] 
            = __Vdlyvval__ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf__v0;
    }
    vlSelf->exit_code = vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf
        [0xaU];
}

VL_INLINE_OPT void Vysyx_24110005_NPC___024root___nba_sequent__TOP__2(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun = vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_fun;
    vlSelf->ysyx_24110005_NPC__DOT__dec_exc_waddr = vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_waddr;
    vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm = vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_imm;
    vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode 
        = vlSelf->__Vdly__ysyx_24110005_NPC__DOT__dec_exc_opcode;
    if (vlSelf->rst) {
        vlSelf->ysyx_24110005_NPC__DOT__pc = 0x80000000U;
    } else if ((4U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state))) {
        vlSelf->ysyx_24110005_NPC__DOT__pc = vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__dnpc_reg;
    }
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__csr_wen 
        = ((0x73U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)) 
           & ((1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun)) 
              | ((5U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun)) 
                 | ((0U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun)) 
                    & (0U == (0xfffU & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))))));
    vlSelf->ysyx_24110005_NPC__DOT__cur_state = vlSelf->__Vdly__ysyx_24110005_NPC__DOT__cur_state;
    vlSelf->ysyx_24110005_NPC__DOT__fetch_dec_valid 
        = (1U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state));
    vlSelf->ysyx_24110005_NPC__DOT__dec_exc_valid = 
        (2U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state));
    vlSelf->ysyx_24110005_NPC__DOT__bready = (4U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state));
    vlSelf->ysyx_24110005_NPC__DOT__mem_r_valid = (3U 
                                                   == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state));
}

VL_INLINE_OPT void Vysyx_24110005_NPC___024root___nba_comb__TOP__0(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_24110005_NPC__DOT__src2 = ((0U != 
                                             (0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                 >> 0x14U)))
                                             ? vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                 >> 0x14U))]
                                             : 0U);
    vlSelf->ysyx_24110005_NPC__DOT__src1 = ((0U != 
                                             (0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                 >> 0xfU)))
                                             ? vlSelf->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst 
                                                 >> 0xfU))]
                                             : 0U);
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__3__b 
        = vlSelf->ysyx_24110005_NPC__DOT__src2;
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__3__a 
        = vlSelf->ysyx_24110005_NPC__DOT__src1;
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__Vstatic__mul_result 
        = ((0x100000000ULL | (QData)((IData)(vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__3__a))) 
           * (0x100000000ULL | (QData)((IData)(vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__3__b))));
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__3__Vfuncout 
        = (IData)((vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__Vstatic__mul_result 
                   >> 0x20U));
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mulh 
        = vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__3__Vfuncout;
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__4__b 
        = vlSelf->ysyx_24110005_NPC__DOT__src2;
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__4__a 
        = vlSelf->ysyx_24110005_NPC__DOT__src1;
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__Vstatic__mul_result 
        = ((QData)((IData)(vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__4__a)) 
           * (QData)((IData)(vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__4__b)));
    vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__4__Vfuncout 
        = (IData)((vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__Vstatic__mul_result 
                   >> 0x20U));
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mul_unsigned 
        = vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__4__Vfuncout;
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__dnpc_reg 
        = ((0x40U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
            ? ((0x20U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                ? ((0x10U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                    ? ((8U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                        ? ((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc)
                        : ((4U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                            ? ((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc)
                            : ((2U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                ? ((1U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                    ? (((0U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun)) 
                                        & (0U == (0xfffU 
                                                  & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)))
                                        ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_tvec
                                        : (((0U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun)) 
                                            & (0x302U 
                                               == (0xfffU 
                                                   & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)))
                                            ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_epc
                                            : ((IData)(4U) 
                                               + vlSelf->ysyx_24110005_NPC__DOT__pc)))
                                    : ((IData)(4U) 
                                       + vlSelf->ysyx_24110005_NPC__DOT__pc))
                                : ((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc))))
                    : ((8U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                        ? ((4U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                            ? ((2U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                ? ((1U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                    ? (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                       + vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)
                                    : ((IData)(4U) 
                                       + vlSelf->ysyx_24110005_NPC__DOT__pc))
                                : ((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc))
                            : ((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc))
                        : ((4U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                            ? ((2U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                ? ((1U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                    ? ((0U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_waddr))
                                        ? vlSelf->ysyx_24110005_NPC__DOT__src1
                                        : (0xfffffffeU 
                                           & (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                              + vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)))
                                    : ((IData)(4U) 
                                       + vlSelf->ysyx_24110005_NPC__DOT__pc))
                                : ((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc))
                            : ((2U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                ? ((1U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                    ? ((4U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                        ? ((2U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                ? (
                                                   (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                    >= vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                    ? 
                                                   (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__pc))
                                                : (
                                                   (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                    < vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                    ? 
                                                   (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__pc)))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                ? (
                                                   VL_GTES_III(32, vlSelf->ysyx_24110005_NPC__DOT__src1, vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                    ? 
                                                   (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__pc))
                                                : (
                                                   VL_LTS_III(32, vlSelf->ysyx_24110005_NPC__DOT__src1, vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                    ? 
                                                   (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__pc))))
                                        : ((2U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                            ? ((IData)(4U) 
                                               + vlSelf->ysyx_24110005_NPC__DOT__pc)
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                ? (
                                                   (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                    != vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                    ? 
                                                   (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__pc))
                                                : (
                                                   (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                    == vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                    ? 
                                                   (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__pc)))))
                                    : ((IData)(4U) 
                                       + vlSelf->ysyx_24110005_NPC__DOT__pc))
                                : ((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc)))))
                : ((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc))
            : ((IData)(4U) + vlSelf->ysyx_24110005_NPC__DOT__pc));
    if (((3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__cur_state)) 
         & (3U == (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode)))) {
        Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__pmem_read_TOP(
                                                                                (vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm 
                                                                                + vlSelf->ysyx_24110005_NPC__DOT__src1), vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__mem_sram__DOT__pmem_read__5__Vfuncout);
        vlSelf->ysyx_24110005_NPC__DOT__mem_sram__DOT__r_data 
            = vlSelf->__Vfunc_ysyx_24110005_NPC__DOT__mem_sram__DOT__pmem_read__5__Vfuncout;
    } else {
        vlSelf->ysyx_24110005_NPC__DOT__mem_sram__DOT__r_data = 0U;
    }
    vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__w_data_reg 
        = ((0x40U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
            ? ((0x20U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                ? ((0x10U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                    ? ((8U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                        ? 0xffffffffU : ((4U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                          ? 0xffffffffU
                                          : ((2U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                                  ? 
                                                 ((0x300U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                   ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_status
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                    ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_tvec
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                     ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_epc
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                      ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_cause
                                                      : 0xffffffffU))))
                                                  : 0xffffffffU)
                                              : 0xffffffffU)))
                    : ((8U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                        ? ((4U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                            ? ((2U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                ? ((1U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                    ? ((IData)(4U) 
                                       + vlSelf->ysyx_24110005_NPC__DOT__pc)
                                    : 0xffffffffU) : 0xffffffffU)
                            : 0xffffffffU) : ((4U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                               ? ((2U 
                                                   & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__pc)
                                                    : 0xffffffffU)
                                                   : 0xffffffffU)
                                               : 0xffffffffU)))
                : 0xffffffffU) : ((0x20U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                   ? ((0x10U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                       ? ((8U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                           ? 0xffffffffU
                                           : ((4U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                               ? ((2U 
                                                   & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                                    ? vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm
                                                    : 0xffffffffU)
                                                   : 0xffffffffU)
                                               : ((2U 
                                                   & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                        ? 
                                                       (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                        & vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                         ? 
                                                        VL_MODDIV_III(32, vlSelf->ysyx_24110005_NPC__DOT__src1, vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                         : 0xffffffffU))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                        ? 
                                                       (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                        | vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                         ? 
                                                        VL_MODDIVS_III(32, vlSelf->ysyx_24110005_NPC__DOT__src1, vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                         : 0xffffffffU)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                        ? 
                                                       (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->ysyx_24110005_NPC__DOT__src2))
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                         ? 
                                                        VL_DIV_III(32, vlSelf->ysyx_24110005_NPC__DOT__src1, vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                          ? 
                                                         VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_24110005_NPC__DOT__src1, 
                                                                        (0x1fU 
                                                                         & vlSelf->ysyx_24110005_NPC__DOT__src2))
                                                          : 0xffffffffU)))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                        ? 
                                                       (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                        ^ vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                         ? 
                                                        VL_DIVS_III(32, vlSelf->ysyx_24110005_NPC__DOT__src1, vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                         : 0xffffffffU))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                        ? 
                                                       ((vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                         < vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                         ? 1U
                                                         : 0U)
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                         ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mul_unsigned
                                                         : 0xffffffffU))
                                                       : 
                                                      (VL_LTS_III(32, vlSelf->ysyx_24110005_NPC__DOT__src1, vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                        ? 1U
                                                        : 0U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                        ? 
                                                       (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelf->ysyx_24110005_NPC__DOT__src2))
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                         ? vlSelf->ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mulh
                                                         : 0xffffffffU))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                        ? 
                                                       (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                        + vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                         ? 
                                                        VL_MULS_III(32, vlSelf->ysyx_24110005_NPC__DOT__src1, vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                         : 
                                                        ((0x20U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                          ? 
                                                         (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                          - vlSelf->ysyx_24110005_NPC__DOT__src2)
                                                          : 0xffffffffU))))))
                                                    : 0xffffffffU)
                                                   : 0xffffffffU)))
                                       : 0xffffffffU)
                                   : ((0x10U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                       ? ((8U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                           ? 0xffffffffU
                                           : ((4U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                               ? ((2U 
                                                   & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                                    ? 
                                                   (vlSelf->ysyx_24110005_NPC__DOT__pc 
                                                    + vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)
                                                    : 0xffffffffU)
                                                   : 0xffffffffU)
                                               : ((2U 
                                                   & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                       ? 
                                                      (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                       & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)
                                                       : 
                                                      (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                       | vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                       ? 
                                                      ((0x20U 
                                                        == 
                                                        (0x7fU 
                                                         & (vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm 
                                                            >> 5U)))
                                                        ? 
                                                       ((0x1fU 
                                                         >= 
                                                         (0x3fU 
                                                          & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                         ? 
                                                        VL_SHIFTRS_III(32,32,6, vlSelf->ysyx_24110005_NPC__DOT__src1, 
                                                                       (0x3fU 
                                                                        & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                         : 
                                                        (- 
                                                         (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                          >> 0x1fU)))
                                                        : 
                                                       ((0x1fU 
                                                         >= 
                                                         (0x3fU 
                                                          & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                         ? 
                                                        (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                         >> 
                                                         (0x3fU 
                                                          & vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))
                                                         : 0U))
                                                       : 
                                                      (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                       ^ vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                       ? 
                                                      ((0U 
                                                        == vlSelf->ysyx_24110005_NPC__DOT__src1)
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      (VL_LTS_III(32, vlSelf->ysyx_24110005_NPC__DOT__src1, vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)
                                                        ? 1U
                                                        : 0U))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                       ? 
                                                      ((0x1fU 
                                                        >= vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)
                                                        ? 
                                                       (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                        << vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm)
                                                        : 0U)
                                                       : 
                                                      (vlSelf->ysyx_24110005_NPC__DOT__src1 
                                                       + vlSelf->ysyx_24110005_NPC__DOT__dec_exc_imm))))
                                                    : 0xffffffffU)
                                                   : 0xffffffffU)))
                                       : ((8U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                           ? 0xffffffffU
                                           : ((4U & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                               ? 0xffffffffU
                                               : ((2U 
                                                   & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_opcode))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                      ? 0xffffffffU
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                       ? 
                                                      (0xffffU 
                                                       & vlSelf->ysyx_24110005_NPC__DOT__mem_sram__DOT__r_data)
                                                       : 
                                                      (0xffU 
                                                       & vlSelf->ysyx_24110005_NPC__DOT__mem_sram__DOT__r_data)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                       ? 0xffffffffU
                                                       : vlSelf->ysyx_24110005_NPC__DOT__mem_sram__DOT__r_data)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->ysyx_24110005_NPC__DOT__dec_exc_fun))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->ysyx_24110005_NPC__DOT__mem_sram__DOT__r_data 
                                                                       >> 0xfU)))) 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & vlSelf->ysyx_24110005_NPC__DOT__mem_sram__DOT__r_data))
                                                       : 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->ysyx_24110005_NPC__DOT__mem_sram__DOT__r_data 
                                                                       >> 7U)))) 
                                                        << 8U) 
                                                       | (0xffU 
                                                          & vlSelf->ysyx_24110005_NPC__DOT__mem_sram__DOT__r_data)))))
                                                    : 0xffffffffU)
                                                   : 0xffffffffU))))));
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
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_24110005_NPC___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_24110005_NPC___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_24110005_NPC___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
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
    VlTriggerVec<2> __VpreTriggered;
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
