#ifndef __DEADLOOP_H__
#define __DEADLOOP_H__
#include <cpu/cpu.h>

#define DEADLOOP_THRESHOLD 5000000
#define DL_RANGE 4

typedef struct{
    vaddr_t last_pc;          // 程序计数器s
    uint64_t loop_cnt;   // 循环次数
}DEADLOOP;


#endif