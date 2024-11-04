/**************************************************************************************
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
#include <assert.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
		int regs_num=sizeof(regs)/sizeof(regs[0]);
		if(regs_num == 0) printf(" There is no reg in this program\n");
		for(int i=0;i<regs_num;i++){
//	 printf("the addr of reg's: %p\n",regs[i]);
	 	printf("the %dth reg's name: %-8s  value:dec:%d\thex:%x\n",i+1,regs[i],cpu.gpr[i],cpu.gpr[i]);
		}
}

word_t isa_reg_str2val(const char *s, bool *success) {
    int regs_num=sizeof(regs)/sizeof(regs[0]);
 //	printf("the reg's name : %s\n",s);
	for(int i = 0;i< regs_num;i++){
 		if(strcmp(s,regs[i])==0) {
		*success=true;return cpu.gpr[i];}
  	}
  *success=false;	
   printf(" There is no reg be named %s",s);
  return 0;
}
