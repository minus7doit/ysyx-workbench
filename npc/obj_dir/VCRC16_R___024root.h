// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCRC16_R.h for the primary calling header

#ifndef VERILATED_VCRC16_R___024ROOT_H_
#define VERILATED_VCRC16_R___024ROOT_H_  // guard

#include "verilated.h"

class VCRC16_R__Syms;

class VCRC16_R___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(din,7,0);
    VL_IN8(I_valid,0,0);
    VL_OUT8(O_ready,0,0);
    VL_IN8(crc16_en,0,0);
    VL_IN8(I_sop,0,0);
    VL_IN8(I_eop,0,0);
    VL_IN8(w_en,0,0);
    VL_OUT8(dout,7,0);
    VL_OUT8(O_sop,0,0);
    VL_OUT8(O_eop,0,0);
    VL_OUT8(O_valid,0,0);
    VL_IN8(I_ready,0,0);
    VL_OUT8(crc16_err,0,0);
    CData/*2:0*/ CRC16_R__DOT__state;
    CData/*0:0*/ CRC16_R__DOT____Vcellinp__inst_mod2__I_en;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst_n;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ CRC16_R__DOT__r_crc16_out;
    IData/*23:0*/ CRC16_R__DOT__inst_mod2__DOT__result_mid;
    IData/*23:0*/ CRC16_R__DOT__inst_mod2__DOT__result_next;
    IData/*16:0*/ CRC16_R__DOT__inst_mod2__DOT__remain;
    IData/*31:0*/ CRC16_R__DOT__inst_mod2__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCRC16_R__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCRC16_R___024root(VCRC16_R__Syms* symsp, const char* v__name);
    ~VCRC16_R___024root();
    VL_UNCOPYABLE(VCRC16_R___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
