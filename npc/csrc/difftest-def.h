#ifndef DIFFTEST_DEF_H
#define DIFFTEST_DEF_H

#include <stdint.h>


enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

#define RISCV_GPR_TYPE MUXDEF(CONFIG_RV64, uint64_t, uint32_t)
#define RISCV_GPR_NUM  MUXDEF(CONFIG_RVE , 16, 32)
#define DIFFTEST_REG_SIZE (sizeof(RISCV_GPR_TYPE) * (RISCV_GPR_NUM + 1)) // GPRs + pc



#endif