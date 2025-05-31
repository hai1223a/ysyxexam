#ifndef __DUT_H__
#define __DUT_H__

void init_difftest(char *ref_so_file, long img_size, int port);
void difftest_step();

#endif