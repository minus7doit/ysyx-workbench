module ysyx_24110005_delay #(
    parameter LATENCY=8,
    parameter DATA_WIDTH=32
) (
    input clk,
    input rst,
    input [DATA_WIDTH-1:0]i_data,
    output[DATA_WIDTH-1:0]o_data_delayed
);

reg [DATA_WIDTH-1:0] delay_reg [LATENCY-1:0];
integer i;

always @(posedge clk or posedge rst) begin
    if(rst) begin
        for (i =0 ;i<LATENCY ;i=i+1) begin
            delay_reg[i]<= {DATA_WIDTH{1'b0}};
        end
    end
    else begin
        delay_reg[0]<=i_data;
        for (i =1 ;i<LATENCY ;i=i+1) begin
            delay_reg[i]<= delay_reg[i-1];
        end
    end
end
    
assign o_data_delayed=delay_reg[LATENCY-1];




endmodule