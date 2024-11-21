module ysyx_24110005_NPC(
    input clk,
    input rst,
    input ins_mem[DATA_WIDTH*:0],//
    output reg out
);
    parameter ADDR_WIDTH=5;
    parameter OP_WIDTH=7;
    parameter REG_ADDR_WIDTH=5;
    parameter FUN_WIDTH=3;
    
    reg [31:0]pc;
    always@(posedge clk)begin
        if(rst) 
            pc<=32'h80000000;
        else
            pc<=pc+4;
    end
    wire [31:0]inst;
    assign inst=ins_mem[pc];

wire [FUN_WIDTH-1: 0]fun;
wire [OP_WIDTH-1:0]opcode;
wire [REG_ADDR_WIDTH-1:0] w_addr;
wire [DATA_WIDTH-1;0]imm;

ysyx_24110005_decoder #(
    .DATA_WIDTH(DATA_WIDTH),
    .OP_WIDTH(OP_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .FUN_WIDTH(FUN_WIDTH)
 )
ins_Decoder(
    .clk    (clk    ),
    .rst    (rst    ),
    .inst   (inst   ),
    .src1   (src1   ),
    .src2   (src2   ),
    .imm    (imm    ),
    .w_addr (w_addr ),
    .fun    (fun)//选择执行哪一条指令;
);


wire [DATA_WIDTH-1:0]src1,src2,w_data;

RegisterFile #(
.REG_ADDR_WIDTH(REG_ADDR_WIDTH),
.DATA_WIDTH    (DATA_WIDTH    ))
reg_rd (
.clk    (clk   ),
.wdata  (w_data),
.waddr  (w_addr),
.wen    (w_en  ),
.r_data1(src1  ),
.r_addr1(ra1   ),
.r_data2(src2  ),.
.r_addr2(ra2   )
);

wire wen;
Alu#(
    .DATA_WIDTH(DATA_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .FUN_WIDTH(FUN_WIDTH),
    .OP_WIDTH(OP_WIDTH)
)
alu_ins(
    .sel   ({fun,opcode})
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
