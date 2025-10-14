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

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
#include <dlfcn.h>

void paddr_write(paddr_t addr, int len, word_t data);
word_t paddr_read(paddr_t addr, int len);


//实现下面的函数，用来与NPC进行对比测试
__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  //printf("\033[32mDifftest memcpy at addr =  %08x, n = %ld, direction = %d\033[32m\n", addr, n, direction);
  assert (direction == DIFFTEST_TO_REF);
  if(direction == DIFFTEST_TO_REF){
    for(int i = 0; i < (n/4); i++) {
        paddr_write(addr+4*i, 4, *(word_t *)(buf+4*i));
    }
  } else {
    //memcpy(buf, paddr_read(addr, n), n);
  }
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {

  if (direction == DIFFTEST_TO_REF) {
       memcpy(&cpu, dut, DIFFTEST_REG_SIZE);
  } else {
       memcpy(dut, &cpu, DIFFTEST_REG_SIZE);
  }

}
__EXPORT void difftest_exec(uint64_t n) {
  //printf("\033[32mDifftest exec %ld instructions\033[32m\n", n);
  while (n --) cpu_exec(1);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
