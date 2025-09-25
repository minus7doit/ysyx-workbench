#include <stdlib.h>
#include <iostream>     
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vysyx_24110005_NPC.h"
#include "Vysyx_24110005_NPC___024root.h"
//#include "Vysyx_24110005_NPC_024unit.h"
#include "svdpi.h"
#include "Vysyx_24110005_NPC__Dpi.h"
#include "npc.h"
#include <llvm-c/Target.h>
#include <llvm-c/Disassembler.h>

Vysyx_24110005_NPC *dut = new Vysyx_24110005_NPC;
VerilatedVcdC *m_trace = new VerilatedVcdC;

vluint64_t sim_time = 0;

bool sim_break=0;


void cpu_sim(int n);
void sdb_set_batch_mode();
void sdb_mainloop();
void inst_trace(uint32_t pc, uint32_t inst);
void init_difftest(char *ref_so_file, long img_size, int port);

static char* img_file = NULL;//从命令行获取程序的所有指令
static char* elf_file = NULL; // ELF 文件路径
static char *diff_so_file = NULL;

uint32_t* guest_to_host(uint32_t paddr); 


static long load_img() {

  FILE *fp = fopen(img_file, "rb");
  if (fp == NULL){
    printf("Can not open '%s'", img_file);
    exit(EXIT_FAILURE);
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  uint32_t uint32_size = size / 4;
  printf("\033[34mThe image is %s, size = %ld\033[34m\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(PMEM_BASE), 4, uint32_size, fp);
  assert(ret == uint32_size);

  fclose(fp);
  return size;
}



void finish_sim(){
    sim_break=true;
}


int main(int argc, char** argv, char** env) {
    Verilated::traceEverOn(true);
    dut->trace(m_trace, 5);
    m_trace->open("ysyx_24110005_NPC_waveform.vcd"); 

    //printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
      printf("argv[%d] = %s\n", i, argv[i]);
     //strcmp(argv[i], "-l") == 0 ? log_file = argv[i + 1] : 0;
     if(strcmp(argv[i],"-b") == 0) {sdb_set_batch_mode();}
     strcmp(argv[i], "-diff") == 0 ? diff_so_file = argv[i + 1] : 0;
     strcmp(argv[i], "-f") == 0 ? elf_file = argv[i + 1] : 0;
    }

   if(elf_file != NULL){
        printf("\033[34mELF file is %s\033[34m\n", elf_file);
        init_elf(elf_file); // 初始化 ELF 文件
   }
   
    img_file = argv[1]; // 从命令行获取程序的所有指令
    long img_size;
    if(img_file != NULL) {
         img_size = load_img();
    }
    else {
        printf("\033[34mNo image is given. Use the default build-in image.\033[34m \n");
    }

    if(diff_so_file != NULL) {
          printf("\033[34mDiff file is %s\033[34m\n", diff_so_file);
          init_difftest(diff_so_file, img_size, difftest_port); // 初始化差分测试
      } else {
          printf("\033[34mNo diff file is given. Use the default diff.so.\033[34m \n");
      }
    
    dut->clk = 0;
    dut->rst = 1;
    sdb_mainloop();
    
   // printf("x0 = %x\n" ,dut->rootp->ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[1]);
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}

