#include "npc.h"
#include "device.h"
#define PMEM_LEFT  ((vaddr_t)PMEM_BASE)
#define PMEM_RIGHT ((vaddr_t)PMEM_BASE + MEM_SIZE - 1)

int32_t inst_mem[MEM_SIZE/4];//模拟指令存储器,每个周期只读出一条指令
#define DIFF_ENABLE 1
#if DIFF_ENABLE
#define ZERO_OR_ONE 0
#else
#define ZERO_OR_ONE 1
#endif

vaddr_t* guest_to_host(vaddr_t paddr) {
    assert(paddr >= PMEM_BASE && paddr < PMEM_BASE + MEM_SIZE);
    return (vaddr_t *)inst_mem + (paddr - PMEM_BASE)/4; //将物理地址转换为指针

}


int out_of_bound(vaddr_t addr){
    if (addr < PMEM_LEFT || addr > PMEM_RIGHT)
    {
        printf("\033[31m address = %08x is out of bound of pmem [%08x, %08x] at pc = %08x \033[31m\n", addr, PMEM_LEFT, PMEM_RIGHT, npc_cpu.pc);
        return 0;
    }
    return 1;
}

extern "C" int pmem_read(vaddr_t raddr) {
  #ifdef MTRACE
  //printf("\033[34mprogram is reading npc memory: 0x%x \033[34m \n",raddr);
  #endif
  // 总是读取地址为`raddr & ~0x3u`的4字节并返回
  #ifdef CONFIG_HAS_TIMER
  uint64_t time;
  if (raddr == CONFIG_RTC_MMIO){ 
    time=get_time();
    return (ZERO_OR_ONE)*(uint32_t)time;

  } 
  if (raddr == CONFIG_RTC_MMIO+4) { 
    time=get_time();
    return (ZERO_OR_ONE)*(int)(time >> 32);
   } 
  #endif

  #ifdef CONFIG_HAS_KEYBOARD
    if(raddr == CONFIG_I8042_DATA_MMIO){
      return (ZERO_OR_ONE)*get_key();
    }
  #endif

  #ifdef CONFIG_HAS_VGA
      if (raddr >= CONFIG_VGA_CTL_MMIO && raddr < CONFIG_VGA_CTL_MMIO + 4){  
        if(raddr == CONFIG_VGA_CTL_MMIO)
          return (ZERO_OR_ONE)*SCREEN_H;
        else if(raddr == CONFIG_VGA_CTL_MMIO+2)
          return (ZERO_OR_ONE)*SCREEN_W;
        else
          assert(0);
    }
  #endif

  assert(out_of_bound(raddr));
  return *(int *)((uint8_t*)guest_to_host(raddr)+raddr%4);
}

extern "C" void pmem_write(vaddr_t waddr, int wdata, char wmask) {
  #ifdef MTRACE
    printf("program is writing data:%08x to npc memory: 0x%08x \n",wdata,waddr);
  #endif

  #ifdef CONFIG_HAS_SERIAL
    if (waddr == CONFIG_SERIAL_MMIO) { 
      putchar((unsigned char)wdata); 
      fflush(stdout); 
      return;
    }
  #endif

  #ifdef CONFIG_HAS_VGA
    if (waddr >= CONFIG_FB_ADDR && waddr < CONFIG_FB_ADDR + VMEM_SIZE) {
      vmem_wirte(waddr, wdata);
      return;
    }
    if (waddr >= CONFIG_VGA_CTL_MMIO+4 && waddr < CONFIG_VGA_CTL_MMIO + 8)
    {  
      return ;
    }
    #endif
  #ifdef CONFIG_HAS_AUDIO
    if (waddr >= CONFIG_AUDIO_CTL_MMIO && waddr < CONFIG_AUDIO_CTL_MMIO + 8)
    {  
      return ;
    }
  #endif  
    assert(out_of_bound(waddr));
    uint8_t *paddr = ((uint8_t*)(guest_to_host(waddr))+ waddr%4);

    for (int i = 0; i < 4; i++) {
        if (wmask & (1 << i)) {
            paddr[i] = (wdata >> (i * 8)) & 0xFF; // 写入每个字节
        }
    }
}