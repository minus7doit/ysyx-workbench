#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcrc5.h"
//#include "Vcrc5_024unit.h"
#include "svdpi.h"
#include "Vcrc5__Dpi.h"

#define MAX_SIM_TIME 200
vluint64_t sim_time = 0;
bool sim_break=0;
//VerilatedVcdC *m_trace = new VerilatedVcdC;
// Vcrc5 *dut = new Vcrc5;
void finish_sim(){
    //m_trace->close();
    // delete dut;
     //exit(EXIT_SUCCESS);
    sim_break=true;
   // std::cout << "NPC executed ebreak. Ending simulation." << std::endl;
    //Verilated::gotFinish(true); // 通知Verilator仿真结束
}

int main(int argc, char** argv, char** env) {
    Vcrc5 *dut = new Vcrc5;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("crc5_waveform.vcd");


	while (sim_time < MAX_SIM_TIME) {
    //dut->rst_n=1;
    dut->crc5_en   =1;
    if(sim_time > 1 && sim_time < 5){
        dut->din = 0b01110000001;
        dut->crc5_check=0b00100;
        //dut->rst_n = 0;
    }
    if(sim_time > 50){
        dut->din = 0b01000000101;
        dut->crc5_check=0b10000;
    }

    //dut->clk ^= 1;
    dut->eval();
    m_trace->dump(sim_time);
    sim_time++;
    if(sim_break) break;
}
    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}

