#ifndef __NPC_H__
#define __NPC_H__
#include <stdlib.h>
#include <iostream>     
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VysyxSoCFull.h"
//#include "VysyxSoCFull_024unit.h"
#include "VysyxSoCFull___024root.h"
#include "svdpi.h"
#include "VysyxSoCFull__Dpi.h"
#define PMEM_BASE 0x20000000
#define FLASH_BASE 0X30000000
#define MEM_SIZE 0x08000000 // 128MB
#define FLASH_SIZE 0x08000000 // 128MB
#define FLASH_OFFSET 0x00010000
#define CONFIG_PC_RESET_OFFSET 0x0
#define RESET_VECTOR (PMEM_BASE + CONFIG_PC_RESET_OFFSET)
#define MROM_BASE 0x20000000ull     // 改成你工程的 MROM_BASE
#define MROM_SIZE 0x1000       // 4KB，必须和NEMU一致
#define MTRACE 1
#define WAVE 1
#define CONFIG_DEVICE 1


extern VysyxSoCFull *dut; 
extern VerilatedVcdC *m_trace;
extern vluint64_t sim_time ;
extern bool sim_break;
extern void cpu_sim(int n);
extern void sdb_set_batch_mode();
extern void sdb_mainloop();
extern void finish_sim();
extern uint32_t* guest_to_host(uint32_t paddr);
extern void inst_trace(uint32_t pc, uint32_t inst);
extern void function_trace(uint32_t pc, uint32_t inst , uint32_t npc);
extern void exec_instructions(uint32_t pc, uint32_t inst, uint32_t npc);
extern void init_elf(const char *elf_file);
extern void init_difftest(char *ref_so_file, long img_size, int port);

typedef uint32_t word_t;
typedef word_t vaddr_t;
extern vaddr_t* guest_to_host(uint32_t paddr);
extern void  difftest_step(vaddr_t pc, vaddr_t npc);
extern void device_update();

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
}CPU_state;

typedef struct {
  vaddr_t pc;
  word_t  inst;
  vaddr_t npc;
}NPC_state;


static int difftest_port = 1234;
extern uint8_t  mrom[MROM_SIZE];
extern uint8_t flash[FLASH_SIZE];
extern CPU_state npc_state;
extern NPC_state npc_cpu;
extern int32_t inst_mem[MEM_SIZE/4];
#endif