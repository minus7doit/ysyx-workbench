module moduleName #(
    parameter DATA_WIDTH=8
) (
    input data_in,
    output data_reversed
);
    
integer i;
always @(data_in) begin
    for(i=0;i<DATA_WIDTH;i=i+1)
    begin
        data_reversed[i]=data_in[DATA_WIDTH-1-i];
    end
end
endmodule