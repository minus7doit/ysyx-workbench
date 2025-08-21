module ysyx_24110005_Alu_unit #(
    parameter DATA_WIDTH = 32
) (
    input [DATA_WIDTH-1:0]oprand1,
    input [DATA_WIDTH-1:0]oprand2,
    input [3:0]op_sel,
    output [DATA_WIDTH-1:0] reg result
);
    always @(*) begin
        case (op_sel)
            4'b0000:begin
                
            end
            4'b0001:begin
                
            end
            4'b0010:begin
                
            end
            4'b0011:begin
                
            end
            4'b0100:begin
                
            end
            4'b0101:begin
                
            end
            4'b0110:begin
                
            end
            4'b0111:begin
                
            end
            default: 
        endcase
    end

endmodule