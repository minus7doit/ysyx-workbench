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
#include <assert.h>
#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/vaddr.h>
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");
  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
	nemu_state.state=NEMU_QUIT; 
  	return -1;
}
static int cmd_si(char *args){
	uint64_t num = atoi(args);
	if(args == NULL) cpu_exec(1);
	else cpu_exec(num);
	return 0;
}

static int cmd_info(char *args){
        if(args==NULL) printf("please input 'info r'or'info w\n'");
		else if(strcmp(args,"r")==0) isa_reg_display();
		else if(strcmp(args,"w")==0) wp_print(); 
		else printf("please input 'info r'or'info w'\n");
		return 0;
}

static int cmd_x(char *args){
	char *args_end = args + strlen(args);
	char *arg1 = strtok(args, " ");
	
	char *arg2 = arg1 + strlen(arg1) + 1;
		
	if (arg2 >= args_end) {
	arg2 = NULL;}
	
	int len = atoi(arg1);
	uint32_t addr;
	sscanf(arg2,"%x",&addr);
	printf("The hexadecimal string %s is converted to %x in hexadecimal.\n", arg2, addr);
	for(int i=0;i<len;i++){
	printf("the data at %x is %d\n",addr,vaddr_read(addr,4));
	addr=addr+4;
	}

	return 0;
}

static int cmd_p(char *args){
	bool success;
    printf("the result of the expression is %d\n",expr(args,&success));
	return 0;
}

static int cmd_w(char *args){
      WP *wp=new_wp();
	  bool success;
	  uint32_t result=expr(args,&success);
	  wp->result=result;
	  strcpy(wp->expression,args);//段错误发生在这里
	  success=true;
	  printf("wp 's member value is NO:%d EXPR:%s and RESULT %u\n",wp->NO,wp->expression,wp->result);
//	  if(success) 
//			  printf("Watchpoint %d set for expression\n", wp->NO);
      return 0;
  }
static int cmd_d(char *args){
	printf("the args is  %s",args);
	int NO;
	sscanf(args,"%d",&NO);
    wp_delete(NO);
	printf("NO %d watchpoint  delete successfully\n ",NO);

    return 0;
  }


static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "step forward for 1 or other", cmd_si },
  {"info", " print reg state or watcher info",cmd_info },
  { "x", " scan the Memory,Example: x 10 0x80000000,will output 10 values of 4 byte from start adress 0x80000000",cmd_x },
  { "p", "calculate the value of the arthmetic expression",cmd_p},
  { "w", "set a watcher point",cmd_w},
  { "d", "delte the watcher point whose serial number is N",cmd_d},
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }
    //    printf(" the cmd is %s \n ",cmd);
    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
//	printf(" the args is %s \n ",args);
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();
//	test_expr();
  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
