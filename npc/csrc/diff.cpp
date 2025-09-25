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

#include <dlfcn.h>
#include "npc.h"
#include "difftest-def.h"
#include <cstdint>
#include <cstddef>
using ref_memcpy_t     = void (*)(vaddr_t, void*, size_t, bool);
using ref_regcpy_t     = void (*)(void*, bool);
using ref_exec_t       = void (*)(uint64_t);
using ref_raise_intr_t = void (*)(uint64_t);
using ref_init_t       = void (*)(int);

// 全局或静态保存函数指针
static ref_memcpy_t     ref_difftest_memcpy     = nullptr;
static ref_regcpy_t     ref_difftest_regcpy     = nullptr;
static ref_exec_t       ref_difftest_exec       = nullptr;
static ref_raise_intr_t ref_difftest_raise_intr = nullptr;
static ref_init_t       ref_difftest_init       = nullptr;

CPU_state npc_state = {}; // 初始化 NPC 状态

void isa_reg_display(){
  for(int i = 0; i < 32; i++){
    printf("gpr[%2d] : 0x%08x\n",i,dut->rootp->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[i]);
  }
  printf("pc : 0x%08x\n",dut->rootp->ysyx_24110005_NPC__DOT__pc);
}


void npc_state_init() {
  for(int i = 0; i < 32; i++) { 
    npc_state.gpr[i] = dut->rootp->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[i];
  }
  npc_state.pc = RESET_VECTOR ;
  printf("npc_state_update: npc_state.pc = %08x\n", npc_state.pc);
}


bool isa_difftest_checkregs(CPU_state *ref, uint32_t pc) {
  if(ref->pc != dut->rootp->ysyx_24110005_NPC__DOT__pc){
    printf("pc mismatch: ref(nemu)    =  %08x ,  pc =  %08x\n",ref->pc, dut->rootp->ysyx_24110005_NPC__DOT__pc);
    return false;
  }
  for(int i = 0; i < 32;i++){
   if(ref->gpr[i] != dut->rootp->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[i]){
      printf("gpr mismatch: ref(nemu) gpr[%d] =  %08x ,npc gpr[%d] = %08x" , i, ref->gpr[i], i, dut->rootp->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[i]);
      return false;
    }
  }
  return true;
}





void init_difftest(char* ref_so_file, long img_size, int port) {
    void* handle = dlopen(ref_so_file, RTLD_LAZY);
    if (!handle) { /* 处理错误 */ }

    dlerror(); // 清空旧错误
    ref_difftest_memcpy = reinterpret_cast<ref_memcpy_t>(
        dlsym(handle, "difftest_memcpy"));
    if (const char* e = dlerror()) { /* 处理错误 */ }

    dlerror();
    ref_difftest_regcpy = reinterpret_cast<ref_regcpy_t>(
        dlsym(handle, "difftest_regcpy"));
    if (const char* e = dlerror()) { /* 处理错误 */ }

    dlerror();
    ref_difftest_exec = reinterpret_cast<ref_exec_t>(
        dlsym(handle, "difftest_exec"));
    if (const char* e = dlerror()) { /* 处理错误 */ }

    dlerror();
    ref_difftest_raise_intr = reinterpret_cast<ref_raise_intr_t>(
        dlsym(handle, "difftest_raise_intr"));
    if (const char* e = dlerror()) { /* 处理错误 */ }

    dlerror();
    ref_difftest_init = reinterpret_cast<ref_init_t>(
        dlsym(handle, "difftest_init"));
    if (const char* e = dlerror()) { /* 处理错误 */ }

    printf("\033[32mDifferential testing: ON \033[32m\n");
    printf("\033[33mThe result of every instruction will be compared with %s.\033[33m \n ",ref_so_file);
    printf("\033[34mThis will help you a lot for debugging, but also significantly reduce the performance\033[34m\n");
    printf("\033[35mit is not necessary, you can turn it off in menuconfig.\033[35m\n" );
    // 调用 init
    npc_state_init();
    
    ref_difftest_init(port);
    ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
    ref_difftest_regcpy(&npc_state, DIFFTEST_TO_REF);

}

static void checkregs(CPU_state *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    sim_break = true;
    dut->exit_code=1;
    printf("\033[31mDifftest failed at pc =  %08x \033[31m\n", pc);
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
  CPU_state ref_r;
  //printf("\033[32mDifftest step at pc =  %08x,npc is %08x \033[32m\n", pc,npc);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  checkregs(&ref_r, pc);
  ref_difftest_exec(1);
}
