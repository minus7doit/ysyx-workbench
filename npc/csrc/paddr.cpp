#include "npc.h"
#define PMEM_LEFT  ((vaddr_t)PMEM_BASE)
#define PMEM_RIGHT ((vaddr_t)PMEM_BASE + MEM_SIZE - 1)

int32_t inst_mem[MEM_SIZE];//模拟指令存储器,每个周期只读出一条指令


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
  printf("\033[34mprogram is reading npc memory: 0x%x \033[34m \n",raddr);
  assert(out_of_bound(raddr));
  return *(int *)((uint8_t*)guest_to_host(raddr)+raddr%4);
}

extern "C" void pmem_write(vaddr_t waddr, int wdata, char wmask) {
    printf("program is writing data:%08x to npc memory: 0x%08x \n",wdata,waddr);
    assert(out_of_bound(waddr));
    uint8_t *paddr = ((uint8_t*)(guest_to_host(waddr))+ waddr%4);
  for (int i = 0; i < 4; i++) {
        if (wmask & (1 << i)) {
            printf("actually writing to addr waddr & ~0x3u:0x%02x\n",((wdata >> (i * 8)) & 0xFF));
            paddr[i] = (wdata >> (i * 8)) & 0xFF; // 写入每个字节
        }
    }
   /*if (wmask == 0xf)
   {
    *paddr=wdata;
   }
   else if(wmask = 0x3){
    *paddr=wdata & 0xff;
   }
   else{
     *paddr=wdata & 0xf;
   }*/
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码, 
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
}