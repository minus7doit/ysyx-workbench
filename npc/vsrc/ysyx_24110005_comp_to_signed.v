module ysyx_24110005_comp_to_signed #(
parameter DATA_WIDTH=32
)(
input [DATA_WIDTH-1:0]data_comp,
output [DATA_WIDTH-1:0]data_signed
);


function [DATA_WIDTH-1:0] f_comp_to_signed (
    input [DATA_WIDTH-1:0]data_comp
    //output sign,
    //output [DATA_WIDTH-2:0]abs
);
    begin 
        if(data_comp==0) f_comp_to_signed=0;
        else begin
            f_comp_to_signed[DATA_WIDTH-1]=data_comp[DATA_WIDTH-1];
            f_comp_to_signed[DATA_WIDTH-2:0]=data_comp[DATA_WIDTH-1]?~(data_comp[DATA_WIDTH-2:0]-1'b1):data_comp[DATA_WIDTH-2:0];
        end
    end

endfunction
assign data_signed=f_comp_to_signed;

endmodule
// Author: minus7
// Date: 2024-11-22
// Version: 1.0
// Filename: comp_to_signed.v
