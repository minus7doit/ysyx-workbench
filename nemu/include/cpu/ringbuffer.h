#ifndef _RingBuffer_h
#define _RingBuffer_h
#include <cpu/cpu.h>
#include<cpu/decode.h>
#define MAX_RINGBUF 10
typedef struct {
    uint32_t pc;          // 指令地址
    uint32_t inst;        // 指令机器码
    char asm_str[64];     // 反汇编指令
} Insts;
typedef struct {
    Insts ins_info[MAX_RINGBUF];
    int length;
    int end;
} RingBuffer;

void RingBuffer_init(RingBuffer *iringbuf);

void RingBuffer_write(RingBuffer *iringbuf, char *asm_str,vaddr_t pc,uint32_t *inst);

void RingBuffer_print(RingBuffer* iringbuf,int n);

#endif

