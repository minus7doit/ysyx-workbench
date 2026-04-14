#include "npc.h"
#include "device.h"
#define PMEM_LEFT  ((vaddr_t)PMEM_BASE)
#define PMEM_RIGHT ((vaddr_t)PMEM_BASE + MEM_SIZE - 1)
#define FLASH_LEFT  ((vaddr_t)FLASH_BASE)
#define FLASH_RIGHT ((vaddr_t)FLASH_BASE + FLASH_SIZE - 1)
int32_t inst_mem[MEM_SIZE/4];//模拟指令存储器,每个周期只读出一条指令
uint8_t flash[FLASH_SIZE];
uint8_t mrom[MROM_SIZE];

#define DIFF_ENABLE 1
#if DIFF_ENABLE
#define ZERO_OR_ONE 0
#else
#define ZERO_OR_ONE 1
#endif

vaddr_t* guest_to_host(vaddr_t paddr) {
    assert(paddr >= PMEM_BASE && paddr < PMEM_BASE + FLASH_SIZE);
    return (vaddr_t *)flash + (paddr - PMEM_BASE)/4; //将物理地址转换为指针
}


static inline int in_range(vaddr_t addr, uint32_t l, uint32_t r) {
    return (addr >= l) && (addr <= r);
}

int out_of_bound(vaddr_t addr) {
    if (
        in_range(addr, 0x02000000u, 0x0200ffffu) ||  // CLINT
        in_range(addr, 0x0f000000u, 0x0fffffffu) ||  // SRAM
        in_range(addr, 0x10000000u, 0x10000fffu) ||  // UART16550
        in_range(addr, 0x10001000u, 0x10001fffu) ||  // SPI master
        in_range(addr, 0x10002000u, 0x1000200fu) ||  // GPIO
        in_range(addr, 0x10011000u, 0x10011007u) ||  // PS2
        in_range(addr, 0x20000000u, 0x20000fffu) ||  // MROM
        in_range(addr, 0x21000000u, 0x211fffffu) ||  // VGA
        in_range(addr, 0x30000000u, 0x3fffffffu) ||  // Flash
        in_range(addr, 0x40000000u, 0x7fffffffu) ||  // ChipLink MMIO
        in_range(addr, 0x80000000u, 0x9fffffffu) ||  // PSRAM
        in_range(addr, 0xa0000000u, 0xbfffffffu) ||  // SDRAM
        in_range(addr, 0xc0000000u, 0xffffffffu)     // ChipLink MEM
    ) {
        return 1;  // 合法地址
    }

    printf("\033[31m address = %08x is out of bound of ysyxSoC map at pc = %08x \033[0m\n",
           addr, npc_cpu.pc);
    return 0;      // 非法/保留地址
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