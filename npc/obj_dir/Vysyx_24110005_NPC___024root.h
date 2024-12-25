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
    CData/*0:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__data_sign;
    CData/*0:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__data_sign;
    CData/*0:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__data_sign;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ ysyx_24110005_NPC__DOT____Vcellinp__alu_ins__sel;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__pc;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__inst;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__imm;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__src1;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__src2;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__w_data;
    VlWide<10>/*311:0*/ ysyx_24110005_NPC__DOT__ins_Decoder__DOT____Vcellinp__imm_mux__lut;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__lut_out;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__src1_comp;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__src2_comp;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__imm_comp;
    IData/*31:0*/ ysyx_24110005_NPC__DOT__alu_ins__DOT__w_data_comp;
    IData/*31:0*/ __VdfgTmp_h31b0dff8__0;
    IData/*31:0*/ __VdfgTmp_h92c42027__0;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__Vfuncout;
    IData/*30:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp1__DOT__f_abs_to_comp__1__data_abs;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__Vfuncout;
    IData/*30:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp2__DOT__f_abs_to_comp__2__data_abs;
    IData/*31:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__Vfuncout;
    IData/*30:0*/ __Vfunc_ysyx_24110005_NPC__DOT__alu_ins__DOT__comp3__DOT__f_abs_to_comp__3__data_abs;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> ysyx_24110005_NPC__DOT__inst_mem;
    VlUnpacked<QData/*38:0*/, 8> ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 8> ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 8> ysyx_24110005_NPC__DOT__ins_Decoder__DOT__imm_mux__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*31:0*/, 32> ysyx_24110005_NPC__DOT__reg_rd__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
