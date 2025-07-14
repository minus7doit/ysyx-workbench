// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcrc16.h"
#include "Vcrc16__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vcrc16::Vcrc16(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcrc16__Syms(contextp(), _vcname__, this)}
    , rst_n{vlSymsp->TOP.rst_n}
    , crc16_check_en{vlSymsp->TOP.crc16_check_en}
    , din{vlSymsp->TOP.din}
    , crc16_out{vlSymsp->TOP.crc16_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcrc16::Vcrc16(const char* _vcname__)
    : Vcrc16(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcrc16::~Vcrc16() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcrc16___024root___eval_debug_assertions(Vcrc16___024root* vlSelf);
#endif  // VL_DEBUG
void Vcrc16___024root___eval_static(Vcrc16___024root* vlSelf);
void Vcrc16___024root___eval_initial(Vcrc16___024root* vlSelf);
void Vcrc16___024root___eval_settle(Vcrc16___024root* vlSelf);
void Vcrc16___024root___eval(Vcrc16___024root* vlSelf);

void Vcrc16::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcrc16::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcrc16___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcrc16___024root___eval_static(&(vlSymsp->TOP));
        Vcrc16___024root___eval_initial(&(vlSymsp->TOP));
        Vcrc16___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcrc16___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcrc16::eventsPending() { return false; }

uint64_t Vcrc16::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcrc16::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcrc16___024root___eval_final(Vcrc16___024root* vlSelf);

VL_ATTR_COLD void Vcrc16::final() {
    Vcrc16___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcrc16::hierName() const { return vlSymsp->name(); }
const char* Vcrc16::modelName() const { return "Vcrc16"; }
unsigned Vcrc16::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcrc16::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcrc16___024root__trace_init_top(Vcrc16___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcrc16___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc16___024root*>(voidSelf);
    Vcrc16__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcrc16___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcrc16___024root__trace_register(Vcrc16___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcrc16::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcrc16::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcrc16___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
