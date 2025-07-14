// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCRC5__SYMS_H_
#define VERILATED_VCRC5__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcrc5.h"

// INCLUDE MODULE CLASSES
#include "Vcrc5___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vcrc5__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcrc5* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcrc5___024root                TOP;

    // CONSTRUCTORS
    Vcrc5__Syms(VerilatedContext* contextp, const char* namep, Vcrc5* modelp);
    ~Vcrc5__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
