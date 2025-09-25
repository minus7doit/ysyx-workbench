// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24110005_NPC.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_24110005_NPC__Syms.h"
#include "Vysyx_24110005_NPC___024root.h"

extern "C" void finish_sim();

VL_INLINE_OPT void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__finish_sim_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__finish_sim_TOP\n"); );
    // Body
    finish_sim();
}

extern "C" void inst_trace(unsigned int pc, unsigned int inst, unsigned int npc);

VL_INLINE_OPT void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__inst_trace_TOP(IData/*31:0*/ pc, IData/*31:0*/ inst, IData/*31:0*/ npc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__inst_trace_TOP\n"); );
    // Body
    unsigned int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    unsigned int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    unsigned int npc__Vcvt;
    for (size_t npc__Vidx = 0; npc__Vidx < 1; ++npc__Vidx) npc__Vcvt = npc;
    inst_trace(pc__Vcvt, inst__Vcvt, npc__Vcvt);
}

extern "C" void function_trace(unsigned int pc, unsigned int inst, unsigned int npc);

VL_INLINE_OPT void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__function_trace_TOP(IData/*31:0*/ pc, IData/*31:0*/ inst, IData/*31:0*/ npc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__function_trace_TOP\n"); );
    // Body
    unsigned int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    unsigned int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    unsigned int npc__Vcvt;
    for (size_t npc__Vidx = 0; npc__Vidx < 1; ++npc__Vidx) npc__Vcvt = npc;
    function_trace(pc__Vcvt, inst__Vcvt, npc__Vcvt);
}

extern "C" int pmem_read(unsigned int raddr);

VL_INLINE_OPT void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__pmem_read_TOP\n"); );
    // Body
    unsigned int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void difftest_step(unsigned int pc, unsigned int npc);

VL_INLINE_OPT void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__difftest_step_TOP(IData/*31:0*/ pc, IData/*31:0*/ npc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__difftest_step_TOP\n"); );
    // Body
    unsigned int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    unsigned int npc__Vcvt;
    for (size_t npc__Vidx = 0; npc__Vidx < 1; ++npc__Vidx) npc__Vcvt = npc;
    difftest_step(pc__Vcvt, npc__Vcvt);
}

extern "C" void pmem_write(unsigned int waddr, int wdata, char wmask);

VL_INLINE_OPT void Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__alu_ins__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root____Vdpiimwrap_ysyx_24110005_NPC__DOT__alu_ins__DOT__pmem_write_TOP\n"); );
    // Body
    unsigned int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24110005_NPC___024root___dump_triggers__act(Vysyx_24110005_NPC___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24110005_NPC___024root___eval_triggers__act(Vysyx_24110005_NPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_24110005_NPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24110005_NPC___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__rst)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->clk) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__clk));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24110005_NPC___024root___dump_triggers__act(vlSelf);
    }
#endif
}
