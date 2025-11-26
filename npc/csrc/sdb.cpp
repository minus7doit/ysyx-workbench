#include "npc.h"
#include <stdio.h>
#include <stdlib.h>

#include <readline/readline.h>
#include <readline/history.h>


void cpu_sim(int n);
void finish_sim();
static int is_batch_mode = false;


#define ARRLEN(array) (sizeof(array) / sizeof(array[0]))


static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");
  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}




static int cmd_c(char *args) {
    cpu_sim(-1);
    return 0;
}

static int cmd_q(char *args) {
   // printf("you have entered the cmd q \n");
    dut->exit_code= 0;
    finish_sim();
    return 0;
}


static int cmd_si(char *args){
	//printf("you have entered the cmd si \n");
	if(args == NULL) cpu_sim(1);
	else
	{
			uint64_t num = atoi(args);
			  cpu_sim(num);
	}

	return 0;
}

static int cmd_x(char *args){
    if(args == NULL) {
        printf("please input 'x <n> <addr>'\n");
        return 0;
    }
    //char *endptr;
    
    char *arg1 = strtok(args, " ");

    char *arg2 = arg1 + strlen(arg1) + 1;
    

    int num = strtoul(arg1, NULL, 10);

    uint32_t p_addr= strtoul(arg2, NULL, 16);
    uint32_t *addr = guest_to_host(p_addr);

    for(int i = 0; i < num; i++) {
        printf("0x%08x: 0x%08x\n", p_addr + i * 4, *(addr + i));
    }
    printf("scan the memory from address 0x%x for %d words:\n", p_addr, num);
    
    return 0 ;
}

static int cmd_info(char *args) {
    //printf("Register information:\n");
    //char *arg =strtok()
    if(strcmp("r",args) == 0) {
      for (int i = 0; i < 32; i++) {
          printf("ysyx_24110005_NPC__DOT__reg_rd__DOT__rf[%d]: 0x%08x\n", i, dut->rootp->ysyx_24110005_NPC__DOT__Write_Back_Unit__DOT__rf[i]);
      }
    }

    //printf("PC: 0x%08x\n", dut->rootp->ysyx_24110005_NPC__DOT__pc);
    return 0;
}


static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "step forward for 1 or other", cmd_si },
  { "x", "scan the Memory,Example: x 10 0x80000000,will output 10 values of 4 byte from start address 0x80000000", cmd_x },
  { "info", "print the information of the current register", cmd_info}
};

#define NR_CMD ARRLEN(cmd_table)


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
      if(sim_break) {
        printf("Simulation quit successfully.\n");
        return;
    }
    
    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
   
   
  
  
}
