// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcrc5_t.h"
#include "Vcrc5_t__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vcrc5_t::Vcrc5_t(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcrc5_t__Syms(contextp(), _vcname__, this)}
    , tx_addr{vlSymsp->TOP.tx_addr}
    , tx_endp{vlSymsp->TOP.tx_endp}
    , packet_out{vlSymsp->TOP.packet_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcrc5_t::Vcrc5_t(const char* _vcname__)
    : Vcrc5_t(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcrc5_t::~Vcrc5_t() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcrc5_t___024root___eval_debug_assertions(Vcrc5_t___024root* vlSelf);
#endif  // VL_DEBUG
void Vcrc5_t___024root___eval_static(Vcrc5_t___024root* vlSelf);
void Vcrc5_t___024root___eval_initial(Vcrc5_t___024root* vlSelf);
void Vcrc5_t___024root___eval_settle(Vcrc5_t___024root* vlSelf);
void Vcrc5_t___024root___eval(Vcrc5_t___024root* vlSelf);

void Vcrc5_t::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcrc5_t::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcrc5_t___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcrc5_t___024root___eval_static(&(vlSymsp->TOP));
        Vcrc5_t___024root___eval_initial(&(vlSymsp->TOP));
        Vcrc5_t___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcrc5_t___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcrc5_t::eventsPending() { return false; }

uint64_t Vcrc5_t::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcrc5_t::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcrc5_t___024root___eval_final(Vcrc5_t___024root* vlSelf);

VL_ATTR_COLD void Vcrc5_t::final() {
    Vcrc5_t___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcrc5_t::hierName() const { return vlSymsp->name(); }
const char* Vcrc5_t::modelName() const { return "Vcrc5_t"; }
unsigned Vcrc5_t::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcrc5_t::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcrc5_t___024root__trace_init_top(Vcrc5_t___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcrc5_t___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcrc5_t___024root*>(voidSelf);
    Vcrc5_t__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcrc5_t___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcrc5_t___024root__trace_register(Vcrc5_t___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcrc5_t::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcrc5_t::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcrc5_t___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
