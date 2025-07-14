// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcrc16.h for the primary calling header

#ifndef VERILATED_VCRC16___024ROOT_H_
#define VERILATED_VCRC16___024ROOT_H_  // guard

#include "verilated.h"

class Vcrc16__Syms;

class Vcrc16___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(rst_n,0,0);
    VL_IN8(crc16_check_en,0,0);
    VL_IN8(din,7,0);
    CData/*0:0*/ __Vtrigrprev__TOP__rst_n;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(crc16_out,15,0);
    IData/*16:0*/ crc16__DOT__CRC;
    IData/*23:0*/ crc16__DOT__inst_mod2__DOT__result_mid;
    IData/*23:0*/ crc16__DOT__inst_mod2__DOT__result_next;
    IData/*16:0*/ crc16__DOT__inst_mod2__DOT__remain;
    IData/*31:0*/ crc16__DOT__inst_mod2__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcrc16__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcrc16___024root(Vcrc16__Syms* symsp, const char* v__name);
    ~Vcrc16___024root();
    VL_UNCOPYABLE(Vcrc16___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
