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

#include "sdb.h"
#include <cpu/cpu.h>
#define NR_WP 32

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;

}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(){
		WP * wp;
		if(free_==NULL) assert(0);
		wp=free_;
		free_=free_->next;	
		wp->next=head;//这个地方导致free_->next=0,在此之前，将free提到free->next
		head=wp;
//		printf(" in function NEW_WP() the wp->NO is %d return successful \n",wp->NO);
		return wp;
}
void free_wp(WP *wp){
        if(wp == head) {
		head=head->next;
		  wp->next=free_;
          free_=wp;
		  return;//增加return，避免后面再删除一次发生段错误。
		}
		WP* temp = head;
		while(wp->NO!=temp->next->NO&&temp!=NULL){
        temp=temp->next;
		}
		if(temp==NULL) assert(0);
		temp->next=wp->next;
		wp->next=free_;
		free_=wp;

}
void wp_delete(int NO){
WP * wp = head;
while(wp->next!=NULL){
	if(wp->NO==NO) break;
	wp=wp->next;
	}
	free_wp(wp);
}
void wp_print(){
	WP *ptr = head;
	if(ptr==NULL){
	printf("there is no watchpoint set ");
	}
	printf("NUM\t\tEXPR\t\tRESULT\n");
	while(ptr!=NULL){
	printf("%d\t\t%s\t\t%u\n",ptr->NO,ptr->expression,ptr->result);
	ptr=ptr->next;
	}
}

void scan_watchpoint(){
	WP * wp = head;
	bool success;
	while(wp->next!=NULL){
		uint32_t new_res = expr(wp->expression,&success);
		if(new_res!=wp->result)   {
			printf(" the value of watchpoint %d has changed",wp->NO);
			printf("Old value: 0x%x, New value: 0x%x\n", wp->result, new_res);
			nemu_state.state=NEMU_STOP;
			wp->result=new_res;
	}
		wp=wp->next;
	}
}

