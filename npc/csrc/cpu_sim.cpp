#include "npc.h"

//void difftest_step(vaddr_t pc, vaddr_t npc);


void cpu_sim(int n) {
    if(n == -1){
        while (sim_time < MAX_SIM_TIME) {
            if(sim_time <=3 ){
                dut->rst = 1;
            }
            else {
                dut->rst = 0;
            }
            
            dut->clk ^= 1;
            dut->eval();
            
    
            m_trace->dump(sim_time);

            sim_time++;
            m_trace->flush();
            if(sim_break) {
            if(!dut->exit_code){
                printf("\033[32mNPC hit a good trap. Ending simulation.\033[32m");
            } 
            else {
                printf("\033[31mNPC hit a bad trap. Ending simulation.\033[31m");
            }
            break;
    }
    }
}
    else {
        for(int i = 0; i < 2*n; i++) {
            
            if(sim_time <=3 ){
                dut->rst = 1;
            }
            else {
                dut->rst = 0;
            }

            dut->clk ^= 1;

            dut->eval();

            m_trace->dump(sim_time);
            sim_time++;
            m_trace->flush();
            
            if(sim_break) {
                if(!dut->exit_code){
                   printf("\033[32mNPC hit a good trap. Ending simulation.\033[32m");
                } 
                else {
                    printf("\033[31mNPC hit a bad trap. Ending simulation.\033[31m");
                }
                break;
            }
        }
}
    if(dut->rst) {
             printf("\033[34mwaiting for reset finish\033[34m\n");   
    }
}
