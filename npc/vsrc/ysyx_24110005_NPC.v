module ysyx_24110005_NPC(
    input clk,
    input rst,
    //input  [31:0]cpu_insts [1023:0], // 指令存储器
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

//第一个周期: 取出指令，同时拉高有效信号，此时译码ready应该拉高，直接传给IDU，并且译出结果，译出操作码，读地址，立即数，同时拉译码有效信号，此时exu_ready拉高
//第二个周期：握手成功，exu端口得到译码结果，并计算出结果，算出dnpc，和wdata，waddr，拉高计算有效信号，拉高写寄存器有效
//第三个周期: 握手成功，写数据给到WBU端口
//第四个周期：WBU将结果写回寄存器堆
parameter STATE_IF=4'b0001;
parameter STATE_ID=4'b0010;
parameter STATE_EX=4'b0011;
parameter STATE_WB=4'b0100;
parameter IDLE    =4'b0000;

reg [3:0]cur_state;
wire if_valid;
wire if_ready;
wire fetch_dec_valid;
wire fetch_dec_ready;

wire dec_exc_valid;
wire dec_exc_ready;

wire exc_wb_valid;
wire exc_wb_ready;

wire bresp;
wire bvalid;
wire bready;
always @(posedge clk or posedge rst) begin
    if(rst) begin
        cur_state<=IDLE;
    end   
    else begin
        case(cur_state)
        IDLE:begin
            cur_state<=STATE_IF;
        end
        STATE_IF:begin
            if(fetch_dec_ready&&fetch_dec_valid) 
                cur_state<=STATE_ID;
        end
        STATE_ID:begin
            if(dec_exc_valid&dec_exc_ready)
                cur_state<=STATE_EX;
        end
        STATE_EX:begin
            if(exc_wb_ready&&exc_wb_valid)
                cur_state<=STATE_WB;
        end
        STATE_WB:begin
            if ((bvalid && bready) || (mem_r_valid && mem_r_ready)) begin
                cur_state <= STATE_IF;
            end else begin
                cur_state <= STATE_WB;
            end
        end
        default:begin
            cur_state<=cur_state;
        end
        endcase
    end
end

assign if_valid       =(cur_state==STATE_IF);
assign dec_exc_valid  =(cur_state==STATE_ID);
assign exc_wb_valid   =(cur_state==STATE_EX);

assign fetch_dec_ready =1'b1;
assign dec_exc_ready   =1'b1;
assign exc_wb_ready    =1'b1;

assign bready = (cur_state==STATE_WB);

wire w_finish_sim;
reg [DATA_WIDTH-1:0]pc;
reg [DATA_WIDTH-1:0]dnpc;

initial begin
    pc = BASE_ADDR;
end

always@(posedge clk or posedge rst)begin
        if(rst) 
            pc<=BASE_ADDR;
        else
        begin
        if(cur_state==STATE_WB)
            pc<=dnpc;
        end
end

wire [DATA_WIDTH-1:0]current_inst;
reg [DATA_WIDTH-1:0] fetch_dec_inst;
inst_rom #(
    .DATA_WIDTH(DATA_WIDTH),
    .ADDR_WIDTH(DATA_WIDTH)
)Inst_Fetch_Unit(
    .clk(clk),
    .rst(rst),
    .inst_ar_addr(pc),
    .if_ar_valid(if_valid),
    .if_ar_ready(if_ready),
    .current_inst(current_inst),
    .if_r_ready(fetch_dec_ready),
    .if_r_valid(fetch_dec_valid)
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
        if(cur_state==STATE_EX)begin
          difftest_step(pc,dnpc);   
        end
        //device_update();
    end
   end
end


wire [FUN_WIDTH-1: 0]fun;
wire [OP_WIDTH-1:0]opcode;
wire [REG_ADDR_WIDTH-1:0] waddr,raddr1,raddr2;
wire [DATA_WIDTH-1:0]imm;

reg [FUN_WIDTH-1: 0]dec_exc_fun;
reg [OP_WIDTH-1:0]dec_exc_opcode;
reg [REG_ADDR_WIDTH-1:0] dec_exc_waddr;
reg [DATA_WIDTH-1:0]dec_exc_imm;


ysyx_24110005_Decoder #(
    .DATA_WIDTH(DATA_WIDTH),
    .OP_WIDTH(OP_WIDTH),
    .REG_ADDR_WIDTH(REG_ADDR_WIDTH),
    .FUN_WIDTH(FUN_WIDTH)
 )
Inst_Decode_Unit(
    .inst   (current_inst),
    .reg_r_addr1    (raddr1      ),
    .reg_r_addr2    (raddr2      ),
    .reg_w_addr     (waddr       ),
    .opcode (opcode      ),
    .imm    (imm         ),
    .fun    (fun         )//选择执行哪一条指令;
);

always @(posedge clk or posedge rst) begin
    if(rst)begin
        dec_exc_waddr<={REG_ADDR_WIDTH{1'b0}};
    end
    else begin
        if(dec_exc_valid&&dec_exc_ready)begin
            dec_exc_waddr<=waddr;
        end
        else begin
            dec_exc_waddr<=dec_exc_waddr;
        end
    end
end



always @(posedge clk or posedge rst) begin
    if(rst)begin
        dec_exc_imm<={DATA_WIDTH{1'b0}};
    end
    else begin
        if(dec_exc_valid&&dec_exc_ready)begin
            dec_exc_imm<=imm;
        end
        else begin
            dec_exc_imm<=dec_exc_imm;
        end
    end
end

always @(posedge clk or posedge rst) begin
    if(rst)begin     
        dec_exc_opcode<={OP_WIDTH{1'b0}};
    end
    else begin
        if(dec_exc_valid&&dec_exc_ready)begin
            dec_exc_opcode<=opcode;
        end
        else begin
            dec_exc_opcode<=dec_exc_opcode;
        end
    end
end

always @(posedge clk or posedge rst) begin
    if(rst)begin     
        dec_exc_fun<={FUN_WIDTH{1'b0}};
    end
    else begin
        if(dec_exc_valid&&dec_exc_ready)begin
            dec_exc_fun<=fun;
        end
        else begin
            dec_exc_fun<=dec_exc_fun;
        end
    end
end
wire [DATA_WIDTH-1:0]src1,src2,w_data;
wire wen_ret_and_j;
wire wen;

wire  [DATA_WIDTH-1:0]mem_addr  ;
wire  [7:0]wmask;
wire  mem_wen;
wire  mem_w_valid;
wire  mem_w_ready;
wire  mem_r_valid;
wire  mem_r_ready;
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
    .w_addr(dec_exc_waddr),
    .pc    (pc          ),
    .opcode(dec_exc_opcode       ),
    .fun   (dec_exc_fun          ),
    .src1  (src1        ),
    .src2  (src2        ),
    .imm   (dec_exc_imm          ),
    .dnpc  (dnpc        ),
    .w_data(w_data       ),
    .wen    (wen_ret_and_j),
    .wmask    (wmask),
    .mem_addr (mem_addr),
    .mem_rdata(mem_rdata),
    .mem_ren  (mem_r_ready ),
    .mem_wdata(mem_wdata  ),
    .mem_wen  (mem_wen),
    .w_finish_sim(w_finish_sim)
);

wire mem_ar_valid=(cur_state==STATE_EX);
wire mem_ar_ready;

ysyx_24110005_Mem #(
.ADDR_WIDTH(DATA_WIDTH    ),
.DATA_WIDTH    (DATA_WIDTH    ))
mem_sram (
    .clk         (clk         ),
    .wmask       (wmask       ),
    .mem_addr    (mem_addr    ),
    .mem_ar_valid(mem_ar_valid),
    .mem_ar_ready(mem_ar_ready),
    .mem_rdata   (mem_rdata   ),
    .mem_r_ready (mem_r_ready ),
    .mem_r_valid (mem_r_valid ),
    .mem_wdata   (mem_wdata   ),
    .mem_w_valid (mem_w_valid     ),
    .mem_w_ready (mem_w_ready ),
    .bresp       (bresp       ),
    .bvalid      (bvalid      ),
    .bready      (bready      )
);

assign mem_w_valid=mem_wen&&exc_wb_valid;
ysyx_24110005_RegisterFile #(
.REG_ADDR_WIDTH(REG_ADDR_WIDTH),
.DATA_WIDTH    (DATA_WIDTH    ))
Write_Back_Unit (
.clk           (clk           ),
.wen           (wen           ),
.w_data        (w_data        ),
.w_addr        (dec_exc_waddr ),
.r_data1       (src1          ),
.r_addr1       (raddr1        ),
.r_data2       (src2          ),
.r_addr2       (raddr2        ),
.exit_code     (exit_code     ) // 用于存储退出代码
);
assign wen= exc_wb_valid&&wen_ret_and_j && ((dec_exc_waddr != 0) || ((dec_exc_waddr == 0) && (dec_exc_imm != 0))); // 确保不写入寄存器0

endmodule




// Author: minus7
// Date: 2024-11-20
// Version: 1.0
// Filename: NPC.v
