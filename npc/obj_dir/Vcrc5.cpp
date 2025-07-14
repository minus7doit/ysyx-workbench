// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcrc5.h"
#include "Vcrc5__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vcrc5::Vcrc5(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcrc5__Syms(contextp(), _vcname__, this)}
    , crc5_en{vlSymsp->TOP.crc5_en}
    , crc5_check{vlSymsp->TOP.crc5_check}
    , crc5_out{vlSymsp->TOP.crc5_out}
    , check_pass{vlSymsp->TOP.check_pass}
    , addr_ok{vlSymsp->TOP.addr_ok}
    , din{vlSymsp->TOP.din}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcrc5::Vcrc5(const char* _vcname__)
    : Vcrc5(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcrc5::~Vcrc5() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcrc5___024root___eval_debug_assertions(Vcrc5___024root* vlSelf);
#endif  // VL_DEBUG
void Vcrc5___024root___eval_static(Vcrc5___024root* vlSelf);
void Vcrc5___024root___eval_initial(Vcrc5___024root* vlSelf);
void Vcrc5___024root___eval_settle(Vcrc5___024root* vlSelf);
void Vcrc5___024root___eval(Vcrc5___024root* vlSelf);

void Vcrc5::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcrc5::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcrc5___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcrc5___024root___eval_static(&(vlSymsp->TOP));
        Vcrc5___024root___eval_initial(&(vlSymsp->TOP));
        Vcrc5___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcrc5___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcrc5::eventsPending() { return false; }

uint64_t Vcrc5::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcrc5::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcrc5___024root___eval_final(Vcrc5___024root* vlSelf);

VL_ATTR_COLD void Vcrc5::final() {
    Vcrc5___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcrc5::hierName() const { return vlSymsp->name(); }
const char* Vcrc5::modelName() const { return "Vcrc5"; }
unsigned Vcrc5::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcrc5::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcrc5___024root__trace_init_top(Vcrc5___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcrc5___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc5___024root*>(voidSelf);
    Vcrc5__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcrc5___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcrc5___024root__trace_register(Vcrc5___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcrc5::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcrc5::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcrc5___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
