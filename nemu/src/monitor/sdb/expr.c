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
  TK_NOTYPE = 256, TK_EQ, TK_NUMBER,

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

void init_tokens(){
  for (int i = 0; i < 32; i++)
  {
    tokens[i].type = 0;
    memset(tokens[i].str, 0, sizeof(tokens[i].str));
  }
}
static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;
  int tokens_position = 0;
  init_tokens();
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
            tokens_position++;
            break;
          case TK_NUMBER:
            if(substr_len > 31) Assert(0, "The number is too long\n");
            strncpy(tokens[tokens_position].str,e+position, substr_len);
            tokens[tokens_position].type = TK_NUMBER;
            tokens_position++;
            break;
          default: 
        }
        printf("position = %d, substr_len = %d, tokens_position = %d\n", position, substr_len, tokens_position);
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
  Assert((p_stack->top < ARRLEN(p_stack->data)),"堆栈已满");
  p_stack->data[p_stack->top] = data;
  p_stack->top++;
}

int pop_stack(Stack *p_stack) {
  Assert(p_stack->top, "堆栈为空");
  int data = p_stack->data[--(p_stack->top)];
  return data;
}

/*
  1: 表示栈内运算符优先级更高,需要弹出运算,并在判断直到入栈或者结束循环
  0: 表示栈外(当前)运算符优先级更高,需要入栈
  2: 表示栈内外运算符优先级相同,需要弹出,并结束循环判断
  -1: 表示错误
*/
int precede(Stack *p_stack, int op_type) {
  int result;
  if(p_stack->top == 0) return 0;
  switch (p_stack->data[p_stack->top-1])
  {
    case '+':
    case '-':
      if(op_type == '+' || op_type == '-' || op_type == ')') result = 1;
      if(op_type == '*' || op_type == '/' || op_type == '(') result = 0;
      break;
    case '*':
    case '/':
      if(op_type == '+' || op_type == '-' || op_type == ')' \
      || op_type == '*' || op_type == '/') result = 1;
      if(op_type == '(') result = 0;
      break;
    case '(':
      if(op_type == ')') result = 2;
      if(op_type == '+' || op_type == '-' || op_type == '(' \
        || op_type == '*' || op_type == '/') result = 0;
      break;
    default:
      result = -1;
  }
  return result;
}

int arithmetic(int a, int b, int op){
  switch (op)
  {
    case '+': return a+b;
    case '-': return a-b;
    case '*': return a*b;
    case '/': return a/b;
    default: Assert(0, "无此计算类型");
  }
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
    
  }
  int result;
  Stack numstack = {.top = 0};
  Stack opstack = {.top = 0};
  int i = 0;
  while(tokens[i].type)
  {
    if(tokens[i].type == TK_NUMBER) {
      push_stack(&numstack, atoi(tokens[i].str));
      i++;
      continue;
    }
    if(tokens[i].type == '+' || tokens[i].type == '-' || tokens[i].type == '*' || \
       tokens[i].type == '/' || tokens[i].type == '(' || tokens[i].type == ')')
    {
      int precede_statu;
      do{
        precede_statu = precede(&opstack, tokens[i].type);
        switch(precede_statu)
        {
          case -1: Assert(0, "可能有问题哦");
          case 0: 
            push_stack(&opstack, tokens[i].type);
            break;
          case 1: 
            int a = pop_stack(&numstack);
            int b = pop_stack(&numstack);
            int op = pop_stack(&opstack);
            push_stack(&numstack, arithmetic(b, a, op));
            break;
          case 2:
            pop_stack(&opstack);
        }
      } while(precede_statu == 1);
      i++;
      continue;
    }
    Assert(0, "键入了不支持运算的符号");
  }

  while(opstack.top)
  {
    Assert(numstack.top > 1, "表达式不正确");
    int a = pop_stack(&numstack);
    int b = pop_stack(&numstack);
    int op = pop_stack(&opstack);
    push_stack(&numstack, arithmetic(b, a, op));
  }
  result = pop_stack(&numstack);
  printf("%d\n",result);
  Assert(result >= 0, "表达式结果为负数");
  return (word_t)result;
}
