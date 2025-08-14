module ysyx_24110005_NPC(
    input clk,
    input rst,
    //input  [31:0]cpu_insts [1023:0], // 指令存储器
    output [31:0]exit_code// 用于存储退出代码
);

    import "DPI-C" function void finish_sim();
    import "DPI-C" function void inst_trace(input  int  unsigned pc, input  int  unsigned inst ,
                                            input  int  unsigned npc);
    import "DPI-C" function void function_trace(input  int  unsigned pc, input  int  unsigned inst, input  int  unsigned npc);

    import "DPI-C" function int pmem_read(input int unsigned raddr);
    import "DPI-C" function void difftest_step(input int unsigned pc, input int unsigned npc);




parameter DATA_WIDTH=32;
parameter OP_WIDTH=7;
parameter REG_ADDR_WIDTH=5;
parameter FUN_WIDTH=3;
parameter BASE_ADDR=32'h80000000;
    //parameter QUAR_WIDTH=8;
parameter MAX_INS=1024;



wire [FUN_WIDTH-1: 0]fun;
wire [OP_WIDTH-1:0]opcode;
wire [REG_ADDR_WIDTH-1:0] reg_waddr,reg_raddr1,reg_raddr2;
wire [DATA_WIDTH-1:0]imm;
wire [DATA_WIDTH-1:0]current_inst;

wire w_finish_sim;


reg [DATA_WIDTH-1:0]pc;
reg [DATA_WIDTH-1:0]dnpc;

initial begin
    pc = BASE_ADDR;
end

always@(posedge clk or rst)begin
        if(rst) 
            pc<=BASE_ADDR;
        else
            pc<=dnpc;
end



assign current_inst= pmem_read(pc);//相当于直接除以4了
//最后通过initial解决了pc的初始值问题

always@(posedge clk)begin
   if(w_finish_sim) begin
        finish_sim();
   end

   else begin   
    if(!rst) begin
        inst_trace(pc,current_inst,dnpc);
        function_trace(pc,current_inst,dnpc);
        difftest_step(pc,dnpc);
    end
   end
end



ysyx_24110005_Decoder #(
    .DATA_WIDTH(DATA_WIDTH),
    .OP_WIDTH(OP_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .FUN_WIDTH(FUN_WIDTH)
 )
ins_Decoder(
    .inst   (current_inst   ),
    .ra1    (reg_raddr1     ),
    .ra2    (reg_raddr2     ),
    .opcode (opcode         ),
    .imm    (imm            ),
    .w_addr (reg_waddr      ),
    .fun    (fun            )//选择执行哪一条指令;
);


wire [DATA_WIDTH-1:0]src1,src2,reg_wdata;
wire reg_wen;
wire wen_ret_and_j;


ysyx_24110005_RegisterFile #(
.REG_ADDR_WIDTH(REG_ADDR_WIDTH),
.DATA_WIDTH    (DATA_WIDTH    ))
reg_rd (
.clk    (clk            ),
.w_data (reg_wdata      ),
.w_addr (reg_waddr      ),
.wen    (reg_wen        ),
.r_data1(src1           ),
.r_addr1(reg_raddr1     ),
.r_data2(src2           ),
.r_addr2(reg_raddr2     ),
.exit_code(exit_code    ) // 用于存储退出代码
);


ysyx_24110005_Alu#(
    .DATA_WIDTH(DATA_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .FUN_WIDTH(FUN_WIDTH),
    .OP_WIDTH(OP_WIDTH)
)
alu_ins(
    .clk   (clk         ),
    .pc    (pc          ),
    .opcode(opcode      ),
    .fun   (fun         ),
    .src1  (src1        ),
    .src2  (src2        ),
    .imm   (imm         ),
    .dnpc  (dnpc        ),
    .w_data(reg_wdata   ),
    .wen   (wen_ret_and_j),
    .w_finish_sim(w_finish_sim)
);

assign reg_wen= wen_ret_and_j && ((reg_waddr != 0) || ((reg_waddr == 0) && (imm != 0))); // 确保不写入寄存器0

endmodule




// Author: minus7
// Date: 2024-11-20
// Version: 1.0
// Filename: NPC.v
