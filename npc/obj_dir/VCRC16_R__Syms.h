// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCRC16_R__SYMS_H_
#define VERILATED_VCRC16_R__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCRC16_R.h"

// INCLUDE MODULE CLASSES
#include "VCRC16_R___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VCRC16_R__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCRC16_R* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCRC16_R___024root             TOP;

    // CONSTRUCTORS
    VCRC16_R__Syms(VerilatedContext* contextp, const char* namep, VCRC16_R* modelp);
    ~VCRC16_R__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
