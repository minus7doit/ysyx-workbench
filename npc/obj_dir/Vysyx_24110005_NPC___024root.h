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
    CData/*0:0*/ ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__hit;
    CData/*0:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__csr_wen;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT(exit_code,31,0);
    IData/*31:0*/ ysyx_24110005_NPC__DOT__imm;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__current_inst;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__pc;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__dnpc;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__src1;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__reg_wdata;
    VlWide<11>/*350:0*/ ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__src1_comp;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__src2_comp;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__imm_comp;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_addr;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_wdata;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__mem_rdata;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__mulh;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__mul_unsigned;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__m_status;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__m_cause;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__m_tvec;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__m_epc;
    IData/*31:0*/ __VdfgTmp_h6578c3af__0;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__pmem_read__0__Vfuncout;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__signed_mulh__5__Vfuncout;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__signed_mulh__5__a;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__signed_mulh__5__b;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__unsigned_mulh__6__Vfuncout;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__unsigned_mulh__6__a;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__unsigned_mulh__6__b;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__signed_mulh__Vstatic__mul_result;
    QData/*63:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__unsigned_mulh__Vstatic__mul_result;
    VlUnpacked<QData/*38:0*/, 9> ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 9> ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 9> ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*31:0*/, 32> ysyx_24110005_NPC__DOT__reg_rd__DOT__rf;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

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
