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
  TK_NOTYPE = 256, TK_EQ, TK_DECIMAL, TK_HEXADECIMAL, TK_REG,
  TK_NEQ, TK_LOGICAND,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"\\+", '+'},                             // 加号
  {"-", '-'},                               // 减号或者负号
  {"\\*", '*'},                             // 乘号或者指针
  {"/", '/'},                               // 除号
  {"\\(", '('},                             // 左括号
  {"\\)", ')'},                             // 右括号
  {" +", TK_NOTYPE},                        // spaces
  {"==", TK_EQ},                            // equal
  {"[0-9]+", TK_DECIMAL},                   // 十进制数字
  {"0[xX][0-9a-fA-F]+", TK_HEXADECIMAL},    // 十六进制数字
  {"\\$[0-9a-z\\$]+", TK_REG},              // 寄存器名字
  {"!=", TK_NEQ},                           // 不相等
  {"&&", TK_LOGICAND},                      // 逻辑与
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

#define NUM_TOKENS 32
#define TOKEN_STR 32

typedef struct token {
  int type;
  char str[TOKEN_STR];
} Token;

static Token tokens[NUM_TOKENS] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

void init_tokens(){
  for (int i = 0; i < NUM_TOKENS; i++)
  {
    tokens[i].type = 0;
    memset(tokens[i].str, 0, TOKEN_STR);
  }
}

static bool make_token(char *e, int *valid_tokens) {
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
        if(tokens_position == NUM_TOKENS - 1) Assert(0, "The expression is too long\n");
        switch (rules[i].token_type) {
          case '+':
          case '-':
          case '*':
          case '/':
          case '(':
          case ')':
          case TK_EQ:
          case TK_NEQ:
          case TK_LOGICAND:
            tokens[tokens_position].type = rules[i].token_type;
            tokens_position++;
            break;
          case TK_DECIMAL:
            if(substr_len > NUM_TOKENS - 1) Assert(0, "The number is too long\n");
            strncpy(tokens[tokens_position].str,e+position, substr_len);
            tokens[tokens_position].type = TK_DECIMAL;
            tokens_position++;
            break;
          case TK_HEXADECIMAL:
            if(substr_len > NUM_TOKENS -1) Assert(0, "The number is too long\n");
            strncpy(tokens[tokens_position].str,e+position, substr_len);
            tokens[tokens_position].type = TK_HEXADECIMAL;
            tokens_position++;
            break;
          case TK_REG:
            if(substr_len > NUM_TOKENS -1) Assert(0, "The reg name is too long, 你估计打错了\n");
            strncpy(tokens[tokens_position].str,e+position, substr_len);
            tokens[tokens_position].type = TK_REG;
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

  *valid_tokens = tokens_position;
  return true;
}



word_t expr(char *e, bool *success) {
  int valid_tokens = 0;
  if (!make_token(e, &valid_tokens)) {
    *success = false;
    return 0;
  }
  // int negetive[32];
  // int position = 0;

  // if(check_parentheses(0, valid_tokens-1)) printf("\nhit\n");
  // ckeck_expression(0, valid_tokens-1, negetive, &position);
  // for (int i = 0; i < position; i++)
  // {
  //   printf("negetive[%d] = %d", i, negetive[i]);
  // }
  
  return 0;
}
