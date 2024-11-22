#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vysyx_24110005_NPC.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vysyx_24110005_NPC* top;
#define MAX_SIM 100
void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vysyx_24110005_NPC;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("ysyx_24110005_NPC_waveform.vcd");
  top->clk=0;
  top->rst=0;
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}
int main() {
  sim_init();
  uint32_t t;
  while(t<MAX_SIM){
      top->clk=~top->clk;
      if(t<5) top->rst=1; else top->rst=0;
      t++;
  }
  sim_exit();
}

