#undef NDEBUG
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cpu/ringbuffer.h>
//#include<cpu/decode.h>
void RingBuffer_init(RingBuffer *iringbuf)
{
    iringbuf->end = 0;
    iringbuf->length=1;
}

void RingBuffer_write(RingBuffer *iringbuf, char *asm_str,vaddr_t pc,uint32_t *inst)
{   
    Insts *inst_ptr=&iringbuf->ins_info[iringbuf->end];//inst每次传入的地址是相同的
    strcpy(inst_ptr->asm_str,asm_str);
    inst_ptr->pc=pc;
 //   memcpy(inst_ptr->inst,inst,1);
    inst_ptr->inst=*inst;
    iringbuf->end=(iringbuf->end+1)%MAX_RINGBUF;

    if(iringbuf->length<MAX_RINGBUF) iringbuf->length+=1;
}
void RingBuffer_print(RingBuffer* iringbuf,int n){
    //Insts *inst_ptr=&iringbuf->ins_info; 
    for(int i=0;i<n;i++){
    printf("0x%x: %08x  %s\n",iringbuf->ins_info[i].pc,iringbuf->ins_info[i].inst,iringbuf->ins_info[i].asm_str);
}
}


















