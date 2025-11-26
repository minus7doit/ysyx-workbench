#include "npc.h"

//void difftest_step(vaddr_t pc, vaddr_t npc);

//#include "Vysyx_24110005_NPC__Dpi.h"

void cpu_sim(int n) {
    if(n == -1){
        while (!sim_break) {
            if(sim_time <=3 ){
                dut->rst = 1;
            }
            else {
                dut->rst = 0;
            }
            
            dut->clk ^= 1;
            dut->eval();
            
            #if WAVE
            m_trace->dump(sim_time);
            #endif

            sim_time++;
            
            #if WAVE
            m_trace->flush();
             #endif

            if(sim_break) {
            if(!dut->exit_code){
                printf("\033[32mNPC hit a good trap. Ending simulation.\033[32m");
                printf("npc cycle = %ld\n", sim_time/2);
            } 
            else {
                printf("\033[31mNPC hit a bad trap. Ending simulation");
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
            #if WAVE
            m_trace->dump(sim_time);
            #endif
            sim_time++;
            #if WAVE
            m_trace->flush();
            #endif
           
            if(sim_break) {
                if(!dut->exit_code){
                   printf("\033[32mNPC hit a good trap. Ending simulation.\033[32m");
                   printf("npc cycle = %ld\n", sim_time/2);  

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
