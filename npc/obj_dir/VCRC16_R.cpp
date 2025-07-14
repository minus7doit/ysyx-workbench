// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCRC16_R.h"
#include "VCRC16_R__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VCRC16_R::VCRC16_R(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCRC16_R__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , din{vlSymsp->TOP.din}
    , I_valid{vlSymsp->TOP.I_valid}
    , O_ready{vlSymsp->TOP.O_ready}
    , crc16_en{vlSymsp->TOP.crc16_en}
    , I_sop{vlSymsp->TOP.I_sop}
    , I_eop{vlSymsp->TOP.I_eop}
    , w_en{vlSymsp->TOP.w_en}
    , dout{vlSymsp->TOP.dout}
    , O_sop{vlSymsp->TOP.O_sop}
    , O_eop{vlSymsp->TOP.O_eop}
    , O_valid{vlSymsp->TOP.O_valid}
    , I_ready{vlSymsp->TOP.I_ready}
    , crc16_err{vlSymsp->TOP.crc16_err}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCRC16_R::VCRC16_R(const char* _vcname__)
    : VCRC16_R(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCRC16_R::~VCRC16_R() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCRC16_R___024root___eval_debug_assertions(VCRC16_R___024root* vlSelf);
#endif  // VL_DEBUG
void VCRC16_R___024root___eval_static(VCRC16_R___024root* vlSelf);
void VCRC16_R___024root___eval_initial(VCRC16_R___024root* vlSelf);
void VCRC16_R___024root___eval_settle(VCRC16_R___024root* vlSelf);
void VCRC16_R___024root___eval(VCRC16_R___024root* vlSelf);

void VCRC16_R::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCRC16_R::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCRC16_R___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCRC16_R___024root___eval_static(&(vlSymsp->TOP));
        VCRC16_R___024root___eval_initial(&(vlSymsp->TOP));
        VCRC16_R___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCRC16_R___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCRC16_R::eventsPending() { return false; }

uint64_t VCRC16_R::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCRC16_R::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCRC16_R___024root___eval_final(VCRC16_R___024root* vlSelf);

VL_ATTR_COLD void VCRC16_R::final() {
    VCRC16_R___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCRC16_R::hierName() const { return vlSymsp->name(); }
const char* VCRC16_R::modelName() const { return "VCRC16_R"; }
unsigned VCRC16_R::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VCRC16_R::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCRC16_R___024root__trace_init_top(VCRC16_R___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCRC16_R___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCRC16_R___024root*>(voidSelf);
    VCRC16_R__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VCRC16_R___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VCRC16_R___024root__trace_register(VCRC16_R___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCRC16_R::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCRC16_R::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCRC16_R___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
