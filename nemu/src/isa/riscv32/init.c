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
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static const uint32_t img [] = {
/*  0x00000297,  // auipc t0,0   //把pc指向的地址+imm存到寄存器t0里面，pc一开始指向0x80000000,imm是0
               //向左位移12位
  0x00003797,   //0000 0000 0000 0000 0011 01111 0010111//auipc a5,3//这里是20位位宽的3,向左位移12位，那么就是0x00003000+0x80000004,就是0x80003004
  0x02f28023,//  0000001 01111 00101 000 00000 0100011 sb a5,0x1c(t0)//把a5的值存到t0+11100里，即0x80000000+28: 0x1c即0x8000001c中
  0x00028e23,  //0000000 00000 00101 000 11100 0100011 sb  zero,16(t0)//把$0的值存诸到了t0的0x80000000+16即0x80000010当中，所以0x80000010的值改变了
  0x0202c103,  //0000 0001 1100 0010 1100 0001 0000 0011//把0x8000001c的值取出来存到sp中
  0x01c2c503,  // lbu a0,16(t0)//把0x80000010的值 0 取出来，存到a0当中
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data*/
0x00000413,
0x00009117,
0xffc10113,
0x00c000ef,
0x00000513,
0x00008067,
0xff010113,
0x00000517,
0x01c50513,
0x00112623,
0xfe9ff0ef,
0x00050513,
0x00100073,
};

static void restart() {
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
}
