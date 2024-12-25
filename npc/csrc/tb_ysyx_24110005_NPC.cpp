#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vysyx_24110005_NPC.h"
//#include "Vysyx_24110005_NPC_024unit.h"
#include "svdpi.h"
#include "Vysyx_24110005_NPC__Dpi.h"

#define MAX_SIM_TIME 200
vluint64_t sim_time = 0;
bool sim_break=0;
//VerilatedVcdC *m_trace = new VerilatedVcdC;
// Vysyx_24110005_NPC *dut = new Vysyx_24110005_NPC;
void finish_sim(){
    //m_trace->close();
    // delete dut;
     //exit(EXIT_SUCCESS);
    sim_break=true;
   // std::cout << "NPC executed ebreak. Ending simulation." << std::endl;
    //Verilated::gotFinish(true); // 通知Verilator仿真结束
}

int main(int argc, char** argv, char** env) {
    Vysyx_24110005_NPC *dut = new Vysyx_24110005_NPC;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("ysyx_24110005_NPC_waveform.vcd");


	while (sim_time < MAX_SIM_TIME) {
    dut->rst = 0;
    if(sim_time > 1 && sim_time < 5){
        dut->rst = 1;
    }

    dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
    if(sim_break) break;
}
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}

