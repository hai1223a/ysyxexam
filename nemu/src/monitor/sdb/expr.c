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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUMBER, TK_8, TK_7, TK_6, 

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // 加号
  {"-", '-'},           // 减号
  {"\\*", '*'},         // 乘号
  {"/", '/'},           // 除号
  {"\\(", '('},         // 左括号
  {"\\)", ')'},         // 右括号
  {"[0-9]+", TK_NUMBER},// 一个或多个数字
  {"==", TK_EQ},        // equal
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
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  int tokens_position = 0;
  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        if(tokens_position == 31) Assert(0, "The expression is too long\n");
        switch (rules[i].token_type) {
          case '+':
          case '-':
          case '*':
          case '/':
          case '(':
          case ')':
            tokens[tokens_position].type = rules[i].token_type;
            break;
          case TK_NUMBER:
            if(substr_len > 31) Assert(0, "The number is too long\n");
            strncpy(tokens[tokens_position].str,e+position, substr_len);
            tokens[tokens_position].type = TK_NUMBER;
            break;
          default: 
        }
        tokens_position++;
        position += substr_len;
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  for (int i = 0; i < 32; i++)
  {
    printf("tokens.type = %d, tokens.str = %s\t", tokens[i].type, tokens[i].str);
  }
  return true;
}

typedef struct stack
{
  int data[32];
  int top;
} Stack;

void push_stack(Stack *p_stack, int data) {
  Assert((p_stack->top < ARRLEN(p_stack->data)),"堆栈已满,函数push_stack");
  p_stack->data[p_stack->top] = data;
  p_stack->top++;
}

int pop_stack(Stack *p_stack) {
  Assert(p_stack->top, "堆栈为空,函数pop_stack");
  int data = p_stack->data[p_stack->top--];
  return data;
}

int arithmetic(int a, int b, int op){
  switch (op)
  {
    case '+': return a+b;
    case '-': return a-b;
    case '*': return a*b;
    case '/': return a/b;
    default: Assert(0, "无此计算类型,函数:arithmetic");
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
    
  }

  // int Lbracket[10] = {0};
  // int Rbracket[10] = {0};
  // int position_Lbracket,position_Rbracket = 0;
  // position_Lbracket = position_Rbracket = 0;

  // for(int i = 0; i < 32; i++)
  // {
  //   if(tokens[i].type == '(') Lbracket[position_Lbracket++] = i;
  //   if(tokens[i].type == ')') Rbracket[position_Rbracket++] = i;
  // }
  // Assert(position_Lbracket == position_Rbracket, "括号不完整");
  Stack numstack = {.top = 0};
  for(int i = 0; i < 40; i ++)
  push_stack(&numstack, 100);
  pop_stack(&numstack);
  
  // /* TODO: Insert codes to evaluate the expression. */
  // TODO();

  return 0;
}
