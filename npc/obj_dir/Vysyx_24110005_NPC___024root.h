// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24110005_NPC.h for the primary calling header

#ifndef VERILATED_VYSYX_24110005_NPC___024ROOT_H_
#define VERILATED_VYSYX_24110005_NPC___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_24110005_NPC__Syms;

class Vysyx_24110005_NPC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*3:0*/ ysyx_24110005_NPC__DOT__cur_state;
    CData/*0:0*/ ysyx_24110005_NPC__DOT__fetch_dec_valid;
    CData/*0:0*/ ysyx_24110005_NPC__DOT__dec_exc_valid;
    CData/*0:0*/ ysyx_24110005_NPC__DOT__bready;
    CData/*2:0*/ ysyx_24110005_NPC__DOT__dec_exc_fun;
    CData/*6:0*/ ysyx_24110005_NPC__DOT__dec_exc_opcode;
    CData/*4:0*/ ysyx_24110005_NPC__DOT__dec_exc_waddr;
    CData/*0:0*/ ysyx_24110005_NPC__DOT__mem_r_valid;
    CData/*0:0*/ ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__inst;
    CData/*0:0*/ ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__csr_wen;
    CData/*0:0*/ ysyx_24110005_NPC__DOT__mem_sram__DOT__r_bresp;
    CData/*3:0*/ __Vdly__ysyx_24110005_NPC__DOT__cur_state;
    CData/*4:0*/ __Vdly__ysyx_24110005_NPC__DOT__dec_exc_waddr;
    CData/*6:0*/ __Vdly__ysyx_24110005_NPC__DOT__dec_exc_opcode;
    CData/*2:0*/ __Vdly__ysyx_24110005_NPC__DOT__dec_exc_fun;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    VL_OUT(exit_code,31,0);
    IData/*31:0*/ ysyx_24110005_NPC__DOT__pc;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__fetch_dec_inst;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__imm;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__dec_exc_imm;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__src1;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__src2;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__Inst_Fetch_Unit__DOT__fetch_dec_inst;
    VlWide<11>/*350:0*/ ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT____Vcellinp__imm_mux__lut;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__lut_out;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__src1_comp;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__src2_comp;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__imm_comp;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__dnpc_reg;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mulh;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__mul_unsigned;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__w_data_reg;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_status;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_cause;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_tvec;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__m_epc;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__mem_sram__DOT__r_data;
    IData/*31:0*/ __VdfgTmp_h2c17f151__0;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__3__Vfuncout;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__3__a;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__3__b;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__4__Vfuncout;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__4__a;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__4__b;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__mem_sram__DOT__pmem_read__5__Vfuncout;
    IData/*31:0*/ __Vdly__ysyx_24110005_NPC__DOT__dec_exc_imm;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__signed_mulh__Vstatic__mul_result;
    QData/*63:0*/ ysyx_24110005_NPC__DOT__Excute_Unit__DOT__unsigned_mulh__Vstatic__mul_result;
    VlUnpacked<QData/*38:0*/, 9> ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 9> ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 9> ysyx_24110005_NPC__DOT__Inst_Decode_Unit__DOT__imm_mux__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*31:0*/, 32> ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_24110005_NPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24110005_NPC___024root(Vysyx_24110005_NPC__Syms* symsp, const char* v__name);
    ~Vysyx_24110005_NPC___024root();
    VL_UNCOPYABLE(Vysyx_24110005_NPC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
