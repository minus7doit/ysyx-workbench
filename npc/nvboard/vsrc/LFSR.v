module LFSR(
//input [7:0]data_in,
input clk,
output [6:0]hex0,
output [6:0]hex1,
output reg [7:0]data_out
);
always@(posedge clk)begin

if(data_out==0) data_out<=8'b00000001;
else data_out<={data_out[4]^data_out[3]^data_out[2]^data_out[0],data_out[7:1]};
end
bcd7seg seg0(1,data_out[3:0],hex0);
bcd7seg seg1(1,data_out[7:4],hex1);
endmodule
