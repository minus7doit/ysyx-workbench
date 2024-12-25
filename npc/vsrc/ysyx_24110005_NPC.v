module ysyx_24110005_NPC(
    input clk,
    input rst
);
    parameter DATA_WIDTH=32;
    parameter OP_WIDTH=7;
    parameter REG_ADDR_WIDTH=5;
    parameter FUN_WIDTH=3;
    //parameter BASE_ADDR=32'h80000000;
    //parameter QUAR_WIDTH=8;
    parameter MAX_INS=1024;

   /* import "DPI-C" function int add (input int a, input int b);
    initial begin
    $display("%x + %x = %x", 1, 2, add(1,2));
    end*/

    reg [DATA_WIDTH-1:0]inst_mem[MAX_INS-1:0];//暂时用reg，后面用mem;nst_mem
                initial begin
              inst_mem[0] = 32'b000000000101_00000_000_00001_0010011;
              inst_mem[1] = 32'b000000001010_00001_000_00010_0010011; 
              inst_mem[2] = 32'b111111111101_00010_000_00011_0010011; 
              inst_mem[3] = 32'b000000000001_00000_000_00000_1110011;
                end
    
    reg [31:0]pc;
    always@(posedge clk)begin
        if(rst) 
            pc<=32'h80000000;
        else
            pc<=pc+4;
    end

    wire [DATA_WIDTH-1:0]inst;
    assign inst=inst_mem[pc[11:2]];//相当于直接除以4了
   
//import "DPI-C" function void exit(input a);



wire [FUN_WIDTH-1: 0]fun;
wire [OP_WIDTH-1:0]opcode;
wire [REG_ADDR_WIDTH-1:0] w_addr,ra1,ra2;
wire [DATA_WIDTH-1:0]imm;
ysyx_24110005_Decoder #(
    .DATA_WIDTH(DATA_WIDTH),
    .OP_WIDTH(OP_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .FUN_WIDTH(FUN_WIDTH)
 )
ins_Decoder(
    .inst   (inst   ),
    .ra1   (ra1     ),
    .ra2   (ra2     ),
    .opcode(opcode  ),
    .imm    (imm    ),
    .w_addr (w_addr ),
    .fun    (fun)//选择执行哪一条指令;
);


wire [DATA_WIDTH-1:0]src1,src2,w_data;

ysyx_24110005_RegisterFile #(
.REG_ADDR_WIDTH(REG_ADDR_WIDTH),
.DATA_WIDTH    (DATA_WIDTH    ))
reg_rd (
.clk    (clk   ),
.w_data  (w_data),
.w_addr  (w_addr),
.wen    (wen  ),
.r_data1(src1  ),
.r_addr1(ra1   ),
.r_data2(src2  ),
.r_addr2(ra2   )
);

wire wen;
ysyx_24110005_Alu#(
    .DATA_WIDTH(DATA_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .FUN_WIDTH(FUN_WIDTH),
    .OP_WIDTH(OP_WIDTH)
)
alu_ins(
    .sel   ({fun,opcode}),
    .src1  (src1        ),
    .src2  (src2        ),
    .imm   (imm         ),
    .w_addr(w_addr      ),
    .w_data(w_data      ),
    .wen   (wen         )
);



endmodule


// Author: minus7
// Date: 2024-11-20
// Version: 1.0
// Filename: NPC.v
