/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#ifndef __RISCV_REG_H__
#define __RISCV_REG_H__

#include <common.h>
#include <isa.h>

static inline word_t csr_read(uint32_t id) {
  switch (id) {
    case CSR_MSTATUS: return csr.mstatus;
    case CSR_MTVEC:   return csr.mtvec;
    case CSR_MEPC:    return csr.mepc;
    case CSR_MCAUSE:  return csr.mcause;
    default: assert(0); return 0;
  }
}

static inline void csr_write(uint32_t id, word_t val) {
  switch (id) {
    case CSR_MSTATUS:csr.mstatus = val; break;
    case CSR_MTVEC:  csr.mtvec  = val;  break;
    case CSR_MEPC:   csr.mepc   = val;  break;
    case CSR_MCAUSE: csr.mcause = val;  break;
    default: assert(0);
  }
}

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < MUXDEF(CONFIG_RVE, 16, 32)));
  return idx;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])
static inline const char* reg_name(int idx) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

#endif
