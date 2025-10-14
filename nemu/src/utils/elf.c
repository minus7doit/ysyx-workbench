#include <cpu/decode.h>
 // Assuming elf.h contains necessary ELF handling functions
#include <memory/vaddr.h>
#include <elf.h>
#define MAX_SYMBOLS 4*5120
#define MAX_CALL_STACK 512
typedef struct {
    char *name;
    uint32_t addr;
    uint32_t size; // Size of the function
} ElfSymbol;


ElfSymbol symbols[MAX_SYMBOLS]; // Assuming a maximum of 100 symbols 
int symbol_count = 0;
size_t sym_num = 0;
//uintptr_t call_stack [MAX_CALL_STACK];
uint32_t stack_ptr = 0;

#ifndef FTRACE

void init_elf(const char *elf_file) {
    if (elf_file == NULL) {
        Log("No ELF file specified.");
        return;
    }
    
    FILE *fp = fopen(elf_file, "rb");
    if (fp == NULL) {
        Log("Failed to open ELF file: %s", elf_file);
        return;
    }
    //printf("check elf file %s\n", elf_file);
    Elf32_Ehdr ehdr;
    int num = 0;
    num=fread(&ehdr,sizeof(Elf32_Ehdr), 1, fp);
    if (num == 0){
        Log("Failed to read ELF header from file: %s", elf_file);
        fclose(fp);
return;
    }
    fseek(fp, ehdr.e_shoff, SEEK_SET);

    Elf32_Shdr shdr;

    Elf32_Shdr strtab_header = {0},
              symtab_header={0};
    printf("e_shnum = %d\n", ehdr.e_shnum);


    for (int i = 0; i < ehdr.e_shnum; i++)
    {
        num=fread(&shdr, sizeof(Elf32_Shdr), 1, fp);
        //printf("Section %d: type = %x, name = %d, ehdr.e_shstrndx = %d ,addr = %x ,offset = %x, size = %x\n", 
        //       i, shdr.sh_type, shdr.sh_name,ehdr.e_shstrndx, shdr.sh_addr,shdr.sh_offset, shdr.sh_size);
        if (shdr.sh_type == SHT_SYMTAB) {
            symtab_header = shdr;
        } else if (shdr.sh_type == SHT_STRTAB && (i == ehdr.e_shstrndx - 1)) {
            strtab_header = shdr;   
        }
}
    /*printf("symtab_header: type = %x, name = %d, addr = %x ,offset = %x, size = %x\n", 
           symtab_header.sh_type, symtab_header.sh_name, symtab_header.sh_addr,
           symtab_header.sh_offset, symtab_header.sh_size);

    printf("strtab_header: type = %x, name = %d, addr = %x ,offset = %x, size = %x\n", 
           strtab_header.sh_type, strtab_header.sh_name, strtab_header.sh_addr,
           strtab_header.sh_offset, strtab_header.sh_size);
    */
    
    char strtab[symtab_header.sh_size];
    //printf("symtab_header.sh_size = %x\n", symtab_header.sh_size);
    fseek(fp, strtab_header.sh_offset, SEEK_SET);
    num=fread(strtab, sizeof(char), strtab_header.sh_size, fp);

    fseek(fp, symtab_header.sh_offset, SEEK_SET);
    Elf32_Sym sym;
    
    sym_num = symtab_header.sh_size / symtab_header.sh_entsize;
    for (int i = 0; i < sym_num; i++) {
        num=fread(&sym, sizeof(Elf32_Sym), 1, fp);
        //printf("Symbol: name = %d, value = %x, size = %x, info = %x\n", 
          //     sym.st_name, sym.st_value, sym.st_size, sym.st_info);
        //printf("symbol : %d\n",sym.st_name);
        if (ELF32_ST_TYPE(sym.st_info) == STT_FUNC) {
            symbols[symbol_count].name = strdup(&strtab[sym.st_name]);//sym.st_name 存的是地址偏移，根据地址读出符号
            symbols[symbol_count].addr = sym.st_value;
            symbols[symbol_count].size = sym.st_size;
            //printf("Symbol: %s, addr = %x , size = %d\n", symbols[symbol_count].name, symbols[symbol_count].addr , symbols[symbol_count].size);
            symbol_count++;
        }
    }
    fclose(fp);
}



void ftrace_log(vaddr_t addr, const char *type , vaddr_t npc , uint32_t stack_ptr) {
    // Log the instruction and its address
    int func_idx = 0;
    for(int i = 0 ;i < symbol_count; i++) {
        if((npc >= symbols[i].addr )&& (npc < symbols[i].addr + symbols[i].size)) {
            func_idx = i;
            break;
        }
    }
    for (uint32_t j = 0; j < stack_ptr; j++) {
       printf(" ");
    }
    if(strcmp(type, "return") == 0) {
         printf ("0x%08x: %s[%s]\n",addr, type,symbols[func_idx].name);
    }
    else{
         printf("0x%08x: %s[%s@0x%08x]\n",addr, type,symbols[func_idx].name,npc);
    }
}
void exec_instructions(Decode *s) {
    vaddr_t pc = s->pc;
    uint32_t instr = s->isa.inst;
    vaddr_t npc = s->dnpc;
    if((instr & 0X7F )== 0x6F){
        stack_ptr++;
        ftrace_log(pc,"call",npc ,stack_ptr);
    }
    else if((instr & 0X7F) == 0x67 && (instr != 0x8067)) {
        if(stack_ptr > 0){
            stack_ptr++;
            ftrace_log(pc,"call",npc ,stack_ptr);
        }
    }   
    else{
        if(instr == 0x8067) {
            if(stack_ptr > 0) {
                stack_ptr--;
            }
            else {
                Log("Stack underflow: stack_ptr = %d", stack_ptr);
                return;
            }
        ftrace_log(pc,"return",npc,stack_ptr+1);
        }
      
    }
}
#endif