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

typedef struct watchpoint {
  int NO;
  char args[1100];
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

WP* new_wp() {
  Assert(free_, "监控点已经用完了");
  WP *p = free_;
  free_ = free_->next;
  p->next = NULL;
  return p;
}

void free_wp(WP *wp) {
  int NO = wp->NO;
  WP *p = free_;
  while (p->next)
  {
    if(!NO)
    {
      wp->next = p;
      free_ = wp;
      break;
    }
    if(p->NO + 1 == NO)
    {
      wp->next = p->next;
      p->next = wp;
      break;
    }
    p = p->next;
  }
}

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    printf("%p\n", &wp_pool[i]);
    memset(wp_pool[i].args, 0, sizeof(wp_pool[i].args));
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

void add_monitor(char *args) {
  WP *p = new_wp();
  
  strcpy(p->args, args);
  if(!head) {
    head = p;
    printf("%p\n", head);
    return;
  }
  WP *temp = head;
  printf("%p\n", temp);
  while (temp->next)
  {
    temp = temp->next;
    printf("%p\n", temp);
  }
  temp->next = p;
  printf("%p\n", p);
  printf("free_ = %p", free_);
}

void scan_monitor(word_t *DATA, int *index) {
  if(!head) return;
  WP *p = head;
  bool success = true;
  while (p->next || p)
  {
    *(index++) = p->NO;
    *(DATA + (p->NO)) = expr(p->args, &success);
    Assert(success, "表达式计算失败");
    p = p->next;
  }
}


/* TODO: Implement the functionality of watchpoint */

