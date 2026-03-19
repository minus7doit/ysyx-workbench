module ysyx_24110005_LFSR #(
    parameter DATA_WIDTH=8
)(
    input  clock,
    input  reset,
    output [DATA_WIDTH-1:0] o_data
);
reg [DATA_WIDTH-1:0]data_out;
always@(posedge clock or posedge reset)begin
    if(reset) 
        data_out<=8'b00000001;
    else 
        data_out<={data_out[4]^data_out[3]^data_out[2]^data_out[0],data_out[7:1]};
end

assign o_data=data_out;

endmodule