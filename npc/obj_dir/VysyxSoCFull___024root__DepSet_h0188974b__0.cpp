// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___ico_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wen 
        = (((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt)) 
            & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf) 
                   >> 1U)) & ((IData)(vlSelf->externalPins_ps2_data) 
                              & VL_REDXOR_32((0x1ffU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf) 
                                                 >> 2U)))))) 
           & ((0x20U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_pulse)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid 
        = (1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_valid) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__req_outstanding)))) 
                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
                    & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush)) 
                       & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_serial) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwrite)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__ar_fire 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__debug_ifu_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)) & (0x18U == (0x1cU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)) & (8U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)) & (0x14U == (0x1cU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
}

void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VysyxSoCFull___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_act\n"); );
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__qpi_mode;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__qpi_mode = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__psram__DOT__qpi_mode 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__data_bit_cnt 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__addr;
    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__psram__DOT__state;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__psram__DOT__mem__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__psram__DOT__qpi_mode 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode));
    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n)))) {
        if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            if ((4U & vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt)) {
                vlSelf->__Vdlyvval__ysyxSoCFull__DOT__psram__DOT__mem__v0 
                    = ((0xf0U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_byte)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din));
                vlSelf->__Vdlyvset__ysyxSoCFull__DOT__psram__DOT__mem__v0 = 1U;
                vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__psram__DOT__mem__v0 
                    = (0x3fffffU & vlSelf->ysyxSoCFull__DOT__psram__DOT__addr);
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n) {
        __Vdly__ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__data_bit_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_byte = 0U;
    } else {
        __Vdly__ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt 
            = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))
                ? ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt)
                : 0U);
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt 
                = ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt);
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
                = ((0xfffff0U & (vlSelf->ysyxSoCFull__DOT__psram__DOT__addr 
                                 << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din));
        } else {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt = 0U;
            if ((((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt 
                     >> 2U)) & (0x1cU != vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
                    = (0xffffffU & ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__psram__DOT__addr));
            } else if ((((5U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                         & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt 
                            >> 2U)) & (0x1cU != vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__addr 
                    = (0xffffffU & ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__psram__DOT__addr));
            }
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt = 1U;
            __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din)
                    : (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din)));
        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt);
            __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode)
                    ? ((0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 4U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))
                    : ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd) 
                                 << 1U)) | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))));
        } else {
            __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt = 0U;
        }
        vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__data_bit_cnt 
            = (((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)) 
                | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state)))
                ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt)
                : 0U);
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 0U;
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
                if ((0x1cU == vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt)) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 0U;
                }
            } else if ((0x1cU == vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt)) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 0U;
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
                if ((5U == vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt)) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 5U;
                }
            } else if ((0x14U == vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt)) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state 
                    = ((0xebU == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                        ? 3U : ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))
                                 ? 4U : 6U));
            } else if ((0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 7U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode)
                  ? (1U == vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt)
                  : (7U == vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 2U;
            }
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__psram__DOT__state = 1U;
        }
        if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__state))) {
            vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_byte 
                = ((4U & vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bit_cnt)
                    ? ((0xf0U & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_byte)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din))
                    : ((0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr_byte)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din) 
                          << 4U)));
        }
    }
    vlSelf->ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt 
        = __Vdly__ysyxSoCFull__DOT__psram__DOT__rd_delay_cnt;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt 
        = __Vdly__ysyxSoCFull__DOT__psram__DOT__addr_bit_cnt;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd = __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt 
        = __Vdly__ysyxSoCFull__DOT__psram__DOT__cmd_bit_cnt;
    vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_mode 
        = __Vdly__ysyxSoCFull__DOT__psram__DOT__qpi_mode;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__bitrev__DOT__rx_bit_cnt;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__rx_bit_cnt = 0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__rx_shift 
        = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_shift;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__rx_bit_cnt 
        = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_bit_cnt;
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__rx_shift = 0U;
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__rx_bit_cnt = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_en) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__rx_shift 
            = ((0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_shift) 
                         << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__rx_bit_cnt 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_last_bit)
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_bit_cnt))));
    }
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_bit_cnt 
        = __Vdly__ysyxSoCFull__DOT__bitrev__DOT__rx_bit_cnt;
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__4(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt 
        = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt;
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_done) {
        if (vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_en) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt)));
        }
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt = 0U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> VysyxSoCFull__ConstPool__TABLE_hb555a276_0;
extern const VlUnpacked<CData/*1:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h66331b8d_0;
extern const VlUnpacked<CData/*0:0*/, 512> VysyxSoCFull__ConstPool__TABLE_hb3d29b7b_0;
extern const VlUnpacked<CData/*1:0*/, 512> VysyxSoCFull__ConstPool__TABLE_hff8effc1_0;
extern const VlUnpacked<CData/*0:0*/, 32> VysyxSoCFull__ConstPool__TABLE_hab15bf1d_0;
extern const VlUnpacked<CData/*1:0*/, 32> VysyxSoCFull__ConstPool__TABLE_h108847db_0;
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len);
void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*0:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__13__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__13__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__13__addr = 0;
    CData/*0:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__16__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__16__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__16__addr = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awaddr_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awaddr_q = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_aw_pending;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_aw_pending = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v32;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v32 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v32;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v32;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v32 = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend = 0;
    QData/*32:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_quotient;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_quotient = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_owner;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_owner = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_busy;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_busy = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q = 0;
    CData/*6:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0 = 0;
    IData/*21:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0 = 0;
    IData/*21:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0 = 0;
    QData/*63:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt = 0;
    QData/*63:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt = 0;
    QData/*63:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt = 0;
    QData/*63:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles = 0;
    QData/*63:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_quotient 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_quotient;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__drop_resp 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__drop_resp;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_owner 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_owner;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_busy 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_busy;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_hold_serial 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_hold_serial;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_aw_pending 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_aw_pending;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awaddr_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awaddr_q;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v32 = 0U;
    __Vtableidx3 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mdu_valid) 
                     << 5U) | (((0x20U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt) 
                                << 4U) | (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state) 
                                            << 1U) 
                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)))));
    if (VysyxSoCFull__ConstPool__TABLE_hb555a276_0[__Vtableidx3]) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state 
            = VysyxSoCFull__ConstPool__TABLE_h66331b8d_0
            [__Vtableidx3];
    }
    __Vtableidx1 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rlast) 
                     << 8U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_r_fire) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__ifu_ar_fire) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__ar_fire) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_flush) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))))))))));
    if (VysyxSoCFull__ConstPool__TABLE_hb3d29b7b_0[__Vtableidx1]) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state 
            = VysyxSoCFull__ConstPool__TABLE_hff8effc1_0
            [__Vtableidx1];
    }
    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)))) {
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_flush)))) {
            if ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_r_fire)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__refill_drop_q)))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q)))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt) {
                        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata;
                        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 = 1U;
                        vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 = 0x20U;
                        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q;
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__tag_q;
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0 = 1U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q;
                    } else {
                        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata;
                        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 = 1U;
                        vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 = 0U;
                        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q;
                    }
                }
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt) {
                        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata;
                        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 = 1U;
                        vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 = 0x20U;
                        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q;
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__tag_q;
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0 = 1U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q;
                    } else {
                        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata;
                        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 = 1U;
                        vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 = 0U;
                        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q;
                    }
                }
            }
        }
    }
    __Vtableidx4 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_r_fire) 
                     << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_ar_fire) 
                                << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state) 
                                           << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))));
    if (VysyxSoCFull__ConstPool__TABLE_hab15bf1d_0[__Vtableidx4]) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state 
            = VysyxSoCFull__ConstPool__TABLE_h108847db_0
            [__Vtableidx4];
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__i = 0x20U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_quotient = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_clint_rdata = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles = 0ULL;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc = 0x30000000U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v0 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_rid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_serial = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_wen_expect = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_ctrl = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_buf_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__fencei_ex = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_mret = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_pending = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_store = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_owner = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_busy = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done = 0U;
    } else {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low);
        if ((0xffffffffU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low)) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi);
        }
        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt);
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_quotient 
                = ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem 
                                  >> 0x20U))) ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_quotient 
                                                 << 1U)
                    : (1U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_quotient 
                             << 1U)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem 
                = (0x1ffffffffULL & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__rem_sign)
                                      ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem 
                                          + (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devisor))) 
                                         + (QData)((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend 
                                                            >> 0x1fU))))
                                      : ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem 
                                          - (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devisor))) 
                                         + (QData)((IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend 
                                                            >> 0x1fU))))));
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__ar_fire) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt 
                = (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt);
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt 
                    = (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt);
            }
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt 
                    = (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt);
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__addr_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_ar_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_clint_rdata 
                = ((0x2000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_araddr)
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low
                    : ((0x2000004U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_araddr)
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_clint_rdata));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_rid = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_clint_rdata 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_clint_rdata;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_busy) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles 
                = (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles);
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__ar_fire) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q 
                = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[
                         (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                                >> 8U))] >> (0x1fU 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                                                >> 3U))));
        }
        if (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state)) 
             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend 
                = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mdu_op))
                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__src1_ex 
                       << 1U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__src1_ex 
                                 << 1U));
        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state))) {
            if ((0x20U > vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt)) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend 
                    = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend 
                       << 1U);
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_access_busy) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles 
                = (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_serial = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_wen_expect = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_ctrl = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_mret = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_store = 0U;
        } else {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_commit) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_serial = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_wen_expect = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_ctrl = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_mret = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_store = 0U;
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid 
                    = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_dec_exc_valid) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_dec_exc_valid));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_serial 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_serial;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_wen_expect 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_wen_expect;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_ctrl 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_ctrl;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_mret 
                    = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h75345f17__0) 
                       & (0x302U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_imm)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_store 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_store;
            }
        }
        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state = 0U;
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state = 3U;
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state = 0U;
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__exc_wb_valid) {
                    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state = 0U;
                }
            } else if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state)) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mdu_ready))) {
                vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__exc_pending_ex)
                    ? 3U : ((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex))
                             ? 4U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__is_div_op)
                                      ? 2U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex))
                                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__r_fire)
                                                   ? 5U
                                                   : 1U)
                                               : 3U))));
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dec_exc_ready) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dec_exc_valid))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__r_fire)
                    ? 5U : 1U);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_commit) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_tvec;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret_commit) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__m_epc;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__normal_ctrl_redirect) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__dnpc_reg;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_flush) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                = ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc);
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_take) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                = ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_pc);
        }
        if ((((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state)) 
              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid)) 
                 & (((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                     | ((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                        | ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                           | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                              | ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                 | ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                    | (((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex)) 
                                        | (0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__opcode_ex))) 
                                       & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__w_addr_ex))))))))) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd))))) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd)))) {
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v32 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__w_data_reg;
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v32 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v32 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_store_capture_valid) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_buf_valid = 1U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_buf_valid = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_flush) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[0U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[1U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[2U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[3U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[0U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[1U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[2U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[3U] = 0U;
        } else if ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_r_fire)) 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__refill_drop_q)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q) 
                                                                                >> 5U)] 
                        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[
                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q) 
                            >> 5U)] | ((IData)(1U) 
                                       << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q))));
                }
            }
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q)))) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q) 
                                                                                >> 5U)] 
                        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[
                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q) 
                            >> 5U)] | ((IData)(1U) 
                                       << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q))));
                }
            }
        }
        if (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dec_exc_valid))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__fencei_ex 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_is_fencei;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_ar_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_pending = 1U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__r_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_pending = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__ar_to_clint;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_r_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__aw_to_clint;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_r_fire) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy = 0U;
            }
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__ifu_ar_fire) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_owner = 0U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_ar_fire) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy = 1U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_owner = 1U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_busy) {
            if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_aw_fire))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done = 1U;
            }
            if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_w_fire))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done = 1U;
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_b_fire) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_busy = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done = 0U;
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state = 3U;
        } else {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_w_req_can_grant) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_busy = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_aw_fire;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_w_fire;
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy)
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_owner)
                        ? 2U : 1U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__ifu_req_can_grant)
                                       ? 1U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_r_req_can_grant)
                                                ? 2U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__lsu_w_req_can_grant)
                                                    ? 3U
                                                    : 0U))));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awaddr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awsize_q = 2U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_aw_pending = 0U;
    } else {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready))) {
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__13__addr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__cur_mem_addr;
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__13__Vfuncout 
                = ((((0xf000000U <= __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__13__addr) 
                     & (0xfffffffU >= __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__13__addr)) 
                    | ((0x80000000U <= __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__13__addr) 
                       & (0x9fffffffU >= __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__13__addr))) 
                   | ((0xa0000000U <= __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__13__addr) 
                      & (0xbfffffffU >= __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__13__addr)));
            if (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__13__Vfuncout) {
                VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_read_TOP(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__cur_mem_addr, 4U);
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awaddr_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_addr_r;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awsize_q = 2U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_aw_pending = 1U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_aw_pending) {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__16__addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awaddr_q;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__16__Vfuncout 
                    = ((((0xf000000U <= __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__16__addr) 
                         & (0xfffffffU >= __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__16__addr)) 
                        | ((0x80000000U <= __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__16__addr) 
                           & (0x9fffffffU >= __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__16__addr))) 
                       | ((0xa0000000U <= __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__16__addr) 
                          & (0xbfffffffU >= __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__16__addr)));
                if (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__is_cacheable_addr__16__Vfuncout) {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_wstrb_r;
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__Vfuncout 
                        = ((8U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb))
                            ? ((4U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb))
                                ? ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb))
                                    ? 4U : ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb))
                                             ? 4U : 2U))
                                : ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb))
                                    ? 4U : ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb))
                                             ? 4U : 1U)))
                            : ((4U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb))
                                ? ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb))
                                    ? ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb))
                                        ? 4U : 2U) : 
                                   ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb))
                                     ? 4U : 1U)) : 
                               ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb))
                                 ? ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb))
                                     ? 2U : 1U) : (
                                                   (1U 
                                                    & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__strb))
                                                    ? 1U
                                                    : 4U))));
                    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_write_TOP(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awaddr_q, __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__bytes_from_wstrb__18__Vfuncout, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_data_r);
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_aw_pending = 0U;
            }
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_inst = 0x13U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_busy = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__tag_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devisor = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_access_busy = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__exc_pending_ex = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__w_addr_ex = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q = 0U;
    } else {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_inst = 0x13U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd = 0U;
        } else {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_commit) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd = 0U;
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_inst 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd 
                    = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                >> 7U));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__ar_fire) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_busy = 1U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_r_fire) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rlast))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_busy = 0U;
        }
        if ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_r_fire)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rlast))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q)))) 
                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[
                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q) 
                     >> 5U)]) | ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q))) 
                                 << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q))));
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__ar_fire) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[(3U 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                                                                                >> 8U))] 
                = (((~ ((IData)(1U) << (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                                                 >> 3U)))) 
                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[
                    (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                           >> 8U))]) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit0) 
                                        << (0x1fU & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                                             >> 3U))));
        }
        if (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__mdu_state)) 
             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devisor 
                = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mdu_op))
                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__src2_ex 
                       << 1U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__src2_ex 
                                 << 1U));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_flush) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_access_busy = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__ar_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__tag_q 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                   >> 0xaU);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_access_busy = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q 
                = (0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                            >> 3U));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_access_busy = 0U;
        }
        if (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__ex_state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__dec_exc_valid))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__exc_pending_ex 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_dec_exc_valid) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_dec_exc_valid));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__w_addr_ex 
                = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                            >> 7U));
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_quotient 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_quotient;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_devidend;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__iter_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0xfU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x10U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x11U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x12U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x13U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x14U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x15U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x16U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x17U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x18U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x19U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x1aU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x1bU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x1cU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x1dU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x1eU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[0x1fU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v32) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v32] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf__v32;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_owner 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_owner;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__rd_busy;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_busy 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_busy;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awaddr_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_awaddr_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_aw_pending 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mtrace_aw_pending;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__rem_sign 
        = (1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__MDU_inst__DOT__r_rem 
                         >> 0x20U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__b_wait_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_busy) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_aw_done) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__wr_w_done)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__soc_bready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__b_wait_en));
}

extern const VlUnpacked<CData/*0:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h69a2ee77_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h4032e768_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hc6114f20_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_h4abec798_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h05f4911a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VysyxSoCFull__ConstPool__TABLE_hb69924b4_0;
extern const VlUnpacked<CData/*1:0*/, 128> VysyxSoCFull__ConstPool__TABLE_h4346917a_0;
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_hccb3c341_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_he38796ec_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__6(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__6\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__addr = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__axtype;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__axtype = 0;
    CData/*7:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__axlen;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__axlen = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__addr = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__axtype;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__axtype = 0;
    CData/*7:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__axlen;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__axlen = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__addr = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__axtype;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__axtype = 0;
    CData/*7:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__axlen;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__axlen = 0;
    SData/*10:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*6:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    CData/*6:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    SData/*10:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__w_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__w_ptr = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr = 0;
    CData/*5:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w = 0;
    SData/*13:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT___asic_spi_sck;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0;
    VlWide<4>/*127:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data;
    VL_ZERO_W(128, __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data);
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*5:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0;
    CData/*1:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v2;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v2 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v2;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3 = 0;
    CData/*1:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3 = 0;
    CData/*0:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4 = 0;
    CData/*1:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 = 0;
    CData/*1:0*/ __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8;
    __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 = 0;
    SData/*12:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt = 0;
    QData/*63:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt = 0;
    QData/*63:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__w_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__w_ptr = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0;
    IData/*31:0*/ __Vtemp_h05a23b48__0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__w_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__w_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__w_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__w_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = vlSelf->ysyxSoCFull__DOT___asic_spi_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt;
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi 
        = vlSelf->ysyxSoCFull__DOT___asic_spi_mosi;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v2 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr;
    __Vdly__ysyxSoCFull__DOT___asic_spi_sck = (1U & 
                                               ((~ (IData)(vlSelf->reset)) 
                                                & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                     & (0U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                    & ((0U 
                                                        != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)))
                                                    ? 
                                                   (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_cyc_r) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_stb_r)) 
                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w))));
    vlSelf->__Vdly__ysyxSoCFull__DOT___asic_spi_mosi 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((1U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk) 
                                                   | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))
                                                ? (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & (((0x800U 
                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                         ? 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                         - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                         : 
                                                        ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                         - (IData)(1U))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((0x800U 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                        ? 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                                        : 
                                                       ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                        - (IData)(1U)))))
                                                : (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 2U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      | ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 1U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d))))))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__idx = 4U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ridx = 2U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x2774U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__w_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__w_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt = 0xffffU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter = 0U;
    } else {
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q = 0x30cU;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q = 0U;
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                = (0x1ffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q 
                               - (IData)(1U)));
            if ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q 
                    = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q)));
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wen) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__w_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__w_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_r_fire) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__w_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__w_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_pulse) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt 
                = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt))));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf 
                = (((IData)(vlSelf->externalPins_ps2_data) 
                    << 0xaU) | (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf) 
                                          >> 1U)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count 
            = (0x3fU & ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wen) 
                                 << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren)))
                         ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))
                         : ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wen) 
                                     << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren)))
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count) 
                                - (IData)(1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt 
            = ((0x31fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt))
                ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt))));
        if (((0x20cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)) 
             & (0x31fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt = 0U;
        } else if ((0x31fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)));
        }
        if ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 1U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
        } else if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                           >> 2U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
        } else if ((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch) 
                             >> 3U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xff00ffffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffff00ffU & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
                    = ((0xffffff00U & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U]) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[(3U 
                                                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos)))) 
                    & __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                    (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                           >> 5U))]) | ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk)
                                                ? (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso) 
                                                    | (IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__bitrev__ss)) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                                      | ((((2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                                           & (0U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                                           ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                                           : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                                         >> 0x1fU)))
                                                : (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[
                                                   (3U 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))))) 
                                        << (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos))));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr)));
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w)) 
             & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)));
        } else if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w))) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count) 
                         - (IData)(1U)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
            = ((0xeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                        << 1U)) | (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
            = (0xffffU & ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero)))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)
                           : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt) 
                              - (IData)(1U))));
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state = 1U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state = 1U;
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state = 1U;
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state = 9U;
            }
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state 
                            = ((0x100U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_w)
                                ? 7U : 8U);
                    }
                } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state = 7U;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state = 6U;
                }
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state = 5U;
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state = 4U;
                }
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_setup_flash) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state = 2U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state = 1U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter = 0U;
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter = 0U;
        } else if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_sck))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter)));
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_sck 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_ce_n)) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_sck)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_out_pslverr 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__w_dn_done)
                                          ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                                              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg)) 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_bad_wr) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err))
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_invalid_req)))) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                                & ((~ 
                                                    ((0U 
                                                      == 
                                                      (0xffU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                                     | ((4U 
                                                         == 
                                                         (0xffU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                                        | ((8U 
                                                            == 
                                                            (0xffU 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)) 
                                                           | (0xcU 
                                                              == 
                                                              (0xffU 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))))) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_access))))
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_out_pslverr)));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 3U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 2U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                                   & (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir))))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    if (vlSelf->reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 1U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v0 = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0x27fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        __Vtemp_h05a23b48__0 = 0U;
    } else {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)));
        } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o)) 
             & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)));
        } else if (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o))) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count) 
                         - (IData)(1U)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
            = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                - (IData)(1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                         : ((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))
                             ? (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                             : 0x80U)));
        if ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                    >> 8U) & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 1U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip = 0U;
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x10U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_r)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_r)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0x3f00U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r 
                                   | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)))));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                    = ((0xffU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)) 
                       | (0x3f00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                     & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
                = (0x3effU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n) {
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q) 
             & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)))) {
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q;
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | (0xeU ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | (((IData)((0x18U == (0x18U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                   << 7U) | (((IData)((0x14U == (0x14U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                              << 6U) | (((IData)((0x11U 
                                                  == 
                                                  (0x11U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                         << 5U) | ((IData)(
                                                           (0x10U 
                                                            != 
                                                            (0x12U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                                   << 4U)))));
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_row_q;
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 = 1U;
                        __Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_bank_q;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q;
                    }
                }
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                        if ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q))) {
                            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v2 = 1U;
                            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v2 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q;
                        } else {
                            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3 = 1U;
                            __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_bank_q;
                            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4 = 1U;
                    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_bank_q;
                    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q;
                }
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
                     & (0U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))) 
                    & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt = 0U;
        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__w_dn_done) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum = 0U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt 
                    = ((0x100U >= ((IData)(0x41aU) 
                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum))
                        ? 0U : ((((IData)(0x49aU) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum) 
                                 >> 8U) - (IData)(1U)));
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum 
                    = ((IData)(0x41aU) + vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum);
            }
        } else {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt 
                = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state))
                    ? ((1U < vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt)
                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt 
                           - (IData)(1U)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt)
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt);
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))))
                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
        __Vtemp_h05a23b48__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__w_dn_done)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_spi_reg)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_w
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__addr_in_flash)
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata
                                              : 0U))
                                      : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 0x10U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                         << 8U) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                  : 0U)
                                                 : 0U) 
                                               | (((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                                        >> 0x1cU)))
                                                    ? 
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [3U] 
                                                     << 0x18U) 
                                                    | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                        [2U] 
                                                        << 0x10U) 
                                                       | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                           [1U] 
                                                           << 8U) 
                                                          | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                          [0U])))
                                                    : 0U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0xffU 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl)
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (0xffU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__dip_state)
                                                         : 
                                                        ((8U 
                                                          == 
                                                          (0xffU 
                                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))
                                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl
                                                          : 
                                                         ((0xcU 
                                                           == 
                                                           (0xffU 
                                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reserve)
                                                           : 0U))))
                                                       : 0U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                          ? 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren)
                                                           ? 
                                                          ((0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))
                                                            ? 0U
                                                            : 
                                                           vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__fifo
                                                           [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr])
                                                           : 
                                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_read) 
                                                            & (4U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))
                                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__kbd_status
                                                            : 0U))
                                                          : 0U) 
                                                        | ((2U 
                                                            == 
                                                            (3U 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr 
                                                                >> 0x1cU)))
                                                            ? 
                                                           (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                                                             & (0x21000000U 
                                                                == 
                                                                (0x3fffffffU 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))
                                                             ? 0x28001e0U
                                                             : 
                                                            (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_rd) 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT____VdfgTmp_h5a01b284__0))
                                                              ? 
                                                             vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__frame_buf
                                                             [
                                                             (0x7ffffU 
                                                              & (((0x3fffffffU 
                                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                                                                  - (IData)(0x21000008U)) 
                                                                 >> 2U))]
                                                              : 0U))
                                                            : 0U))))))
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_out_prdata);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_out_prdata 
        = __Vtemp_h05a23b48__0;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    __Vtableidx7 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                << 7U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->reset)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt 
        = VysyxSoCFull__ConstPool__TABLE_h10c88e1c_0
        [__Vtableidx7];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    __Vtableidx11 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w) 
                      << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w) 
                                 << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset))));
    if ((1U & VysyxSoCFull__ConstPool__TABLE_h69a2ee77_0
         [__Vtableidx11])) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q 
            = VysyxSoCFull__ConstPool__TABLE_h4032e768_0
            [__Vtableidx11];
    }
    if ((2U & VysyxSoCFull__ConstPool__TABLE_h69a2ee77_0
         [__Vtableidx11])) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q 
            = VysyxSoCFull__ConstPool__TABLE_hc6114f20_0
            [__Vtableidx11];
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_rd_en_q 
        = ((IData)(vlSelf->reset) | (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)) 
                                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                         | (((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                             & (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_syn1_dly 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_syn1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    if (vlSelf->reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awsize_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bready_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rd_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_busy = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_sent = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_busy = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_busy = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_sent = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__sync = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pprot = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pwdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pstrb = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pwrite = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_paddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_sent = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_end_cyc = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstrb_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q = 0U;
    } else {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
                __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                - (IData)(1U)));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_push_w) 
             & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)))) {
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))
                    ? (0x20U | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q)) 
                                 << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arid_q)))
                    : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))
                        ? (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q)) 
                            << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awid_q))
                        : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w) 
                            << 5U) | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q)) 
                                       << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q)))));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt 
            = (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt);
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
            = (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt);
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count 
            = (0xfU & ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_r_fire) 
                                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire)))
                        ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))
                        : ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_r_fire) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire)))
                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count) 
                               - (IData)(1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))));
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr)));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_aw_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awsize_q = 2U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_busy = 1U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awsize_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_busy = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_w_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bready_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_busy = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstrb_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_wstrb_r;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bready_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_busy = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstrb_q = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rd_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_q 
                = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_end_cyc 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_start_cyc 
                   + (5ULL * (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt 
                              - vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_start_cyc)));
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_end_cyc = 0ULL;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid = 0U;
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_busy = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr_q = 0U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_busy = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr_q = 0U;
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_busy = 0U;
            }
        } else if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state) 
                             >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_valid = 0U;
                }
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_setup_flash) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_busy = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr_q 
                            = ((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr) 
                               - (IData)(0x30000000U));
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_busy = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_addr_q = 0U;
                }
            }
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x18U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_r)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_r)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss 
                    = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r);
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_sent = 1U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_sent = 0U;
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__addr;
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT____Vcellinp__MR__addr;
        }
        if (((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__next_state_r;
        }
        if ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 1U;
        } else if (((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                    ? 7U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                             ? 7U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                                      ? 7U : 1U)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q 
                = (IData)(((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q)));
        } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 2U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q 
                        = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__target_state_q))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q)
                            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q));
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 4U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                    = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                        ? 7U : 5U);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q 
                    = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q));
            }
        } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q 
                = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))
                    ? 3U : 7U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q));
        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q = 0U;
            if ((0x3cU != vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                if ((0x36U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 2U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q = 0U;
                } else if ((0x30U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 2U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q = 1U;
                } else if ((0x28U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q = 0U;
                } else if ((0x22U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q = 1U;
                } else if ((0x1aU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q = 0U;
                } else if ((0x14U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q = 1U;
                } else if ((0xaU == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q = 0U;
                } else if ((4U == vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_timer_q)) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q = 1U;
                }
            }
        }
        if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ready = 1U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (8U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                         >> 6U));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0x1cU == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_wr) 
             & (0x21000004U == (0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__sync 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata;
        }
        if ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)) 
              & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 1U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__w_tx_start) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pprot = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pwdata 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pstrb 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_pwrite 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__r_in_paddr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_ar_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arsize;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy = 1U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize_q = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_sent = 1U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_sent = 0U;
        }
        if ((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
            } else {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__axlen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q) 
                                - (IData)(1U)));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__axtype 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__axtype))) {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__Vfuncout 
                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__addr;
                } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__axtype))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__axlen))
                                              ? 0xfU
                                              : ((7U 
                                                  == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__axlen))
                                                  ? 0x1fU
                                                  : 0x3fU))));
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__Vfuncout 
                        = ((__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__addr 
                            & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__addr) 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__Vfuncout 
                        = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__addr);
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__32__Vfuncout;
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_sent = 1U;
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))) {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__axlen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__axtype 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awburst_q;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q 
                    = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wlast_q)));
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q) 
                                - (IData)(1U)));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awaddr_q;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__axtype))) {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__Vfuncout 
                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__addr;
                } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__axtype))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__axlen))
                                              ? 0xfU
                                              : ((7U 
                                                  == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__axlen))
                                                  ? 0x1fU
                                                  : 0x3fU))));
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__Vfuncout 
                        = ((__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__addr 
                            & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__addr) 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__Vfuncout 
                        = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__addr);
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__33__Vfuncout;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awaddr_q;
            }
        } else {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_sent = 0U;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))) {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__axlen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__axtype 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst_q;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q 
                    = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q));
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q) 
                                - (IData)(1U)));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__araddr_q;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__axtype))) {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__Vfuncout 
                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__addr;
                } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__axtype))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__axlen))
                                              ? 0xfU
                                              : ((7U 
                                                  == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__axlen))
                                                  ? 0x1fU
                                                  : 0x3fU))));
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__Vfuncout 
                        = ((__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__addr 
                            & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__addr) 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__Vfuncout 
                        = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__addr);
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__34__Vfuncout;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_write_data_q;
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
            VL_WRITEF("%c",8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i);
            Verilated::runFlushCallbacks();
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count) 
                            - (IData)(1U)));
        }
    } else if (VL_UNLIKELY((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop))))) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        VL_WRITEF("%c",8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i);
        Verilated::runFlushCallbacks();
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__w_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__w_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__w_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__w_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U] 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0U][2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[0U][3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1U][0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1U][1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1U][2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[1U][3U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8][__Vdlyvdim1__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q[1U] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v2) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v2] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3] 
            = ((~ ((IData)(1U) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3))) 
               & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q
               [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3]);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4] 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q
               [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4] 
               | (0xfU & ((IData)(1U) << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__wait_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__extra_accum;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc = 0ULL;
    } else {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_ar_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc = 0ULL;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt;
    vlSelf->externalPins_vga_vsync = (2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_vvalid 
        = ((0x23U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)) 
           & (0x203U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)));
    vlSelf->externalPins_vga_hsync = (0x60U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_hvalid 
        = ((0x90U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)) 
           & (0x310U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                         >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_done 
        = (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mi_ce_n 
        = ((IData)(vlSelf->reset) | (1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_valid_w 
        = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__accept_o 
        = (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ack_q 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((6U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q) 
                                                  >> 2U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    __Vtableidx8 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                            << 2U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (IData)(vlSelf->reset))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir 
        = VysyxSoCFull__ConstPool__TABLE_h4abec798_0
        [__Vtableidx8];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                            >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_fifo_accept_w 
        = (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_valid_w 
        = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_sent)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_busy));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->externalPins_uart_rx));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_syn1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_syn0));
    vlSelf->__Vtableidx5 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h05f4911a_0
        [vlSelf->__Vtableidx5];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                                 & (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))) 
                                                | ((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck))) 
                                               | (((~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)))) 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                      >> 8U)) 
                                                  & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip))))));
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__cmd = 
        (((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                    >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q))) 
          << 3U) | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__cmd = 
        ((8U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q)) 
                 << 3U) | (0xfffffff8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))) 
         | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (8U == 
                                             (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                                            >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))) 
                                         & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                               >> 7U))));
    vlSelf->externalPins_vga_valid = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_hvalid) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_vvalid));
    vlSelf->__VdfgTmp_ha17ae98a__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__dip_state = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__kbd_status = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0xeU;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err = 0U;
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata = 0U;
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata = 0U;
            } else {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state)))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata 
                            = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_w 
                                << 0x18U) | ((0xff0000U 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_w 
                                                 << 8U)) 
                                             | ((0xff00U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_w 
                                                    >> 8U)) 
                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_w 
                                                   >> 0x18U))));
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state) 
                             >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state)))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_resp_err = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_rdata = 0U;
                }
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbdelay_delayer__DOT__next_state;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__dip_state 
            = vlSelf->externalPins_gpio_in;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__kbd_status 
            = (((0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count)) 
                << 1U) | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_ack_w;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__xip_state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_r_fire 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
            & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                  >> 5U))) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy) 
                              & ((8U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_sent))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                  >> 5U)) & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT___asic_spi_sck = __Vdly__ysyxSoCFull__DOT___asic_spi_sck;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reserve = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wlast_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awaddr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__araddr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
    } else {
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_wr) 
              & (0xcU == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reserve 
                = (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata);
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_wr) 
             & (0U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_wr) 
             & (8U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                    = ((0xffffff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                    = ((0xffff00ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                    = ((0xff00ffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata));
            }
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                    = ((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_pwdata));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awid_q;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awburst_q;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arid_q;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst_q;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q 
                = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                         >> 0x19U));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)));
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0xaU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            }
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_w_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wlast_q = 1U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wlast_q = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_aw_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awaddr_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_addr_r;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awaddr_q = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_ar_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__araddr_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_araddr;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__araddr_q = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_sent)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_busy));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_sent)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_start_cyc = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_write_data_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_aw_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_start_cyc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_start_cyc = 0ULL;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_write_data_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdata_q;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x7fU 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                        }
                    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x3fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x1fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    }
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out) 
                                    >> 1U));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0xdU : ((4U == (7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                           ? 0x15U : 0x1dU));
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & ((0x10U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                              ? ((~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                              : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                            }
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->externalPins_gpio_out = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data 
        = (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl);
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_0 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__23__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                   >> 4U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_1 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__24__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                   >> 8U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_2 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__25__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                   >> 0xcU));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_3 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__26__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                   >> 0x10U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_4 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__27__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                   >> 0x14U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_5 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__28__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                   >> 0x18U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_6 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__29__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
           >> 0x1cU);
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_7 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__30__Vfuncout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_pulse 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_syn1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_syn1_dly));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_syn0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->externalPins_ps2_clk));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt_zero 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
           & ((0x400U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk 
        = (((0x200U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge)
             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge)) 
           & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_sck)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0 
        = ((0x80U & ((~ (IData)((0U != (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))))) 
                     << 7U)) | (0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
              & ((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q) 
                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q))) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__write_active_w 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q)) 
              & ((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count)) 
                 & ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_rd_q)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_hold_wr_q)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_q) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt 
              >= vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_end_cyc));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable 
        = ((~ (IData)(vlSelf->reset)) & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_w = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awid_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arid_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awburst_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdata_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__nstate;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_w 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_aw_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awid_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awburst_q = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q = 0U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awid_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awburst_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_ar_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arid_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arburst;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__ifu_req_can_grant)
                    ? 1U : 0U);
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arid_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q = 0U;
        }
        if (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
               & (0x14U == (0x1cU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_adr_r)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_we_r)) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_sel_r))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__wb_dat_r));
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_w_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdata_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_data_r;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdata_q = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0xcU == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_b_fire 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_sent) 
              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_q)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_sent))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wen 
        = (((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt)) 
            & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf) 
                   >> 1U)) & ((IData)(vlSelf->externalPins_ps2_data) 
                              & VL_REDXOR_32((0x1ffU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf) 
                                                 >> 2U)))))) 
           & ((0x20U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_pulse)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos 
        = (0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                        - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                           + (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 9U)))) : ((0x200U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                                  - (IData)(1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelf->__Vtableidx10 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter) 
                              << 3U) | (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state)) 
                                         << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__state)));
    if (VysyxSoCFull__ConstPool__TABLE_hb69924b4_0[vlSelf->__Vtableidx10]) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__nstate 
            = VysyxSoCFull__ConstPool__TABLE_h4346917a_0
            [vlSelf->__Vtableidx10];
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [4U] 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [5U] 
                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [6U] 
                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [7U] 
                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [8U] 
                                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [9U] 
                                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [0xaU] 
                                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [0xbU] 
                                                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xcU] 
                                                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xdU] 
                                                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (8U == 
                                             (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_out_paddr))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                                            >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_r_fire) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_b_fire) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                     >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0))));
    vlSelf->ysyxSoCFull__DOT___asic_spi_ss = (0xffU 
                                              & (~ 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss) 
                                                  & ((- (IData)(
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip) 
                                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                    >> 0xdU)))) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                                                       >> 0xdU)))))))));
    vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss 
        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss));
    vlSelf->__Vtableidx6 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_hccb3c341_0
        [vlSelf->__Vtableidx6];
    vlSelf->__Vtableidx9 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_he38796ec_0
        [vlSelf->__Vtableidx9];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 6U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    vlSelf->externalPins_uart_tx = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                             >> 4U) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__7\n"); );
    // Init
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__mask = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row0;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row0 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row3;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row3 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row1;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row2;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row2 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row0;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row0 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row3;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row3 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row1;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row2;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row2 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row0;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row0 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row3;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row3 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row1;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row2;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row2 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row0;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row0 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row3;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row3 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row1;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row1 = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row2;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row2 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1 = 0;
    SData/*12:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1 = 0;
    SData/*15:0*/ __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1;
    __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1 = 0;
    VlWide<256>/*8191:0*/ __Vtemp_h7a3908fb__0;
    VlWide<256>/*8191:0*/ __Vtemp_hb532d1aa__0;
    VlWide<256>/*8191:0*/ __Vtemp_h0b0bc1e5__0;
    VlWide<256>/*8191:0*/ __Vtemp_h24279f66__0;
    VlWide<256>/*8191:0*/ __Vtemp_h1376df4b__0;
    VlWide<256>/*8191:0*/ __Vtemp_h574f68a4__0;
    VlWide<256>/*8191:0*/ __Vtemp_hc9df2fe1__0;
    VlWide<256>/*8191:0*/ __Vtemp_h231d2005__0;
    VlWide<256>/*8191:0*/ __Vtemp_h2cc606e6__0;
    VlWide<256>/*8191:0*/ __Vtemp_h631e419c__0;
    VlWide<256>/*8191:0*/ __Vtemp_h0ca5af10__0;
    VlWide<256>/*8191:0*/ __Vtemp_h8c8e0d8a__0;
    VlWide<256>/*8191:0*/ __Vtemp_hdf0c67d6__0;
    VlWide<256>/*8191:0*/ __Vtemp_he31ae719__0;
    VlWide<256>/*8191:0*/ __Vtemp_h19cbe689__0;
    VlWide<256>/*8191:0*/ __Vtemp_h4a4fa0a7__0;
    VlWide<256>/*8191:0*/ __Vtemp_h4bae46b3__0;
    VlWide<256>/*8191:0*/ __Vtemp_h516c9403__0;
    VlWide<256>/*8191:0*/ __Vtemp_haac5f432__0;
    VlWide<256>/*8191:0*/ __Vtemp_hcee63015__0;
    VlWide<256>/*8191:0*/ __Vtemp_h70cdd770__0;
    VlWide<256>/*8191:0*/ __Vtemp_h217044e1__0;
    VlWide<256>/*8191:0*/ __Vtemp_h2fce6ec9__0;
    VlWide<256>/*8191:0*/ __Vtemp_h7480eff6__0;
    VlWide<256>/*8191:0*/ __Vtemp_h7c429362__0;
    VlWide<256>/*8191:0*/ __Vtemp_h28d3e185__0;
    VlWide<256>/*8191:0*/ __Vtemp_h94ee053d__0;
    VlWide<256>/*8191:0*/ __Vtemp_hf09b95c3__0;
    VlWide<256>/*8191:0*/ __Vtemp_hd1f43cce__0;
    VlWide<256>/*8191:0*/ __Vtemp_h484d71f9__0;
    VlWide<256>/*8191:0*/ __Vtemp_h0da9f702__0;
    VlWide<256>/*8191:0*/ __Vtemp_h3a67075b__0;
    VlWide<256>/*8191:0*/ __Vtemp_hf7222253__0;
    VlWide<256>/*8191:0*/ __Vtemp_h6a1af269__0;
    VlWide<256>/*8191:0*/ __Vtemp_h25383ba9__0;
    VlWide<256>/*8191:0*/ __Vtemp_h610c4d30__0;
    VlWide<256>/*8191:0*/ __Vtemp_h235a7dbb__0;
    VlWide<256>/*8191:0*/ __Vtemp_h4bcac9e9__0;
    VlWide<256>/*8191:0*/ __Vtemp_ha35e287a__0;
    VlWide<256>/*8191:0*/ __Vtemp_h0112e006__0;
    VlWide<256>/*8191:0*/ __Vtemp_ha6e5e0c7__0;
    VlWide<256>/*8191:0*/ __Vtemp_hed6b9d49__0;
    VlWide<256>/*8191:0*/ __Vtemp_hd416d34d__0;
    VlWide<256>/*8191:0*/ __Vtemp_h3f085f2a__0;
    VlWide<256>/*8191:0*/ __Vtemp_hf89e8eb4__0;
    VlWide<256>/*8191:0*/ __Vtemp_h81da477e__0;
    VlWide<256>/*8191:0*/ __Vtemp_h1a15a44a__0;
    VlWide<256>/*8191:0*/ __Vtemp_h8a97ecac__0;
    // Body
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__row_open;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__row_open;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__row_open;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__row_open;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row2 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row2;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row1 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row1;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row3 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row3;
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row0 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row0;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row2 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row2;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row1 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row1;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row3 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row3;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row0 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row0;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row2 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row2;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row1 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row1;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row3 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row3;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row0 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row0;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row2 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row2;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row1 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row1;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row3 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row3;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row0 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row0;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1 = 0U;
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank_is_open)) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h7a3908fb__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row3]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h7a3908fb__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_h7a3908fb__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__82__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row3;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst) 
                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_hb532d1aa__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_hb532d1aa__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_hb532d1aa__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__83__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank_is_open)) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h0b0bc1e5__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row2]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h0b0bc1e5__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_h0b0bc1e5__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__80__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row2;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst) 
                & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h24279f66__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h24279f66__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_h24279f66__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__81__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank_is_open)) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h1376df4b__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row1]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h1376df4b__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_h1376df4b__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__78__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row1;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h574f68a4__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h574f68a4__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_h574f68a4__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__79__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank_is_open)) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_hc9df2fe1__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row0]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_hc9df2fe1__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_hc9df2fe1__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__76__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row0;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h231d2005__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h231d2005__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_h231d2005__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__77__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank_is_open)) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h2cc606e6__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row3]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h2cc606e6__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_h2cc606e6__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__70__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row3;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst) 
                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h631e419c__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h631e419c__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_h631e419c__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__71__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank_is_open)) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h0ca5af10__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row2]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h0ca5af10__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_h0ca5af10__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__68__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row2;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst) 
                & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h8c8e0d8a__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h8c8e0d8a__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_h8c8e0d8a__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__69__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank_is_open)) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_hdf0c67d6__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row1]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_hdf0c67d6__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_hdf0c67d6__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__66__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row1;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_he31ae719__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_he31ae719__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_he31ae719__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__67__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank_is_open)) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h19cbe689__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row0]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h19cbe689__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_h19cbe689__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__64__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row0;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h4a4fa0a7__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h4a4fa0a7__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_h4a4fa0a7__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__65__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank_is_open)) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h4bae46b3__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row3]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h4bae46b3__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_h4bae46b3__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__58__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row3;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst) 
                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h516c9403__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h516c9403__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_h516c9403__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__59__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank_is_open)) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_haac5f432__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row2]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_haac5f432__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_haac5f432__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__56__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row2;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst) 
                & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_hcee63015__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_hcee63015__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_hcee63015__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__57__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank_is_open)) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h70cdd770__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row1]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h70cdd770__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_h70cdd770__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__54__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row1;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h217044e1__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h217044e1__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_h217044e1__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__55__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank_is_open)) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h2fce6ec9__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row0]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h2fce6ec9__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_h2fce6ec9__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__52__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row0;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h7480eff6__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h7480eff6__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_h7480eff6__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__53__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank_is_open)) 
         & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h7c429362__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row3]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h7c429362__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_h7c429362__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__46__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row3;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst) 
                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h28d3e185__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h28d3e185__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_h28d3e185__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__47__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank_is_open)) 
         & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h94ee053d__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row2]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h94ee053d__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_h94ee053d__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__44__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row2;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst) 
                & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_hf09b95c3__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_hf09b95c3__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_hf09b95c3__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__45__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank_is_open)) 
         & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_hd1f43cce__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row1]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_hd1f43cce__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_hd1f43cce__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__42__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row1;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h484d71f9__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h484d71f9__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_h484d71f9__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__43__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row;
    }
    if ((((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire) 
          & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank_is_open)) 
         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h0da9f702__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row0]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__old_data 
            = (0xffffU & (((0U == (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h0da9f702__0[
                                    (((IData)(0xfU) 
                                      + (0x1ff0U & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x10U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                     << 4U))))) 
                          | (__Vtemp_h0da9f702__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                                      >> 1U))] 
                             >> (0x10U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__40__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row0;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h3a67075b__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__old_data 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h3a67075b__0[
                                    (((IData)(0xfU) 
                                      + (0x1fffU & 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                          << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                                     << 4U))))) 
                          | (__Vtemp_h3a67075b__0[(0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                                          << 4U)))));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__41__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1 
            = (0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__cke_q) {
        if (vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bst_fire) {
            __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain = 0U;
        } else {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank_is_open))) {
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__burst_len))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__burst_len) 
                                     - (IData)(1U)));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain = 0U;
                }
            } else if (vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst) {
                __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx)));
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain) 
                                     - (IData)(1U)));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain = 0U;
                }
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank_is_open))) {
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__burst_len))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__burst_len) 
                                     - (IData)(1U)));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain = 0U;
                }
            } else if (vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst) {
                __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx)));
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain) 
                                     - (IData)(1U)));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain = 0U;
                }
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__read_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank_is_open))) {
                __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending = 1U;
                __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst = 0U;
                __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt 
                    = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__cas_lat;
                __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx = 0U;
                __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain 
                    = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__burst_len;
            } else if (vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending) {
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt 
                        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt) 
                                 - (IData)(1U)));
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst = 0U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst 
                        = (1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain));
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain) 
                                     - (IData)(1U)));
                }
            } else if (vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst) {
                __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx)));
                __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending = 0U;
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain) 
                                     - (IData)(1U)));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain = 0U;
                }
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__read_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank_is_open))) {
                __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending = 1U;
                __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst = 0U;
                __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt 
                    = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__cas_lat;
                __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx = 0U;
                __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain 
                    = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__burst_len;
            } else if (vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending) {
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt 
                        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt) 
                                 - (IData)(1U)));
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst = 0U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst 
                        = (1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain));
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain) 
                                     - (IData)(1U)));
                }
            } else if (vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst) {
                __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx)));
                __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending = 0U;
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain) 
                                     - (IData)(1U)));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain = 0U;
                }
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bst_fire) {
            __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx = 0U;
            __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain = 0U;
        } else {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank_is_open))) {
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__burst_len))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__burst_len) 
                                     - (IData)(1U)));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain = 0U;
                }
            } else if (vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst) {
                __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx)));
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain) 
                                     - (IData)(1U)));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain = 0U;
                }
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank_is_open))) {
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__burst_len))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__burst_len) 
                                     - (IData)(1U)));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain = 0U;
                }
            } else if (vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst) {
                __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx)));
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain) 
                                     - (IData)(1U)));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain = 0U;
                }
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__read_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank_is_open))) {
                __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending = 1U;
                __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst = 0U;
                __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt 
                    = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__cas_lat;
                __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx = 0U;
                __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain 
                    = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__burst_len;
            } else if (vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending) {
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt 
                        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt) 
                                 - (IData)(1U)));
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst = 0U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst 
                        = (1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain));
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain) 
                                     - (IData)(1U)));
                }
            } else if (vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst) {
                __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx)));
                __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending = 0U;
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain) 
                                     - (IData)(1U)));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain = 0U;
                }
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__read_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank_is_open))) {
                __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending = 1U;
                __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst = 0U;
                __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt 
                    = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__cas_lat;
                __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx = 0U;
                __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain 
                    = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__burst_len;
            } else if (vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending) {
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt 
                        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt) 
                                 - (IData)(1U)));
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst = 0U;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst 
                        = (1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain));
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain) 
                                     - (IData)(1U)));
                }
            } else if (vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst) {
                __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx)));
                __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending = 0U;
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst = 1U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain 
                        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain) 
                                     - (IData)(1U)));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain = 0U;
                }
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__lmr_fire) {
            vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__mode 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__mode 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
        } else {
            vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__mode 
                = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__mode;
            vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__mode 
                = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__mode;
        }
        if (vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__lmr_fire) {
            vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__mode 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
            vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__mode 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
        } else {
            vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__mode 
                = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__mode;
            vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__mode 
                = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__mode;
        }
        if (vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_fire) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
                        = (8U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
                        = (8U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row3 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row3 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
                        = (4U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
                        = (4U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open));
                }
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row2 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row2 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
                    = (2U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open));
                __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
                    = (2U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open));
            } else {
                __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
                    = (1U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open));
                __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
                    = (1U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open));
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row1 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row1 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                }
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row0 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row0 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                }
            }
        } else {
            if (vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__precharge_fire) {
                if ((0x400U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open = 0U;
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                        __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
                            = (7U & (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open));
                        __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
                            = (7U & (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open));
                    } else {
                        __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
                            = (0xbU & (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open));
                        __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
                            = (0xbU & (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open));
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
                        = (0xdU & (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
                        = (0xdU & (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
                        = (0xeU & (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
                        = (0xeU & (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open));
                }
            } else if (vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__refresh_fire) {
                __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open = 0U;
                __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open = 0U;
            } else {
                __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
                    = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__row_open;
                __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
                    = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__row_open;
            }
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__precharge_fire)))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__refresh_fire)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row2 
                        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row2;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row1 
                        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row1;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row3 
                        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row3;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row0 
                        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row0;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row2 
                        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row2;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row1 
                        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row1;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row3 
                        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row3;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row0 
                        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row0;
                }
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_fire) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
                        = (8U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
                        = (8U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row3 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row3 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
                        = (4U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
                        = (4U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open));
                }
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row2 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row2 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
                    = (2U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open));
                __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
                    = (2U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open));
            } else {
                __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
                    = (1U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open));
                __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
                    = (1U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open));
            }
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row1 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row1 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                }
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row0 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row0 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                }
            }
        } else {
            if (vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__precharge_fire) {
                if ((0x400U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open = 0U;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open = 0U;
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                        __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
                            = (7U & (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open));
                        __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
                            = (7U & (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open));
                    } else {
                        __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
                            = (0xbU & (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open));
                        __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
                            = (0xbU & (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open));
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
                        = (0xdU & (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
                        = (0xdU & (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
                        = (0xeU & (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
                        = (0xeU & (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open));
                }
            } else if (vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__refresh_fire) {
                __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open = 0U;
                __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open = 0U;
            } else {
                __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
                    = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__row_open;
                __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
                    = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__row_open;
            }
            if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__precharge_fire)))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__refresh_fire)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row2 
                        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row2;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row1 
                        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row1;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row3 
                        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row3;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row0 
                        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row0;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row2 
                        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row2;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row1 
                        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row1;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row3 
                        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row3;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row0 
                        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row0;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bst_fire)))) {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__read_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank_is_open))) {
                vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_row 
                    = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row_sel;
                vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_bank 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_base_col 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__read_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank_is_open))) {
                vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_row 
                    = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row_sel;
                vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_bank 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_base_col 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank_is_open))) {
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__burst_len))) {
                    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_base_col 
                        = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row 
                        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row_sel;
                    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_bank 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__write_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank_is_open))) {
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__burst_len))) {
                    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_base_col 
                        = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row 
                        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row_sel;
                    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_bank 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bst_fire)))) {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__read_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank_is_open))) {
                vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_row 
                    = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row_sel;
                vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_bank 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_base_col 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__read_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank_is_open))) {
                vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_row 
                    = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row_sel;
                vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_bank 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_base_col 
                    = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank_is_open))) {
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__burst_len))) {
                    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_base_col 
                        = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row 
                        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row_sel;
                    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_bank 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__write_fire) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank_is_open))) {
                if ((1U < (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__burst_len))) {
                    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_base_col 
                        = (0x1ffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q));
                    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row 
                        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row_sel;
                    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_bank 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q;
                }
            }
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__mode 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__mode;
        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__mode 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__mode;
        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__mode 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__mode;
        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__mode 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__mode;
        __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__row_open;
        __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__row_open;
        __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__row_open;
        __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__row_open;
        __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row2 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row2;
        __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row1 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row1;
        __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row3 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row3;
        __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row0;
        __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row2 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row2;
        __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row1 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row1;
        __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row3 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row3;
        __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row0;
        __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row2 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row2;
        __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row1 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row1;
        __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row3 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row3;
        __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row0;
        __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row2 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row2;
        __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row1 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row1;
        __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row3 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row3;
        __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row0;
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain 
        = __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_remain;
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx 
        = __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx;
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain 
        = __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_remain;
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx 
        = __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx;
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain 
        = __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_remain;
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx 
        = __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain 
        = __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_remain;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx 
        = __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx;
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain 
        = __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_remain;
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx 
        = __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx;
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending 
        = __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending;
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst 
        = __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst;
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt 
        = __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt;
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain 
        = __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_remain;
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx 
        = __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx;
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending 
        = __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending;
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst 
        = __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst;
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt 
        = __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt;
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain 
        = __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_remain;
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx 
        = __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx;
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending 
        = __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending;
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst 
        = __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst;
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt 
        = __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain 
        = __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_remain;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx 
        = __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending 
        = __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst 
        = __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt 
        = __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt;
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
        = __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open;
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
        = __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open;
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
        = __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
        = __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open;
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row3 
        = __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row3;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank3
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank3
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row2 
        = __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row2;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank2
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank2
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row1 
        = __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row1;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank1
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank1
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst 
        = __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst;
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row0 
        = __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row0;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank0
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank0
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row3 
        = __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row3;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank3
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank3
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row2 
        = __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row2;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank2
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank2
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row1 
        = __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row1;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank1
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank1
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst 
        = __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst;
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row0 
        = __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row0;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank0
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank0
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row3 
        = __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row3;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank3
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank3
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row2 
        = __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row2;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank2
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank2
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row1 
        = __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row1;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank1
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank1
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst 
        = __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst;
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row0 
        = __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row0;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank0
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank0
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row3 
        = __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row3;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank3
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank3
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row2 
        = __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row2;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank2
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank2
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row1 
        = __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row1;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank1
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank1
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst 
        = __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row0 
        = __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row0;
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank0
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0], __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0);
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1) {
        VL_ASSIGNSEL_WI(8192,16,(IData)(__Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1), 
                        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank0
                        [__Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1], __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1);
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__dq_oe 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_pending) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_lat_cnt))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_burst));
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__dq_oe 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_pending) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_lat_cnt))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_burst));
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__dq_oe 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_pending) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_lat_cnt))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_burst));
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__dq_oe 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_pending) 
            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_lat_cnt))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_burst));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_cas_lat__73__cl 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__mode) 
                 >> 4U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_cas_lat__73__Vfuncout 
        = ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_cas_lat__73__cl))
            ? 2U : ((3U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_cas_lat__73__cl))
                     ? 3U : 2U));
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__cas_lat 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_cas_lat__73__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_cas_lat__61__cl 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__mode) 
                 >> 4U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_cas_lat__61__Vfuncout 
        = ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_cas_lat__61__cl))
            ? 2U : ((3U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_cas_lat__61__cl))
                     ? 3U : 2U));
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__cas_lat 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_cas_lat__61__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_cas_lat__49__cl 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__mode) 
                 >> 4U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_cas_lat__49__Vfuncout 
        = ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_cas_lat__49__cl))
            ? 2U : ((3U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_cas_lat__49__cl))
                     ? 3U : 2U));
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__cas_lat 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_cas_lat__49__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_cas_lat__37__cl 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__mode) 
                 >> 4U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_cas_lat__37__Vfuncout 
        = ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_cas_lat__37__cl))
            ? 2U : ((3U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_cas_lat__37__cl))
                     ? 3U : 2U));
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__cas_lat 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_cas_lat__37__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__72__bl 
        = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__mode));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__72__Vfuncout 
        = ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__72__bl))
            ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__72__bl))
                ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__72__bl))
                    ? 0x200U : 1U) : 1U) : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__72__bl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__72__bl))
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__72__bl))
                                                 ? 2U
                                                 : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__burst_len 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__72__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__60__bl 
        = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__mode));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__60__Vfuncout 
        = ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__60__bl))
            ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__60__bl))
                ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__60__bl))
                    ? 0x200U : 1U) : 1U) : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__60__bl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__60__bl))
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__60__bl))
                                                 ? 2U
                                                 : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__burst_len 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__60__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__48__bl 
        = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__mode));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__48__Vfuncout 
        = ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__48__bl))
            ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__48__bl))
                ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__48__bl))
                    ? 0x200U : 1U) : 1U) : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__48__bl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__48__bl))
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__48__bl))
                                                 ? 2U
                                                 : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__burst_len 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__48__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__36__bl 
        = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__mode));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__36__Vfuncout 
        = ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__36__bl))
            ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__36__bl))
                ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__36__bl))
                    ? 0x200U : 1U) : 1U) : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__36__bl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__36__bl))
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__36__bl))
                                                 ? 2U
                                                 : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__burst_len 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__36__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__base 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__75__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__base 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__74__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__base 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__63__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__base 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__62__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__base 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__51__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__base 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__50__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__base 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__39__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__base 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__38__Vfuncout;
    VL_ASSIGN_W(8192,__Vtemp_hf7222253__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank3
                [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_row]);
    VL_ASSIGN_W(8192,__Vtemp_h6a1af269__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank2
                [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_row]);
    VL_ASSIGN_W(8192,__Vtemp_h25383ba9__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank1
                [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_row]);
    VL_ASSIGN_W(8192,__Vtemp_h610c4d30__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank0
                [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_row]);
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_word 
        = (0xffffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_bank))
                       ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_bank))
                           ? (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_hf7222253__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_hf7222253__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                              << 4U))))
                           : (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_h6a1af269__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_h6a1af269__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                              << 4U)))))
                       : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_bank))
                           ? (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_h25383ba9__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_h25383ba9__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                              << 4U))))
                           : (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_h610c4d30__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_h610c4d30__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col) 
                                              << 4U)))))));
    VL_ASSIGN_W(8192,__Vtemp_h235a7dbb__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank3
                [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_row]);
    VL_ASSIGN_W(8192,__Vtemp_h4bcac9e9__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank2
                [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_row]);
    VL_ASSIGN_W(8192,__Vtemp_ha35e287a__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank1
                [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_row]);
    VL_ASSIGN_W(8192,__Vtemp_h0112e006__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank0
                [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_row]);
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_word 
        = (0xffffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_bank))
                       ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_bank))
                           ? (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_h235a7dbb__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_h235a7dbb__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                              << 4U))))
                           : (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_h4bcac9e9__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_h4bcac9e9__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                              << 4U)))))
                       : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_bank))
                           ? (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_ha35e287a__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_ha35e287a__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                              << 4U))))
                           : (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_h0112e006__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_h0112e006__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col) 
                                              << 4U)))))));
    VL_ASSIGN_W(8192,__Vtemp_ha6e5e0c7__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank3
                [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_row]);
    VL_ASSIGN_W(8192,__Vtemp_hed6b9d49__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank2
                [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_row]);
    VL_ASSIGN_W(8192,__Vtemp_hd416d34d__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank1
                [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_row]);
    VL_ASSIGN_W(8192,__Vtemp_h3f085f2a__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank0
                [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_row]);
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_word 
        = (0xffffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_bank))
                       ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_bank))
                           ? (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_ha6e5e0c7__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_ha6e5e0c7__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                              << 4U))))
                           : (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_hed6b9d49__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_hed6b9d49__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                              << 4U)))))
                       : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_bank))
                           ? (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_hd416d34d__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_hd416d34d__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                              << 4U))))
                           : (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_h3f085f2a__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_h3f085f2a__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col) 
                                              << 4U)))))));
    VL_ASSIGN_W(8192,__Vtemp_hf89e8eb4__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank3
                [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_row]);
    VL_ASSIGN_W(8192,__Vtemp_h81da477e__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank2
                [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_row]);
    VL_ASSIGN_W(8192,__Vtemp_h1a15a44a__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank1
                [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_row]);
    VL_ASSIGN_W(8192,__Vtemp_h8a97ecac__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank0
                [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_row]);
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_word 
        = (0xffffU & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_bank))
                       ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_bank))
                           ? (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_hf89e8eb4__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_hf89e8eb4__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                              << 4U))))
                           : (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_h81da477e__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_h81da477e__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                              << 4U)))))
                       : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_bank))
                           ? (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_h1a15a44a__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_h1a15a44a__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                              << 4U))))
                           : (((0U == (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                                << 4U)))
                                ? 0U : (__Vtemp_h8a97ecac__0[
                                        (((IData)(0xfU) 
                                          + (0x1fffU 
                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                             << 4U))))) 
                              | (__Vtemp_h8a97ecac__0[
                                 (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                           >> 1U))] 
                                 >> (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col) 
                                              << 4U)))))));
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__dq_out 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__dq_oe)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_word)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__dq_out 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__dq_oe)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_word)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__dq_out 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__dq_oe)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_word)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__dq_out 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__dq_oe)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_word)
            : 0U);
}
