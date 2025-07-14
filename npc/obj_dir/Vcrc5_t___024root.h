// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcrc5_t.h for the primary calling header

#ifndef VERILATED_VCRC5_T___024ROOT_H_
#define VERILATED_VCRC5_T___024ROOT_H_  // guard

#include "verilated.h"

class Vcrc5_t__Syms;

class Vcrc5_t___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(tx_addr,6,0);
    VL_IN8(tx_endp,3,0);
    CData/*5:0*/ crc5_t__DOT__inst_mod2__DOT__remain;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(packet_out,15,0);
    SData/*15:0*/ crc5_t__DOT__inst_mod2__DOT__result_mid;
    SData/*15:0*/ crc5_t__DOT__inst_mod2__DOT__result_next;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcrc5_t__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcrc5_t___024root(Vcrc5_t__Syms* symsp, const char* v__name);
    ~Vcrc5_t___024root();
    VL_UNCOPYABLE(Vcrc5_t___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
