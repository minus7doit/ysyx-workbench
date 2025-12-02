module ysyx_24110005_NPC(
    input clk,
    input rst,
    output [31:0]exit_code// 用于存储退出代码
);

    import "DPI-C" function void finish_sim();
    import "DPI-C" function void inst_trace(input  int  unsigned pc, input  int  unsigned inst ,input  int  unsigned npc);
    import "DPI-C" function void function_trace(input  int  unsigned pc, input  int  unsigned inst, input  int  unsigned npc);

    import "DPI-C" function void difftest_step(input int unsigned pc, input int unsigned npc);
    import "DPI-C" function void device_update();



parameter DATA_WIDTH=32;
parameter OP_WIDTH=7;
parameter REG_ADDR_WIDTH=5;
parameter FUN_WIDTH=3;
parameter BASE_ADDR=32'h80000000;
parameter TYPE_S  =7'b0100011;

reg if_ar_valid;


wire fetch_dec_valid;
wire fetch_dec_ready;

wire dec_exc_valid;
wire dec_exc_ready;

wire exc_wb_valid;
wire exc_wb_ready;

wire wb_bresp;
wire mem_bresp;
wire bresp;


wire w_finish_sim;
reg [DATA_WIDTH-1:0]pc;
reg [DATA_WIDTH-1:0]dnpc;

initial begin
    pc = BASE_ADDR;
end
//目前就是这个地方，ar_valid按道理应该是要某一个模块给，总不能真放在IFU内部吧。

always@(posedge clk or posedge rst)begin
        if(rst) 
            pc<=BASE_ADDR;
        else
        begin
        if(bresp)
            pc<=dnpc;
        end
end

wire [DATA_WIDTH-1:0]current_inst;

ysyx_24110005_ifu #(
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(DATA_WIDTH)
)Inst_Fetch_Unit(
    .clk(clk),
    .rst(rst),
    .inst_ar_addr(pc),
    .current_inst(current_inst),
    .if_r_ready(fetch_dec_ready),
    .if_r_valid(fetch_dec_valid),
    .bresp(bresp)
);
//最后通过initial解决了pc的初始值问题



always@(posedge clk)begin
   if(w_finish_sim) begin
        finish_sim();
   end

   else begin   
    if(!rst) begin
        //inst_trace(pc,current_inst,dnpc);
        //function_trace(pc,current_inst,dnpc);
        //if((exc_wb_ready&&exc_wb_valid)||(mem_w_valid&&mem_w_ready))begin
        if((exc_wb_ready&&exc_wb_valid)||(mem_bresp))begin
          //difftest_step(pc,dnpc);   
        end
        //device_update();
    end
   end
end


wire [FUN_WIDTH-1: 0]fun;
wire [OP_WIDTH-1:0]opcode;
wire [REG_ADDR_WIDTH-1:0] waddr,raddr1,raddr2;
wire [DATA_WIDTH-1:0]imm;

ysyx_24110005_Decoder #(
    .DATA_WIDTH(DATA_WIDTH),
    .OP_WIDTH(OP_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .FUN_WIDTH(FUN_WIDTH)
 )
Inst_Decode_Unit(
    .clk(clk),
    .rst(rst),
    .inst   (current_inst),
    .fetch_dec_valid(fetch_dec_valid),
    .fetch_dec_ready(fetch_dec_ready),
    .r_addr1    (raddr1      ),
    .r_addr2    (raddr2      ),
    .dec_exc_waddr (waddr       ),
    .dec_exc_opcode(opcode      ),
    .dec_exc_imm   (imm         ),
    .dec_exc_fun   (fun         ),
    .mem_ar_valid  (mem_ar_valid),
    .mem_ar_ready  (mem_ar_ready),
   /* .w_addr (waddr       ),
    .opcode(opcode      ),
    .imm   (imm         ),
    .fun   (fun         ),*/
    .dec_exc_valid(dec_exc_valid),
    .dec_exc_ready(dec_exc_ready)
);

wire [DATA_WIDTH-1:0]src1,src2,w_data;
wire wen_ret_and_j;
wire wen;

wire  mem_wen;
wire  mem_w_valid;
wire  mem_w_ready;
wire  mem_ar_valid;
wire mem_ar_ready;

wire  [DATA_WIDTH-1:0]mem_wdata ;
wire  [DATA_WIDTH-1:0]mem_rdata ;
ysyx_24110005_Alu#(
    .DATA_WIDTH(DATA_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .FUN_WIDTH(FUN_WIDTH),
    .OP_WIDTH(OP_WIDTH)
)
Excute_Unit(
    .clk   (clk         ),
    .rst   (rst         ),
    .dec_exc_valid(dec_exc_valid),
    .dec_exc_ready(dec_exc_ready),
    .w_addr(waddr),
    .pc    (pc           ),
    .opcode(opcode       ),
    .fun   (fun          ),
    .src1  (src1         ),
    .src2  (src2         ),
    .imm   (imm          ),
    .dnpc  (dnpc         ),
    .w_data(w_data       ),
    .wen   (wen_ret_and_j),
    .mem_rdata(mem_rdata),
    .mem_w_valid(mem_w_valid),
    .mem_w_ready(mem_w_ready),
    .mem_bresp  (mem_bresp),
    .exc_wb_ready(exc_wb_ready),
    .exc_wb_valid(exc_wb_valid),
    .w_finish_sim(w_finish_sim)
);




ysyx_24110005_lsu #(
.ADDR_WIDTH(DATA_WIDTH    ),
.DATA_WIDTH(DATA_WIDTH    ))
Load_Store_Unit (
    .clk         (clk         ),
    .rst         (rst         ),
    .src1        (src1        ),
    .src2        (src2        ),
    .imm         (imm         ),
    .fun         (fun         ),
    .opcode      (opcode      ),
    .mem_ar_valid(mem_ar_valid),
    .mem_ar_ready(mem_ar_ready),
    .mem_rdata   (mem_rdata   ),
    .exc_wb_ready(exc_wb_ready),
    .mem_w_valid (mem_w_valid ),
    .mem_w_ready (mem_w_ready ),
    .mem_bresp   (mem_bresp   )
);


ysyx_24110005_RegisterFile #(
.REG_ADDR_WIDTH(REG_ADDR_WIDTH),
.DATA_WIDTH    (DATA_WIDTH    ))
Write_Back_Unit (
.clk           (clk           ),
.rst           (rst           ),
.wen           (wen           ),
.w_data        (w_data        ),
.w_addr        (waddr         ),
.r_data1       (src1          ),
.r_addr1       (raddr1        ),
.r_data2       (src2          ),
.r_addr2       (raddr2        ),
.exc_wb_ready  (exc_wb_ready  ),
.exc_wb_valid  (exc_wb_valid  ),
.wb_bresp      (wb_bresp      ),
.exit_code     (exit_code     ) // 用于存储退出代码
);
assign bresp=wb_bresp|mem_bresp;
assign wen= exc_wb_valid &&wen_ret_and_j&& ((waddr != 0) || ((waddr == 0) && (imm != 0))); // 确保不写入寄存器0

endmodule




// Author: minus7
// Date: 2024-11-20
// Version: 1.0
// Filename: NPC.v
