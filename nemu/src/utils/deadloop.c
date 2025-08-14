#include <cpu/deadloop.h>

void deadloop_detect(DEADLOOP *dl, vaddr_t cur_pc) {

  if (dl->last_pc + DL_RANGE >= cur_pc &&
      dl->last_pc - DL_RANGE <= cur_pc) {
    dl->loop_cnt++;
  } 
  else {
    dl->last_pc = cur_pc;
    dl->loop_cnt = 1;
  }
  if (dl->loop_cnt > DEADLOOP_THRESHOLD) {
    nemu_state.state = NEMU_ABORT;
    Log("Dead loop detected at " FMT_WORD, cur_pc);
  }
  //Log("check the dl valid or not,with the last_pc is 0x%08x,loop_cnt is %lu",dl->last_pc,dl->loop_cnt);
}