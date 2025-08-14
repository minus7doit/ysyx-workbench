#include "npc.h"
#include <llvm-c/Target.h>
#include <llvm-c/Disassembler.h>

NPC_state npc_cpu={};

void inst_trace(uint32_t pc, uint32_t inst , uint32_t npc) {
  static LLVMDisasmContextRef ctx = nullptr;
  if (!ctx) {
    LLVMInitializeAllTargetInfos();
    LLVMInitializeAllTargetMCs();
    LLVMInitializeAllDisassemblers();
    ctx = LLVMCreateDisasm("riscv32", nullptr, 0, nullptr, nullptr);
    if (!ctx) { puts("[ITRACE] LLVM init failed"); return; }
  }

  char buffer[64]      = {};
  uint8_t *code_bytes  = reinterpret_cast<uint8_t*>(&inst);   // ★ 强转成 byte*

  size_t size = LLVMDisasmInstruction(
      ctx,                 // 反汇编上下文
      code_bytes,          // 指令字节流
      sizeof(inst),        // 4 字节
      pc,                  // 当前 PC
      buffer, sizeof(buffer));    // 输出 asm 字符串

  if (size == 0) snprintf(buffer, sizeof(buffer), "???");
  
  npc_cpu.inst=inst;
  npc_cpu.npc =npc;
  npc_cpu.pc  =pc;
  
  printf("[ITRACE] 0x%08x: 0x%08x  %s\n", pc, inst, buffer);
}


void function_trace(uint32_t pc, uint32_t inst , uint32_t npc) {
  exec_instructions(pc, inst, npc);
}