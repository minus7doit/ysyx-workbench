#include <assert.h>
#include <isa.h> 
#include "sdb.h"
#include <readline/readline.h>
#include <readline/history.h>
word_t test_expr(){
  bool success;
  size_t  len=0;
  char *buf=NULL;
  char *exp=NULL;
  FILE	*fp=fopen("/home/minus7/ysyx-workbench/nemu/tools/gen-expr/input","r");
  if(fp==NULL){
		   perror("Error opening file");
		   return -1;
  }
  int i=0;
  while(getline(&buf,&len,fp)!=-1){
  char *gen_result_str=strtok(buf," ");
  uint32_t gen_result;
  sscanf(gen_result_str,"%u",&gen_result);
  exp=strtok(NULL,"\n");
    printf(" the expression is %s",exp);
  uint32_t result=expr(exp,&success);
 printf(" expected:%u,what you get: %u\n", gen_result,result);

  if(result!=gen_result){
		  printf(" the expression is %s",exp);
		  printf(" expected:%u,what you get: %u\n", gen_result,result);
		  assert(0);
  }
		 i++;
		printf("the %d th calculate is successful\n",i);
  }
free(buf);
fclose(fp);
return 0;

}
