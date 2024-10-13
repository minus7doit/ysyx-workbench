/**************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing Universit
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
#include <memory/vaddr.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
//不能处理 3  6 11识别为361
#include <regex.h>
int depth=0;
enum {
  TK_NOTYPE = 256, 
  TK_EQ, 
  TK_UEQ,//不等号
  TK_NUM,
  TK_REG,//寄存器
  TK_HEX,//十六进制
  TK_AND,//与&&
  TK_DEREF,//指针解引
  TK_IDTF,//标识符，一些字母之类


};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  {" +", TK_NOTYPE},    // spaces
  {"\\(", '('},
  {"\\)", ')'},      
  {"\\+", '+'},         // plus
  {"-", '-'},//minus
//  {"[a-zA-Z_0-9]+",TK_IDTF},
  {"\\*", '*'},       //multiply  
  {"/", '/'},      //devide
  {"==", TK_EQ},        // equal
  {"0[xX][0-9a-fA-F]+", TK_HEX},
  {"[0-9]+",TK_NUM},
  {"!=", TK_UEQ},
  {"&&", TK_AND},
  {"\\$[a-zA-Z0-9]+", TK_REG},
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[1024];
} Token;

static Token tokens[10000] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;
static int tokens_len;
static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;
  int j=0;
  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        switch (rules[i].token_type) {
		 case '+':
		 case '-':
		 case '*':
		 case '/':
		 case '(':
         case ')':
		 case TK_DEREF:
		 case TK_EQ:
		 case TK_UEQ:tokens[j++].type=rules[i].token_type;break;
		 case TK_REG:
		 //case TK_IDTF:
		 case TK_NUM:
//					   printf("the token[%d].str is %s in make_token\n ",j-1,tokens[j-1].str);
		 case TK_HEX:	tokens[j].type=rules[i].token_type;
						if(substr_len>31){
						strncpy(tokens[j].str,substr_start,31);
						tokens[j++].str[31]='\0';
						printf("warning:Token is too long,truncated to %s\n",tokens[i].str);
                      }
                      else   {
                        strncpy(tokens[j].str,substr_start,substr_len);
                        tokens[j++].str[substr_len]='\0';					
						}
						break;				
		 default: break;				  
        }
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  tokens_len=j;
  return true;
}

bool check_parentheses(int p, int q) {
    // 检查 tokens[p] 和 tokens[q] 是否是匹配的左右括号
    if (tokens[p].type == '(' && tokens[q].type == ')') {
        int parentheses = 0;
        for (int i = p; i <= q; i++) {
            if (tokens[i].type == '(') parentheses++;
            else if (tokens[i].type == ')') parentheses--;
            // 如果在中间某处出现 parentheses == 0，说明括号不匹配
            if (i != q && parentheses == 0) {
                return false;
            }
        }
        // 如果最后 parentheses == 0，说明是被匹配的括号包围
        return (parentheses == 0);
    }
    return false;
}


uint32_t find_main_op(int p,int q){//这里除法的优先级被提前了是为什么？
	int i;//p=0,q=1,  -1
	int priority;
    int min_priority = 100;  // 设置一个初始的高优先级值
    int op_position = -1;
	int parentheses = 0;
		for(i=p;i<q;i++){
        if (tokens[i].type == '(') parentheses++;
        else if (tokens[i].type == ')') parentheses--;
        else if (parentheses == 0) {  // 忽略括号内的运算符
			switch(tokens[i].type){
					case '+':priority=1;break;
					case '-':{
							 if(i==0) priority=100;
								else priority=1; 
								 break; }
					case '*':priority=2;break;
					case '/':priority=2;break;
   					case TK_AND: priority=6;break;
					case TK_EQ : priority=8;break;		 
					case TK_UEQ: priority=8;break;		 
					case TK_DEREF:priority=10;break;
					default :priority=100;break;
			}// 获取运算符的优先级
            if (priority <= min_priority) {
                min_priority = priority;
                op_position = i;
            }
        }
    }
    return op_position;//return 0;
}


uint32_t eval(int p,int q) {
  depth ++;
  uint32_t value;
  if (p > q) {
	if(tokens[p].type=='-'&&((tokens[p-1].type=='(')|(p==0))){
	tokens[p].type='*';
	return -1;
	}
	
//	else if (tokens[p].type == '*' && (p==0||tokens[p-1].type == '('||tokens[p-1].type==TK_EQ||tokens[p-1].type==TK_UEQ) ) {
	if(tokens[p].type == TK_DEREF){	
	return 0;
	}

	printf ("p=%d,q=%d,tokens[p].type=%s,tokens[q].type=%c\n",p,q,tokens[p].str,tokens[q].type);
	printf(" warning: Bad expression\n ");	  
    assert(0);
	return 0;
  }
  else if (p == q) {
		  bool success_reg;
		  if(tokens[p].type==TK_NUM)       sscanf(tokens[p].str,"%d",&value);
		  else if(tokens[p].type==TK_HEX)  sscanf(tokens[p].str,"%x",&value);
		  else if(tokens[p].type==TK_REG)  value=isa_reg_str2val(tokens[p].str,&success_reg);
		  return value;
  }
 else if (check_parentheses(p, q) == true) {
		  return eval(p + 1, q - 1);
  }
 else {//括号内不算主运算符，加了括号优先级不会变。
    int op = find_main_op(p,q);
    uint32_t val1 = eval(p, op - 1);
	uint32_t val2 = eval(op + 1, q);
    switch (tokens[op].type) {
      case '+'	  : return val1 + val2;
      case '-'    :	return val1 - val2;
      case '*'    : return val1 * val2;
      case '/'    : if(val2==0) {
				printf("zero appear as divisor ");assert(0);
				}
				return (int32_t)val1 / (int32_t)val2;
	  case TK_EQ  :if(val1 == val2) return 1;else return 0;
	  case TK_UEQ :if(val1==val2) return 0;else return 1;
	  case TK_DEREF: return vaddr_read(val2,4);
      default: assert(0);
			   
   }
  }
 depth--;
 }



word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

for (int i = 0; i <NR_REGEX; i++) {
	if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '('||tokens[i - 1].type==TK_EQ||tokens[i - 1].type==TK_UEQ)) {
	printf(" i=%d\n",i);
    tokens[i].type = TK_DEREF;
  }
}
	depth=0;
	return eval(0,tokens_len-1); 
}
