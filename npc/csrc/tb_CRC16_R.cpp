#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VCRC16_R.h"
//#include "VCRC16_R_024unit.h"
#include "svdpi.h"
#include "VCRC16_R__Dpi.h"

#define MAX_SIM_TIME 600
vluint64_t sim_time = 0;
bool sim_break=0;
//VerilatedVcdC *m_trace = new VerilatedVcdC;
// VCRC16_R *dut = new VCRC16_R;
void finish_sim(){
    //m_trace->close();
    // delete dut;
     //exit(EXIT_SUCCESS);
    sim_break=true;
   // std::cout << "NPC executed ebreak. Ending simulation." << std::endl;
    //Verilated::gotFinish(true); // 通知Verilator仿真结束
}

int main(int argc, char** argv, char** env) {
    VCRC16_R *dut = new VCRC16_R;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("CRC16_R_waveform.vcd");


	while (sim_time < MAX_SIM_TIME) {
    dut->rst_n=1;
    
    if(sim_time <= 50){
        dut->rst_n = 0;
        dut->I_eop=0;
        dut->I_valid=0;
        dut->I_sop=0;
        dut->w_en=0;
        dut->I_ready=1;
    }
    if(sim_time > 50&&sim_time<=100){
        dut->crc16_en=1;
        dut->w_en=1;
        dut->I_sop = 1;
        dut->din = 0b00001000;
        dut->I_valid = 0b1;
        if (sim_time > 52)
        {
        dut->I_valid = 0b0;
        }   
    }
    if(sim_time > 100&&sim_time<=150){
        dut->din = 0b01011000;
        dut->I_valid = 0b1;
        if (sim_time > 102)
        {
        dut->I_valid = 0b0;
        }   
    }
    if(sim_time > 150&&sim_time<=200){
        dut->I_sop = 0b0;
        //dut->din = 0b00000001;
        dut->din = 0b00000011;
        //dut->din = 0x82;
        dut->I_valid = 0b1;
        if (sim_time > 152)
        {
        dut->I_valid = 0b0;
        }   
    }
    if(sim_time > 200&&sim_time<=250){
        //dut->din = 0b00000010;
        dut->din = 0b00000100;
        //dut->din = 0x65;
        dut->I_valid = 0b1;
        if (sim_time > 202)
        {
        dut->I_valid = 0b0;
        }   
    }
    if(sim_time > 250&&sim_time<=300){
        //dut->din = 0b00000011;
        dut->din = 0b00000101;
        //dut->din = 0x90;
        dut->I_valid = 0b1;
        if (sim_time > 252)
        {
        dut->I_valid = 0b0;
        }   
    }
    if(sim_time > 300&&sim_time<=350){
        //dut->din = 0b00000100;
        dut->din = 0b00000110;
        //dut->din = 0x16;
        dut->I_valid = 0b1;
        if (sim_time > 302)
        {
        dut->I_valid = 0b0;
        }   
    }
    if(sim_time > 350&&sim_time<=400){
        //dut->din = 0b00000101;
        dut->din = 0b00000111;
        dut->I_valid = 0b1;
        if (sim_time > 352)
        {
        dut->I_valid = 0b0;
        }   
    }
    if(sim_time > 400&&sim_time<=450){
        //dut->din = 0xd5;
        dut->din = 0xcc;
        //dut->din = 0x2a;
        dut->I_valid = 0b1;
        if (sim_time > 402)
        {
        dut->I_valid = 0b0;
        }   
    }
    if(sim_time > 450&&sim_time<=500){
        //dut->din = 0x44;
        dut->din = 0xac;
        //dut->din = 0x72;
        dut->I_valid = 0b1;
        dut->I_eop = 0b1;
        if (sim_time > 452)
        {
        dut->I_valid = 0b0;
        }   
    }
    if(sim_time > 500){
        dut->w_en = 0b0;
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

