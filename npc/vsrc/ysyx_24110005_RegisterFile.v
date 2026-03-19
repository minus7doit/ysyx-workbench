/* verilator lint_off DECLFILENAME */
module ysyx_24110005_RegisterFile 
#(  REG_ADDR_WIDTH = 5, 
    DATA_WIDTH = 32) (
  input  clock,
  input  reset,
  input  wen,
  input [DATA_WIDTH-1:0]      w_data,
  input [REG_ADDR_WIDTH-1:0]  w_addr,
  input [REG_ADDR_WIDTH-1:0]  r_addr1,
  input [REG_ADDR_WIDTH-1:0]  r_addr2,
  output reg [DATA_WIDTH-1:0] r_data1,
  output reg [DATA_WIDTH-1:0] r_data2,
  input  exc_wb_valid,
  output exc_wb_ready,
  output wb_bresp,
  output [DATA_WIDTH-1:0]     exit_code      
);

parameter STATE_REC=2'b01;
parameter STATE_WB=2'b10;
reg [1:0] wb_state;
always @(posedge clock or posedge reset) begin
    if(reset)begin
        wb_state<=STATE_REC;//为第一次取指令的valid拉高。
    end
    else begin
        case (wb_state)
            STATE_REC:begin
            if(exc_wb_ready&&exc_wb_valid)
                wb_state<=STATE_WB;//不管写不写，都先进入这个WB；
            end
            STATE_WB:begin
                wb_state<=STATE_REC;
            end
            default: wb_state<=STATE_REC;
        endcase
    end
end
assign wb_bresp=(wb_state==STATE_WB);
reg [DATA_WIDTH-1:0] rf [2**REG_ADDR_WIDTH-1:0];   

always @(posedge clock) begin
    if(wen)begin
        rf[w_addr]<=w_data;
    end
end
assign exc_wb_ready =(wb_state==STATE_REC);

always @(posedge clock) begin
    if(wen)begin
        rf[w_addr]<=w_data;
    end
end
always @(posedge clock) begin
    if((|r_addr1))begin
        r_data1 <=rf[r_addr1] ;
    end
    else begin
        r_data1 <= 0;
    end
end

always @(posedge clock) begin
    if((|r_addr2))begin
        r_data2 <=rf[r_addr2] ;
    end
    else begin
        r_data2 <= 0;
    end
end


/*
assign r_data1 =(|r_addr1)?rf[r_addr1] : 0;
assign r_data2 =(|r_addr2)?rf[r_addr2] : 0;
*/
assign exit_code = rf[10]; // 10号寄存器用于存储退出代码
endmodule 


// Author: minus7
// Date: 2024-11-20
// Ver_dataion: 开辟一段寄存器内存对寄存器数组进行读写;
// Filename: addi.v
