module get_comp#(parameter DATA_WIDTH=4)
(
input [DATA_WIDTH-1:0]data,
output [DATA_WIDTH-1:0]data_comp);
function [DATA_WIDTH-1:0] f_abs_to_comp (
	input [DATA_WIDTH-2:0]	data_abs	,
	input 					data_sign
);
	begin 
		if (data_abs == 0) begin 
			f_abs_to_comp = 0;
		end else begin
			f_abs_to_comp[DATA_WIDTH-1] =data_sign;
			f_abs_to_comp[DATA_WIDTH-2:0] = data_sign ? 2**(DATA_WIDTH-1) - data_abs : data_abs;
		end
	end
	endfunction
assign data_comp=f_abs_to_comp(data[DATA_WIDTH-2:0],data[DATA_WIDTH-1]);
endmodule
