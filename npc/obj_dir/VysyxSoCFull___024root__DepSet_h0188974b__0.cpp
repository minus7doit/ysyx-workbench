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
    vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wen 
        = (((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__bit_cnt)) 
            & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf) 
                   >> 1U)) & ((IData)(vlSelf->externalPins_ps2_data) 
                              & VL_REDXOR_32((0x1ffU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_data_buf) 
                                                 >> 2U)))))) 
           & ((0x20U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_pulse)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_hc1925006__0));
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
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)) & (8U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)) & (0x14U == (0x1cU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))));
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
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt;
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt 
        = vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt;
    if (vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_done) {
        if (vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_en) {
            __Vdly__ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt)));
        }
    } else {
        __Vdly__ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__r_miso = 
        (1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
               | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_done)) 
                  | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_en)) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__rx_shift) 
                        >> (7U & (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt)))))));
    vlSelf->ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt 
        = __Vdly__ysyxSoCFull__DOT__bitrev__DOT__tx_bit_cnt;
}

extern const VlUnpacked<CData/*0:0*/, 32> VysyxSoCFull__ConstPool__TABLE_hab15bf1d_0;
extern const VlUnpacked<CData/*1:0*/, 32> VysyxSoCFull__ConstPool__TABLE_h108847db_0;
extern const VlUnpacked<CData/*0:0*/, 512> VysyxSoCFull__ConstPool__TABLE_hb3d29b7b_0;
extern const VlUnpacked<CData/*1:0*/, 512> VysyxSoCFull__ConstPool__TABLE_hff8effc1_0;
extern const VlUnpacked<CData/*0:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h4e246549_0;
extern const VlUnpacked<CData/*0:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h5f11f2f1_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__4(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__4\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__funct3;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__funct3 = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__data;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__offset;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__offset = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__funct3;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__funct3 = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__rdata;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__rdata = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__offset;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__offset = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low = 0;
    IData/*31:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state = 0;
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
    CData/*6:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 = 0;
    CData/*6:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 = 0;
    CData/*5:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 = 0;
    CData/*6:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 = 0;
    CData/*5:0*/ __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1;
    __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 = 0;
    IData/*31:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt = 0;
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
    VlWide<4>/*127:0*/ __Vtemp_h74433124__0;
    VlWide<4>/*127:0*/ __Vtemp_h43ab938e__0;
    VlWide<4>/*127:0*/ __Vtemp_h7341392a__0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc;
    __Vtableidx4 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_r_fire) 
                     << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_ar_fire) 
                                << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state) 
                                           << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))));
    if (VysyxSoCFull__ConstPool__TABLE_hab15bf1d_0[__Vtableidx4]) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__clint_state 
            = VysyxSoCFull__ConstPool__TABLE_h108847db_0
            [__Vtableidx4];
    }
    __Vtableidx1 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rlast) 
                     << 8U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_r_fire) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_ar_fire) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cpu_ar_fire) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush) 
                                                     << 1U) 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset))))))))));
    if (VysyxSoCFull__ConstPool__TABLE_hb3d29b7b_0[__Vtableidx1]) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state 
            = VysyxSoCFull__ConstPool__TABLE_hff8effc1_0
            [__Vtableidx1];
    }
    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)))) {
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush)))) {
            if ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_r_fire)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__refill_drop_q)))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q)))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt) {
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata;
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 = 1U;
                        __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 = 0x20U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q;
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__tag_q;
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0 = 1U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q;
                    } else {
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata;
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 = 1U;
                        __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 = 0U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q;
                    }
                }
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt) {
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata;
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 = 1U;
                        __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 = 0x20U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q;
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__tag_q;
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0 = 1U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q;
                    } else {
                        __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata;
                        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 = 1U;
                        __Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 = 0U;
                        __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q;
                    }
                }
            }
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_reg_wen 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fire) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush))) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_reg_wen) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_effective_exc_valid)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fire) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_finish_sim 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)) 
           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fire) 
               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_finish_sim)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_clint_rdata = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc = 0x30000000U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__r_rid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__arvalid_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ecall = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fencei = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__req_outstanding = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_is_csr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_status = 0x1800U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_pc = 0x30000000U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__w_done_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_valid_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__aw_done_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct7 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mret = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ebreak = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_csr_src1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_inst = 0x13U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_opcode = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_read = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_write = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_cause = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__w_done_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__aw_done_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_data_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_tval = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_rd = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_wdata = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_busy = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_access_busy = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__tag_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_tvec = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_epc = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_csr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ebreak = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_csr_src1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_inst = 0x13U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_reg_wen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_read = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_write = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_code = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_code_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_store_data = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_tval = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_tval_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_finish_sim = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_rd = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_wb_sel = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_data_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_pc = 0x30000000U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_inst = 0x13U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_reg_wen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_code = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_tval = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__addr_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_wb_sel = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__offset_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__funct3_r = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc = 0x30000000U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_pc = 0x30000000U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_pc = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst = 0x13U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__req_pc = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_inst = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_data = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_data_buf = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__offset_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r = 0U;
    } else {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low 
            = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low);
        if ((0xffffffffU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low)) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi 
                = ((IData)(1U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_busy) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles 
                = (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles);
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
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cpu_ar_fire) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q 
                = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[
                         (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                >> 8U))] >> (0x1fU 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                                >> 3U))));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_busy = 1U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_access_busy) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles 
                = (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_tvec;
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_valid) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_cause 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_code;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_tval 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_tval;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_cause 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_code_r;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_tval 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_tval_r;
            }
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_epc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_pc;
        } else {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret_flush) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_epc;
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_flush) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_dnpc;
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_flush) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                    = ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc);
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__id_fire) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
                    = ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_pc);
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__csr_wen) {
                if ((0x300U != (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))) {
                    if ((0x305U != (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))) {
                        if ((0x341U != (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))) {
                            if ((0x342U == (0xfffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))) {
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_cause 
                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__csr_wdata;
                            }
                            if ((0x342U != (0xfffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))) {
                                if ((0x343U == (0xfffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))) {
                                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_tval 
                                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__csr_wdata;
                                }
                            }
                        }
                        if ((0x341U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))) {
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_epc 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__csr_wdata;
                        }
                    }
                }
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_ar_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__ar_to_clint;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_r_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__rd_sel_clint = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_aw_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__aw_to_clint;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_xbar__DOT__wr_sel_clint = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret_flush))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_is_csr = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ebreak = 0U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_allowin) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fire))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_is_csr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_csr;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ebreak 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ebreak;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_allowin) 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fire)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_is_csr = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ebreak = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush)))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__csr_wen) {
                if ((0x300U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_status 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__csr_wdata;
                }
                if ((0x300U != (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))) {
                    if ((0x305U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_tvec 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__csr_wdata;
                    }
                }
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fire) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_pc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_pc;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_inst 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_inst;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_inst = 0x13U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret_flush))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_read = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_write = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_inst = 0x13U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_reg_wen = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_valid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_finish_sim = 0U;
        } else {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_allowin) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fire))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_read 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_read;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_write 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_write;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_reg_wen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_reg_wen;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_valid 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_finish_sim 
                    = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid)) 
                       & ((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode)) 
                          & ((1U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3)))));
            } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_allowin) 
                        & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fire)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_read = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_write = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_reg_wen = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_valid = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_finish_sim = 0U;
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_allowin) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fire) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_inst 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_inst;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_inst = 0x13U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid = 0U;
                }
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fire) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_rd 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_rd;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_wdata 
                = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_wb_sel))
                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_wb_sel))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result)
                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_wb_sel))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_data_r
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result));
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_rd = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_wdata = 0U;
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__w_done_r = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_valid_r 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_misalign) 
                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_misalign));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__aw_done_r = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_code_r 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_misalign)
                    ? 4U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_misalign)
                             ? 6U : 0U));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_tval_r 
                = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_misalign) 
                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_misalign))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result
                    : 0U);
        } else {
            if (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__w_fire))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__w_done_r = 1U;
            }
            if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__r_fire))) {
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__ifu_rresp))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_valid_r = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_code_r = 5U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_tval_r 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__addr_r;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_valid_r = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_code_r = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_tval_r = 0U;
                }
            } else if (((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state)) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__b_fire))) {
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_valid_r = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_code_r = 7U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_tval_r 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__addr_r;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_valid_r = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_code_r = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_tval_r = 0U;
                }
            }
            if (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__aw_fire))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__aw_done_r = 1U;
            }
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__w_done_r = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__aw_done_r = 0U;
        } else {
            if (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_w_fire))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__w_done_r = 1U;
            }
            if (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__m_aw_fire))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__aw_done_r = 1U;
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__start_store) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_misalign)))) {
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__offset 
                = (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result);
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_store_data;
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__funct3 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3;
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__Vfuncout 
                = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__funct3))
                    ? ((0x1fU >= ((IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__offset) 
                                  << 3U)) ? ((0xffU 
                                              & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__data) 
                                             << ((IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__offset) 
                                                 << 3U))
                        : 0U) : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__funct3))
                                  ? ((0x1fU >= ((IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__offset) 
                                                << 3U))
                                      ? ((0xffffU & __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__data) 
                                         << ((IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__offset) 
                                             << 3U))
                                      : 0U) : ((2U 
                                                == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__funct3))
                                                ? __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__data
                                                : 0U)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_data_r 
                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wdata__9__Vfuncout;
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret_flush))))) {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_allowin) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fire))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_csr_src1 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_csr_src1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_opcode 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_code 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_code;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_store_data 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_tval 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_tval;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_rd 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_wb_sel 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_wb_sel;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm;
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_allowin) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fire) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_pc 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush)))) {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_allowin) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_rdata1;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1 
                    = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                >> 0xfU));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2 
                    = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                >> 0x14U));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct7 
                    = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                       >> 0x19U);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_csr_src1 
                    = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_csr_imm_sel)
                        ? (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                    >> 0xfU)) : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rf_rdata1);
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_illegal_inst) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_code = 2U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_tval 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_code = 0xbU;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_tval = 0U;
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data 
                    = ((0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                        >> 0x14U)))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_rf__DOT__rf
                       [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                  >> 0x14U))] : 0U);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode 
                    = (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst);
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd 
                    = (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                >> 7U));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_wb_sel 
                    = ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst))
                        ? 1U : (((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)))
                                 ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__is_csr_inst)
                                          ? 3U : 0U)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_imm;
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_allowin) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_pc;
                }
            }
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
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cpu_ar_fire) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[(3U 
                                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                                                                >> 8U))] 
                = (((~ ((IData)(1U) << (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                                 >> 3U)))) 
                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__lru_bit[
                    (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                           >> 8U))]) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit0) 
                                        << (0x1fU & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                             >> 3U))));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__arvalid_r = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ecall = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fencei = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_valid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__req_outstanding = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[0U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[1U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[2U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[3U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[0U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[1U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[2U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[3U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mret = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_access_busy = 0U;
        } else {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__start_fetch) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__arvalid_r = 1U;
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cpu_ar_fire) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__arvalid_r = 0U;
            }
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_allowin) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ecall 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ecall;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fencei 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fencei;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mret 
                    = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_haf50de25__0) 
                       & (0x302U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                     >> 0x14U)));
            } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_allowin) 
                        & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ecall = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fencei = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mret = 0U;
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_valid = 1U;
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__id_fire) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_valid = 0U;
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cpu_ar_fire) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__req_outstanding = 1U;
            } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__req_outstanding = 0U;
            }
            if ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_r_fire)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__refill_drop_q)))) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q) 
                                                                                >> 5U)] 
                            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[
                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q) 
                                >> 5U)] | ((IData)(1U) 
                                           << (0x1fU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q))));
                    }
                }
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q)))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q) 
                                                                                >> 5U)] 
                            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[
                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q) 
                                >> 5U)] | ((IData)(1U) 
                                           << (0x1fU 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q))));
                    }
                }
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cpu_ar_fire) {
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
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_access_busy = 1U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_access_busy = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__r_fire) {
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__offset 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__offset_r;
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__rdata 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata;
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__funct3 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__funct3_r;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__shifted 
                = ((0x1fU >= ((IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__offset) 
                              << 3U)) ? (__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__rdata 
                                         >> ((IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__offset) 
                                             << 3U))
                    : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__load_byte 
                = (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__shifted);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__load_half 
                = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__shifted);
            __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__Vfuncout 
                = ((4U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__funct3))
                    ? ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__funct3))
                        ? 0U : ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__funct3))
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__load_half)
                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__load_byte)))
                    : ((2U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__funct3))
                        ? ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__funct3))
                            ? 0U : __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__rdata)
                        : ((1U & (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__funct3))
                            ? (((- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__load_half) 
                                                  >> 0xfU)))) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__load_half))
                            : (((- (IData)((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__load_byte) 
                                                  >> 7U)))) 
                                << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__Vstatic__load_byte)))));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_data_r 
                = __Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_load_data__10__Vfuncout;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state_next;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__capture_req) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__addr_r 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__offset_r 
                = (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__funct3_r 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3;
        }
        if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret_flush))))) {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_allowin) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fire))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3;
            }
        }
        if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush)))) {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_allowin) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3 
                    = (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                             >> 0xcU));
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_csr = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ebreak = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_read = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_write = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_inst = 0x13U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_reg_wen = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_pc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst = 0x13U;
        } else {
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_allowin) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_csr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__is_csr_inst;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ebreak 
                    = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_haf50de25__0) 
                       & (1U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                 >> 0x14U)));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_read 
                    = (3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_write 
                    = (0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_reg_wen 
                    = ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                       | ((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                          | ((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                             | ((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                | ((0x17U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                   | ((0x6fU == (0x7fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                      | ((0x67U == 
                                          (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__is_csr_inst))))))));
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid 
                    = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_illegal_inst) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ecall));
            } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_allowin) 
                        & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_is_csr = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_ebreak = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_read = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mem_write = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_reg_wen = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid = 0U;
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_allowin) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_inst 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_inst = 0x13U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid = 0U;
                }
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_id_ready) {
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__id_fire) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid = 1U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_pc 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_pc;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_inst;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid = 0U;
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst = 0x13U;
                }
            }
        }
        if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_pc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__req_pc;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_inst 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_data;
        }
        if ((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cpu_ar_fire))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_data 
                = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit0)
                    ? ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r)
                        ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0
                                   [(0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                              >> 3U))] 
                                   >> 0x20U)) : (IData)(
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0
                                                        [
                                                        (0x7fU 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                                            >> 3U))]))
                    : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r)
                        ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1
                                   [(0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                              >> 3U))] 
                                   >> 0x20U)) : (IData)(
                                                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1
                                                        [
                                                        (0x7fU 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                                            >> 3U))])));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid = 1U;
        } else if (((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_r_fire)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rlast)) 
                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__refill_drop_q)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_data 
                = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__offset_q))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_data_buf);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid = 1U;
        } else {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_data = 0U;
            }
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cpu_r_fire) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid = 0U;
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cpu_ar_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__tag_q 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                   >> 0xaU);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__set_q 
                = (0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                            >> 3U));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__req_pc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__offset_q 
                = (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r);
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_ar_fire) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_data_buf = 0U;
        } else if (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_r_fire))) {
            if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt = 0U;
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt = 1U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_data_buf 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rdata;
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__start_fetch) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_req_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_hit_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_miss_penalty_cycles;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_hi;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_clint__DOT__mtime_low;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__ic_total_access_cycles;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1__v0;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h9a63dc5f__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_reg_wen) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__replace_way_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hb1b1c1d5__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_reg_wen) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_effective_exc_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_exc_valid) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__exc_valid_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata 
        = ((0x300U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_status
            : ((0x305U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_tvec
                : ((0x341U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_epc
                    : ((0x342U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_cause
                        : ((0x343U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))
                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__m_tval
                            : ((0xf11U == (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))
                                ? 0x79737978U : ((0xf12U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_imm))
                                                  ? 0x16fe3b5U
                                                  : 0xffffffffU)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT____VdfgTmp_h9a35c2ed__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__w_done_r)) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__aw_done_r)) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready_go 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid)) 
                 | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_read) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_write))) 
                    | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h371a3f73__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_reg_wen) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wstrb__11__offset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__offset_r;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wstrb__11__funct3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__funct3_r;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wstrb__11__Vfuncout 
        = (0xfU & ((0U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wstrb__11__funct3))
                    ? ((IData)(1U) << (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wstrb__11__offset))
                    : ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wstrb__11__funct3))
                        ? ((IData)(3U) << (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wstrb__11__offset))
                        : ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wstrb__11__funct3))
                            ? 0xfU : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wstrb__11__Vfuncout;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__start_load 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT____VdfgTmp_h9a35c2ed__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_read));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__start_store 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT____VdfgTmp_h9a35c2ed__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_mem_write));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fire 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready_go));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_allowin 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_valid)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_ready_go)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fire) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_effective_exc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__csr_wdata 
        = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3))
            ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3))
                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata 
                   & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_csr_src1))
                : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata 
                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_csr_src1))
            : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_csr_src1
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr_rdata));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_csr__DOT__csr_wen 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_fire) 
            & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_effective_exc_valid)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_is_csr))) 
           & ((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_opcode)) 
              & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3)) 
                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3)) 
                    | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3)) 
                       | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3)) 
                          | ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3)) 
                             | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3)))))))));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wmask__13__funct3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__funct3_r;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wmask__13__Vfuncout 
        = ((0U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wmask__13__funct3))
            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wmask__13__funct3))
                     ? 3U : ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wmask__13__funct3))
                              ? 0xfU : 0U)));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wmask__12__funct3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wmask__12__Vfuncout 
        = ((0U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wmask__12__funct3))
            ? 1U : ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wmask__12__funct3))
                     ? 3U : ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wmask__12__funct3))
                              ? 0xfU : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wmask 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__state))
            ? (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wmask__12__Vfuncout)
            : (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__gen_store_wmask__13__Vfuncout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__addr_misalign 
        = ((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3)) 
             | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3))) 
            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result) 
           | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_funct3)) 
              & (0U != (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_alu_result))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fire 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_allowin));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_misalign 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__start_store) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__addr_misalign));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_misalign 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__start_load) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__addr_misalign));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret_flush 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fire) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_mret));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_flush 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fire) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fencei)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_allowin 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_valid)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_allowin)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT____VdfgExtracted_h45d4293e__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__load_misalign) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__store_misalign));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data = 0U;
    if ((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data 
            = ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                ? ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                    ? ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                        ? 0xffffffffU : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                          ? 0xffffffffU
                                          : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                                  ? 0U
                                                  : 0xffffffffU)
                                              : 0xffffffffU)))
                    : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                        ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                            ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                    ? ((IData)(4U) 
                                       + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc)
                                    : 0xffffffffU) : 0xffffffffU)
                            : 0xffffffffU) : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                               ? ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc)
                                                    : 0xffffffffU)
                                                   : 0xffffffffU)
                                               : 0xffffffffU)))
                : 0xffffffffU);
    } else if ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))) {
        if ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data = 0xffffffffU;
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data 
                    = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm
                            : 0xffffffffU) : 0xffffffffU);
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))) {
                    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))) {
                        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))) {
                            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))) {
                                vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_remu__1__b 
                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data;
                                vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_remu__1__a 
                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data;
                                vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_remu__1__Vfuncout 
                                    = ((0U == vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_remu__1__b)
                                        ? vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_remu__1__a
                                        : VL_MODDIV_III(32, vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_remu__1__a, vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_remu__1__b));
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data 
                                    = ((0U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data)
                                        : ((1U == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                            ? vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_remu__1__Vfuncout
                                            : 0xffffffffU));
                            } else {
                                vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_rem__2__b 
                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data;
                                vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_rem__2__a 
                                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data;
                                vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_rem__2__Vfuncout 
                                    = ((0U == vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_rem__2__b)
                                        ? vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_rem__2__a
                                        : (((0x80000000U 
                                             == vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_rem__2__a) 
                                            & (0xffffffffU 
                                               == vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_rem__2__b))
                                            ? 0U : 
                                           VL_MODDIVS_III(32, vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_rem__2__a, vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_rem__2__b)));
                                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data 
                                    = ((0U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                        ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                           | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data)
                                        : ((1U == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                            ? vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_rem__2__Vfuncout
                                            : 0xffffffffU));
                            }
                        } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))) {
                            vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_divu__3__b 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data;
                            vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_divu__3__a 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data;
                            vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_divu__3__Vfuncout 
                                = ((0U == vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_divu__3__b)
                                    ? 0xffffffffU : 
                                   VL_DIV_III(32, vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_divu__3__a, vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_divu__3__b));
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data 
                                = ((0U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                       >> (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data))
                                    : ((0x20U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                        ? VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data, 
                                                         (0x1fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data))
                                        : ((1U == (0x7fU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                            ? vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_divu__3__Vfuncout
                                            : 0xffffffffU)));
                        } else {
                            vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_div__4__b 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data;
                            vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_div__4__a 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data;
                            vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_div__4__Vfuncout 
                                = ((0U == vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_div__4__b)
                                    ? 0xffffffffU : 
                                   (((0x80000000U == vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_div__4__a) 
                                     & (0xffffffffU 
                                        == vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_div__4__b))
                                     ? 0x80000000U : 
                                    VL_DIVS_III(32, vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_div__4__a, vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_div__4__b)));
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data 
                                = ((0U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data)
                                    : ((1U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                        ? vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__rv_div__4__Vfuncout
                                        : 0xffffffffU));
                        }
                    } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))) {
                        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))) {
                            vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_uu__5__b 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data;
                            vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_uu__5__a 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_uu__Vstatic__p 
                                = ((QData)((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_uu__5__a)) 
                                   * (QData)((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_uu__5__b)));
                            vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_uu__5__Vfuncout 
                                = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_uu__Vstatic__p 
                                           >> 0x20U));
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data 
                                = ((0U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                    ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                        < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data)
                                        ? 1U : 0U) : 
                                   ((1U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                     ? vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_uu__5__Vfuncout
                                     : 0xffffffffU));
                        } else {
                            vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__6__b 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data;
                            vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__6__a 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__Vstatic__a_ext 
                                = (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__6__a 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__6__a)));
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__Vstatic__b_ext 
                                = (QData)((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__6__b));
                            VL_EXTENDS_WQ(128,64, __Vtemp_h74433124__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__Vstatic__a_ext);
                            VL_EXTENDS_WQ(128,64, __Vtemp_h43ab938e__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__Vstatic__b_ext);
                            VL_MULS_WWW(128, __Vtemp_h7341392a__0, __Vtemp_h74433124__0, __Vtemp_h43ab938e__0);
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__Vstatic__p[0U] 
                                = __Vtemp_h7341392a__0[0U];
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__Vstatic__p[1U] 
                                = __Vtemp_h7341392a__0[1U];
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__Vstatic__p[2U] 
                                = __Vtemp_h7341392a__0[2U];
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__Vstatic__p[3U] 
                                = __Vtemp_h7341392a__0[3U];
                            vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__6__Vfuncout 
                                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__Vstatic__p[1U];
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data 
                                = ((0U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                    ? (VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data)
                                        ? 1U : 0U) : 
                                   ((1U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                     ? vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_su__6__Vfuncout
                                     : 0xffffffffU));
                        }
                    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))) {
                        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_ss__7__b 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data;
                        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_ss__7__a 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_ss__Vstatic__p 
                            = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_ss__7__a), 
                                          VL_EXTENDS_QI(64,32, vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_ss__7__b));
                        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_ss__7__Vfuncout 
                            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_ss__Vstatic__p 
                                       >> 0x20U));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data 
                            = ((0U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                   << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data))
                                : ((1U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                    ? vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mulh_ss__7__Vfuncout
                                    : 0xffffffffU));
                    } else {
                        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mul_low__8__b 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data;
                        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mul_low__8__a 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mul_low__Vstatic__p 
                            = ((QData)((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mul_low__8__a)) 
                               * (QData)((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mul_low__8__b)));
                        vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mul_low__8__Vfuncout 
                            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mul_low__Vstatic__p);
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data 
                            = ((0U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data)
                                : ((0x20U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                       - vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data)
                                    : ((1U == (0x7fU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                        ? vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__mul_low__8__Vfuncout
                                        : 0xffffffffU)));
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data = 0xffffffffU;
                }
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data = 0xffffffffU;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data 
                = ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                    ? 0xffffffffU : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                      ? 0xffffffffU
                                      : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                                 + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm)
                                              : 0xffffffffU)
                                          : 0xffffffffU)));
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_w_data 
            = ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                ? ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                    ? 0xffffffffU : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                      ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc 
                                                 + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm)
                                              : 0xffffffffU)
                                          : 0xffffffffU)
                                      : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                              ? ((4U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm)
                                                    : 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))
                                                    ? 
                                                   ((0x20U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm 
                                                         >> 5U)))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data, 
                                                                   (0x1fU 
                                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                                     : 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm)))
                                                    : 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                                    ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))
                                                    ? 
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm)
                                                     ? 1U
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                                                    : 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                                    + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))))
                                              : 0xffffffffU)
                                          : 0xffffffffU)))
                : ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                    ? 0xffffffffU : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                      ? 0xffffffffU
                                      : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                                 + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm)
                                              : 0xffffffffU)
                                          : 0xffffffffU))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__branch_taken 
        = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))
            ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))
                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))
                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                       >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data)
                    : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                       < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data))
                : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))
                    ? VL_GTES_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data)
                    : VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data)))
            : ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3) 
                   >> 1U)) & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_funct3))
                               ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                  != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data)
                               : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                  == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs2_data))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__capture_req 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT____VdfgExtracted_h45d4293e__0) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__start_load) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_lsu__DOT__start_store)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_dnpc 
        = ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_redirect_valid = 0U;
    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_exc_valid)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_dnpc 
            = ((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc 
                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm)
                : ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                    ? (0xfffffffeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rs1_data 
                                      + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm))
                    : ((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode))
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__branch_taken)
                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_imm)
                            : ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc))
                        : ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_pc))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_redirect_valid 
            = ((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode)) 
               | ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode)) 
                  | ((0x63U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_opcode)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_alu__DOT__branch_taken))));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_flush 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_fire) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_redirect_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_imm 
        = ((0x40U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
            ? ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                ? ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                    ? ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                        ? 0U : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                 ? 0U : ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                          ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                 >> 0x14U)
                                              : 0U)
                                          : 0U))) : 
                   ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                     ? ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                         ? ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                             ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                 ? (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                 >> 0x1fU))) 
                                     << 0x15U) | ((0x100000U 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst) 
                                                     | ((0x800U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                              >> 0x14U))))))
                                 : 0U) : 0U) : 0U) : 
                    ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                      ? ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                          ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                              ? (((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                              >> 0x14U))
                              : 0U) : 0U) : ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                              ? ((1U 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                                 >> 7U))))))
                                                  : 0U)
                                              : 0U))))
                : 0U) : ((0x20U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                          ? ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                              ? ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                  ? 0U : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                           ? ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                               ? ((1U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                               ? ((1U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                   >> 0x19U)
                                                   : 0U)
                                               : 0U)))
                              : ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                  ? 0U : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                              >> 7U))))
                                                     : 0U)
                                                    : 0U))))
                          : ((0x10U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                              ? ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                  ? 0U : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                           ? ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                               ? ((1U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                               ? ((1U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                      >> 0x14U))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                  ? 0U : ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                           ? 0U : (
                                                   (2U 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_haf50de25__0 
        = (IData)((0x73U == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fencei 
        = (IData)((0x100fU == (0x707fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__is_csr_inst 
        = ((0x73U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
           & (0U != (7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                           >> 0xcU))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_ha70c323c__0 
        = ((0x33U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
           | (0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_ecall 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_haf50de25__0) 
           & (0U == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                     >> 0x14U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_csr_imm_sel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__is_csr_inst) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
              >> 0xeU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_hdc74ce69__0 
        = ((3U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
           | ((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
              | ((0x13U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_ha70c323c__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_illegal_inst 
        = (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_hdc74ce69__0) 
                    | ((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                       | ((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                          | ((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                             | ((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                | ((0x73U == (0x7fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fencei)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hd8fdf888__0 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid) 
               & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_hdc74ce69__0) 
                    | ((0x67U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                       | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_csr_imm_sel)) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT__is_csr_inst)))) 
                   & ((0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                       >> 0xfU))) & 
                      (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h371a3f73__0) 
                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd) 
                           == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                        >> 0xfU)))) 
                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hb1b1c1d5__0) 
                           & ((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                        >> 0xfU)) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_rd))) 
                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h9a63dc5f__0) 
                             & ((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                          >> 0xfU)) 
                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_rd))))))) 
                  | (((0x23U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst)) 
                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_decoder__DOT____VdfgTmp_ha70c323c__0)) 
                     & ((0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                         >> 0x14U))) 
                        & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h371a3f73__0) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_rd) 
                               == (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                            >> 0x14U)))) 
                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hb1b1c1d5__0) 
                               & ((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                            >> 0x14U)) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mem_rd))) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h9a63dc5f__0) 
                                 & ((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_inst 
                                              >> 0x14U)) 
                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wb_rd)))))))))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ex_allowin));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_fire 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hd8fdf888__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_id_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__id_valid)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hd8fdf888__0)));
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0] 
            = (((~ (0xffffffffULL << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0
                [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0]) 
               | ((QData)((IData)(__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0)) 
                  << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v0)));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1] 
            = (((~ (0xffffffffULL << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0
                [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1]) 
               | ((QData)((IData)(__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1)) 
                  << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data0__v1)));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0] 
            = (((~ (0xffffffffULL << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1
                [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0]) 
               | ((QData)((IData)(__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0)) 
                  << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v0)));
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1] 
            = (((~ (0xffffffffULL << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1))) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1
                [__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1]) 
               | ((QData)((IData)(__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1)) 
                  << (IData)(__Vdlyvlsb__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_data1__v1)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__id_fire 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_id_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_beat_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cpu_r_fire 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid;
    __Vtableidx2 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit) 
                     << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cpu_ar_fire) 
                                << 6U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_rlast) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__mem_r_fire) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)))))))));
    if (VysyxSoCFull__ConstPool__TABLE_h4e246549_0[__Vtableidx2]) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__refill_drop_q 
            = VysyxSoCFull__ConstPool__TABLE_h5f11f2f1_0
            [__Vtableidx2];
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fetch_pc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ctrl_flush) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__fencei_flush) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__trap_flush) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__mret_flush))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit0 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid0[
            (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                   >> 8U))] >> (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                         >> 3U))) & 
           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag0
            [(0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                       >> 3U))] == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                    >> 0xaU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__start_fetch 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush)) 
                 & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__arvalid_r) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__buf_valid) 
                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__req_outstanding))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cpu_ar_fire 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__arvalid_r)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__resp_valid)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ic_mem_arvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__global_flush)) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__hit0) 
           | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_valid1[
               (3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                      >> 8U))] >> (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                            >> 3U))) 
              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_icache__DOT__cache_tag1
                 [(0x7fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                            >> 3U))] == (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ifu__DOT__araddr_r 
                                         >> 0xaU))));
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

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__5\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__addr = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__axtype;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__axtype = 0;
    CData/*7:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__axlen;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__axlen = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__addr = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__axtype;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__axtype = 0;
    CData/*7:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__axlen;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__axlen = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__addr;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__addr = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__axtype;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__axtype = 0;
    CData/*7:0*/ __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__axlen;
    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__axlen = 0;
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
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MI__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__ram__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v8 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v2 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v3 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v4 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr;
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
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
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
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__ram__v0 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
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
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__rd_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rd_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q = 0U;
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
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr 
                = (3U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__rd_ptr)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt 
            = ((0x31fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt))
                ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt))));
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr)));
        }
        if (((0x20cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)) 
             & (0x31fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt = 0U;
        } else if ((0x31fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count 
            = (0x3fU & ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wen) 
                                 << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren)))
                         ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))
                         : ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_wen) 
                                     << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__fifo_ren)))
                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count) 
                                - (IData)(1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count))));
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
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_prio_q)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_syn1_dly 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_syn1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    if (vlSelf->reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__count = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt = 0ULL;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_response__DOT__wr_ptr = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__active_row_q__v0 = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__row_open_q__v0 = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0x27fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__u_requests__DOT__wr_ptr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__dip_state = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bready_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rd_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__kbd_status = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstrb_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_sent = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_busy = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_busy = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_sent = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_sent = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_state_q = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q = 7U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__qpi_ready = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__sync = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reserve = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_end_cyc = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awsize_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc = 0ULL;
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
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt 
            = (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt);
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
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
            = (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt);
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
                    if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__state_q)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__data_q 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_write_data_q;
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
        __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count 
            = (0xfU & ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_r_fire) 
                                << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire)))
                        ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))
                        : ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_r_fire) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire)))
                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count) 
                               - (IData)(1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count))));
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
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire) 
             & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr)));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
                     & (0U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
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
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))))
                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
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
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__delay_r;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__dip_state 
            = vlSelf->externalPins_gpio_in;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_w_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bready_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_auto_anon_out_1_bready;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstrb_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wstrb;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_busy = 1U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bready_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wstrb_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_busy = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate;
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_q 
                = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_end_cyc 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_start_cyc 
                   + (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt 
                      - vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_start_cyc));
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bresp_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bid_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_end_cyc = 0ULL;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rd_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__kbd_status 
            = (((0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count)) 
                << 1U) | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count)));
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_sent = 1U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_w_sent = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_ar_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arsize;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arsize_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_start_cyc = 0ULL;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_aw_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_busy = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awsize_q 
                = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                    ? 2U : 0U);
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_busy = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awsize_q = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_sent = 1U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_sent = 0U;
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
             & (8U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                         >> 6U));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0x1cU == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__apb_wr) 
             & (0x21000004U == (0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__sync 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata;
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_wr) 
              & (0xcU == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reserve 
                = (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata);
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_wr) 
             & (0U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl)) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl)) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__apb_wr) 
             & (8U == (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                    = ((0xffffff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl) 
                       | (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata));
            }
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                    = ((0xffff00ffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl) 
                       | (0xff00U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata));
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                    = ((0xff00ffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl) 
                       | (0xff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata));
            }
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                    = ((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl) 
                       | (0xff000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        if ((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_wr_w)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_rd_w)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q = 0U;
            } else {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__axlen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q) 
                                - (IData)(1U)));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__axtype 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__axtype))) {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__Vfuncout 
                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__addr;
                } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__axtype))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__axlen))
                                              ? 0xfU
                                              : ((7U 
                                                  == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__axlen))
                                                  ? 0x1fU
                                                  : 0x3fU))));
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__Vfuncout 
                        = ((__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__addr 
                            & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__addr) 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__Vfuncout 
                        = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__addr);
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__24__Vfuncout;
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_sent = 1U;
            if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_wvalid) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_wready))) {
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__axlen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__axtype 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awburst_q;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_wr_q 
                    = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wlast_q)));
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q) 
                                - (IData)(1U)));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awaddr_q;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__axtype))) {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__Vfuncout 
                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__addr;
                } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__axtype))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__axlen))
                                              ? 0xfU
                                              : ((7U 
                                                  == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__axlen))
                                                  ? 0x1fU
                                                  : 0x3fU))));
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__Vfuncout 
                        = ((__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__addr 
                            & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__addr) 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__Vfuncout 
                        = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__addr);
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__25__Vfuncout;
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
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__axlen 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q;
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__axtype 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst_q;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_rd_q 
                    = (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q));
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
                    = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q) 
                                - (IData)(1U)));
                __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__addr 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__araddr_q;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask = 0U;
                if ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__axtype))) {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__Vfuncout 
                        = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__addr;
                } else if ((2U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__axtype))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask 
                        = ((0U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__axlen))
                            ? 3U : ((1U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__axlen))
                                     ? 7U : ((3U == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__axlen))
                                              ? 0xfU
                                              : ((7U 
                                                  == (IData)(__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__axlen))
                                                  ? 0x1fU
                                                  : 0x3fU))));
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__Vfuncout 
                        = ((__Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__addr 
                            & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask)) 
                           | (((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__addr) 
                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__Vstatic__mask));
                } else {
                    __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__Vfuncout 
                        = ((IData)(4U) + __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__addr);
                }
                __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
                    = __Vfunc_ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__calculate_addr_next__26__Vfuncout;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__r_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__r_ptr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rdata_fifo__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_fifo__DOT__count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__refresh_rank_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_len_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_addr_q;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_cyc_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
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
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
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
    vlSelf->externalPins_gpio_out = vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_ctrl;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__cmd = 
        (((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q) 
                    >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q))) 
          << 3U) | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__cmd = 
        ((8U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__rank_q)) 
                 << 3U) | (0xfffffff8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)))) 
         | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__command_q)));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data 
        = (0xfU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl);
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_0 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__14__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                   >> 4U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_1 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__15__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                   >> 8U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_2 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__16__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                   >> 0xcU));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_3 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__17__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                   >> 0x10U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_4 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__18__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                   >> 0x14U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_5 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__19__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data 
        = (0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
                   >> 0x18U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_6 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__20__Vfuncout));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg7_ctrl 
           >> 0x1cU);
    vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__Vfuncout 
        = ((8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
            ? ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                        ? 0xeU : 6U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                                         ? 0x21U : 0x46U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                        ? 3U : 8U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                                       ? 0x10U : 0U)))
            : ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                        ? 0x78U : 2U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                                          ? 0x12U : 0x19U))
                : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                    ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                        ? 0x30U : 0x24U) : ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__bcd_data))
                                             ? 0x79U
                                             : 0x40U))));
    vlSelf->externalPins_gpio_seg_7 = (0x80U | (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__bcd7seg__21__Vfuncout));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (8U == 
                                             (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                                            >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
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
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_write_data_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_start_cyc = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt;
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
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__araddr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awaddr_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wlast_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data_q 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sample_data0_q;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0xeU;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_awready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awid_q;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awburst_q;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_arready))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_id_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arid_q;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axlen_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_axburst_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst_q;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_accept_w) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_write_data_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdata_q;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__req_rank_q 
                = (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__ram_addr_w 
                         >> 0x19U));
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_aw_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_start_cyc 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awaddr_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_awaddr;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_start_cyc = 0ULL;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awaddr_q = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt;
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
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_ar_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__araddr_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_araddr;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__araddr_q = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_w_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wlast_q 
                = (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state));
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wlast_q = 0U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_awvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_sent)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_aw_busy));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_out_arvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_sent)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__rd_ar_busy));
    if (vlSelf->reset) {
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
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
                            = (1U & VL_REDXOR_32((0x7fU 
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
                            ? 0xdU : ((4U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
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
                                = (1U & ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                          ? ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT___lsdram_axi_auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
              >> 4U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_pulse 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_syn1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_syn1_dly));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_syn0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->externalPins_ps2_clk));
    vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__bvalid_q) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_cyc_cnt 
              >= vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wr_end_cyc));
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
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awid_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arid_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdata_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst_q = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awburst_q = 0U;
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
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_aw_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awid_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awburst_q 
                = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                    ? 1U : 0U);
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awid_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awlen_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__awburst_q = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_ar_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arid_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q 
                = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_arbiter__DOT__state))
                    ? 1U : 0U);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_arburst;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_r_fire) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4delay_delayer_in_rlast))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arid_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arlen_q = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__arburst_q = 0U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_w_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdata_q 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xb_wdata;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__in_b_fire) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__wdata_q = 0U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0xcU == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)))) {
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
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i) 
                                            >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__resp_accept_w 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_r_fire) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4delay_delayer__DOT__out_b_fire) 
              | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT__req_out_w) 
                     >> 4U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_axi__DOT____VdfgTmp_h95df1406__0))));
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

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__6(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__6\n"); );
    // Init
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__mask = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__Vfuncout;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__old_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__old_data = 0;
    SData/*15:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__new_data;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__new_data = 0;
    CData/*1:0*/ __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__mask;
    __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__mask = 0;
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
    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__row_open;
    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__row_open;
    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__row_open;
    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__row_open;
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h7a3908fb__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row3]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__74__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row3;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst) 
                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_hb532d1aa__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank3__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__75__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h0b0bc1e5__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row2]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__72__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row2;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst) 
                & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h24279f66__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank2__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__73__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h1376df4b__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row1]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__70__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row1;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h574f68a4__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank1__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__71__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_hc9df2fe1__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row0]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__68__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__active_row0;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_burst) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h231d2005__0, vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_2__DOT__bank0__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_mask_wdata__69__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h2cc606e6__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row3]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__62__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row3;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst) 
                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h631e419c__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank3__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__63__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h0ca5af10__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row2]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__60__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row2;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst) 
                & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h8c8e0d8a__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank2__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__61__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_hdf0c67d6__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row1]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__58__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row1;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_he31ae719__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank1__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__59__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h19cbe689__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row0]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__56__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__active_row0;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_burst) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h4a4fa0a7__0, vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram2_1__DOT__bank0__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_mask_wdata__57__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h4bae46b3__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row3]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__50__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row3;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst) 
                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h516c9403__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank3__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__51__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_haac5f432__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row2]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__48__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row2;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst) 
                & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_hcee63015__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank2__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__49__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h70cdd770__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row1]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__46__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row1;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h217044e1__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank1__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__47__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h2fce6ec9__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row0]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__44__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__active_row0;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_burst) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__mask 
            = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q) 
                     >> 2U));
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__new_data 
            = (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w 
               >> 0x10U);
        VL_ASSIGN_W(8192,__Vtemp_h7480eff6__0, vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_2__DOT__bank0__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_mask_wdata__45__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h7c429362__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row3]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__38__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row3;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst) 
                & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h28d3e185__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank3
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank3__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__39__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h94ee053d__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row2]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__36__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row2;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst) 
                & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_hf09b95c3__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank2
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank2__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__37__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_hd1f43cce__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row1]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__34__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row1;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h484d71f9__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank1
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank1__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__35__Vfuncout;
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h0da9f702__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row0]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__32__Vfuncout;
        __Vdlyvset__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0 = 1U;
        __Vdlyvlsb__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0 
            = (0x1ff0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q) 
                          << 4U));
        __Vdlyvdim0__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v0 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_row0;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_burst) 
                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_bank)))) {
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__mask 
            = (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__dqm_q));
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__new_data 
            = (0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__sdram_data_in_w);
        VL_ASSIGN_W(8192,__Vtemp_h3a67075b__0, vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__bank0
                    [vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_row]);
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__old_data 
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
        __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__Vfuncout 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__old_data;
        if ((1U & (~ (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__mask)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__Vfuncout 
                = ((0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__Vfuncout)) 
                   | (0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__new_data)));
        }
        if ((1U & (~ ((IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__mask) 
                      >> 1U)))) {
            __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__Vfuncout 
                = ((0xffU & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__Vfuncout)) 
                   | (0xff00U & (IData)(__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__new_data)));
        }
        __Vdlyvval__ysyxSoCFull__DOT__sdram1_1__DOT__bank0__v1 
            = __Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_mask_wdata__33__Vfuncout;
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
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row2 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row2 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                }
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__active_row3 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__active_row3 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
                        = (8U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
                        = (8U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
                        = (4U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
                        = (4U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open));
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
        } else if (vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__precharge_fire) {
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
        }
        if (vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__active_fire) {
            if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q)))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row2 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row2 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                }
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__bank_q))) {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__active_row3 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__active_row3 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_axi__DOT__msdram__DOT__u_sdram_axi__DOT__u_core__DOT__addr_q;
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
                        = (8U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
                        = (8U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open));
                } else {
                    __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
                        = (4U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open));
                    __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
                        = (4U | (IData)(__Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open));
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
        } else if (vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__precharge_fire) {
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
        __Vdly__ysyxSoCFull__DOT__sdram2_2__DOT__row_open 
            = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__row_open;
        __Vdly__ysyxSoCFull__DOT__sdram2_1__DOT__row_open 
            = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__row_open;
        __Vdly__ysyxSoCFull__DOT__sdram1_2__DOT__row_open 
            = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__row_open;
        __Vdly__ysyxSoCFull__DOT__sdram1_1__DOT__row_open 
            = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__row_open;
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
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_cas_lat__65__cl 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__mode) 
                 >> 4U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_cas_lat__65__Vfuncout 
        = ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_cas_lat__65__cl))
            ? 2U : ((3U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_cas_lat__65__cl))
                     ? 3U : 2U));
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__cas_lat 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_cas_lat__65__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_cas_lat__53__cl 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__mode) 
                 >> 4U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_cas_lat__53__Vfuncout 
        = ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_cas_lat__53__cl))
            ? 2U : ((3U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_cas_lat__53__cl))
                     ? 3U : 2U));
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__cas_lat 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_cas_lat__53__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_cas_lat__41__cl 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__mode) 
                 >> 4U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_cas_lat__41__Vfuncout 
        = ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_cas_lat__41__cl))
            ? 2U : ((3U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_cas_lat__41__cl))
                     ? 3U : 2U));
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__cas_lat 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_cas_lat__41__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_cas_lat__29__cl 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__mode) 
                 >> 4U));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_cas_lat__29__Vfuncout 
        = ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_cas_lat__29__cl))
            ? 2U : ((3U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_cas_lat__29__cl))
                     ? 3U : 2U));
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__cas_lat 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_cas_lat__29__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__64__bl 
        = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__mode));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__64__Vfuncout 
        = ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__64__bl))
            ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__64__bl))
                ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__64__bl))
                    ? 0x200U : 1U) : 1U) : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__64__bl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__64__bl))
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__64__bl))
                                                 ? 2U
                                                 : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__burst_len 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_len__64__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__52__bl 
        = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__mode));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__52__Vfuncout 
        = ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__52__bl))
            ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__52__bl))
                ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__52__bl))
                    ? 0x200U : 1U) : 1U) : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__52__bl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__52__bl))
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__52__bl))
                                                 ? 2U
                                                 : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__burst_len 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_len__52__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__40__bl 
        = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__mode));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__40__Vfuncout 
        = ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__40__bl))
            ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__40__bl))
                ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__40__bl))
                    ? 0x200U : 1U) : 1U) : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__40__bl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__40__bl))
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__40__bl))
                                                 ? 2U
                                                 : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__burst_len 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_len__40__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__28__bl 
        = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__mode));
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__28__Vfuncout 
        = ((4U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__28__bl))
            ? ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__28__bl))
                ? ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__28__bl))
                    ? 0x200U : 1U) : 1U) : ((2U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__28__bl))
                                             ? ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__28__bl))
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__28__bl))
                                                 ? 2U
                                                 : 1U)));
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__burst_len 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_len__28__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__base 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__wr_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__67__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__base 
        = vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_2__DOT__rd_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_2__DOT__f_burst_col__66__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__base 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__wr_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__55__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__base 
        = vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram2_1__DOT__rd_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram2_1__DOT__f_burst_col__54__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__base 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__wr_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__43__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__base 
        = vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_2__DOT__rd_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_2__DOT__f_burst_col__42__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__base 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__wr_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__31__Vfuncout;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__bl 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__burst_len;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__cnt 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_beat_idx;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__base 
        = vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_base_col;
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp = 0U;
    vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__Vfuncout 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__base;
    if ((1U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__bl))) {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__Vfuncout 
            = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__base;
    } else if ((2U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__base)) 
                         + (1U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__Vfuncout 
            = ((0x1feU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__base)) 
               | (1U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((4U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__base)) 
                         + (3U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__Vfuncout 
            = ((0x1fcU & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__base)) 
               | (3U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp)));
    } else if ((8U == (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__bl))) {
        vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp 
            = (0x1ffU & ((7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__base)) 
                         + (7U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__cnt))));
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__Vfuncout 
            = ((0x1f8U & (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__base)) 
               | (7U & (IData)(vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__Vstatic__tmp)));
    } else {
        vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__Vfuncout 
            = (0x1ffU & ((IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__base) 
                         + (IData)(vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__cnt)));
    }
    vlSelf->ysyxSoCFull__DOT__sdram1_1__DOT__rd_cur_col 
        = vlSelf->__Vfunc_ysyxSoCFull__DOT__sdram1_1__DOT__f_burst_col__30__Vfuncout;
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
