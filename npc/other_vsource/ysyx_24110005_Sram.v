module  ysyx_24110005_Sram #(
    parameter DATA_WIDTH=32,
    parameter ADDR_WIDTH=32
)(
    input                   clock,
    input                   reset,
    input  [7:0]            sram_wmask,
    input  [ADDR_WIDTH-1:0] sram_raddr,
    input                   sram_ar_valid,
    output                  sram_ar_ready,
    output [DATA_WIDTH-1:0] sram_rdata,
    input                   sram_r_ready,
    output                  sram_r_valid,
    input  [ADDR_WIDTH-1:0] sram_waddr,
    input                   sram_aw_valid,
    output                  sram_aw_ready,
    input  [DATA_WIDTH-1:0] sram_wdata,
    input                   sram_w_valid,
    output                  sram_w_ready,
    output                  sram_bresp,
    output                  sram_bvalid,
    input                   sram_bready
);


import "DPI-C" function int pmem_read(input int unsigned raddr);
import "DPI-C" function void pmem_write(input int unsigned waddr, input int wdata, input byte wmask);

parameter STATE_MEM_ACCESS=2'b01;
parameter STATE_R_OUTPUT=2'b10;
parameter STATE_STORE=2'b11;


reg [1:0]  sram_state;
always @(posedge clock or posedge reset) begin
    if(reset)begin
         sram_state<=STATE_MEM_ACCESS;
    end
    else begin
        case (sram_state)
            STATE_MEM_ACCESS:begin
            if(sram_ar_valid&&sram_ar_ready)begin
                sram_state<=STATE_R_OUTPUT;
            end
            else if(sram_w_valid&&sram_w_ready)begin
                sram_state<=STATE_STORE;
            end
            end
            STATE_R_OUTPUT:begin
            if(sram_r_ready&&sram_r_valid)
                sram_state<=STATE_MEM_ACCESS;
            end
            STATE_STORE:begin
                sram_state<=STATE_MEM_ACCESS;
            end

            default: sram_state<=STATE_MEM_ACCESS;
        endcase
    end
end



reg [DATA_WIDTH-1:0]r_data;
always @(posedge clock) begin
    if(sram_ar_valid&&sram_ar_ready)begin
         r_data <= pmem_read(sram_raddr);
        end
    else begin
         r_data <= r_data; // 无读写请求时，返回0
    end
end   


always @(posedge clock) begin
    if (sram_w_valid&&sram_w_ready) begin // 有写请求时
            pmem_write(sram_waddr,sram_wdata,sram_wmask);
        end
end   


assign sram_bresp=(sram_state==STATE_STORE);
assign sram_bvalid=(sram_state==STATE_STORE);

assign sram_r_valid=(sram_state==STATE_R_OUTPUT);
assign sram_ar_ready=(sram_state==STATE_MEM_ACCESS);

assign sram_w_ready=(sram_state==STATE_MEM_ACCESS);
assign sram_aw_ready=(sram_state==STATE_MEM_ACCESS);

assign sram_rdata=r_data;


endmodule   