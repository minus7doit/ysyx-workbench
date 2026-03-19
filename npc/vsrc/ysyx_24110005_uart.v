module ysyx_24110005_Uart#(
    parameter DATA_WIDTH=32,
    parameter ADDR_WIDTH=32
)(
    input                   clock,
    input                   reset,
    input  [7:0]            uart_wmask,
    input  [ADDR_WIDTH-1:0] uart_raddr,
    input                   uart_ar_valid,
    output                  uart_ar_ready,
    output [DATA_WIDTH-1:0] uart_rdata,
    input                   uart_r_ready,
    output                  uart_r_valid,
    input  [ADDR_WIDTH-1:0] uart_waddr,
    input                   uart_aw_valid,
    output                  uart_aw_ready,
    input  [DATA_WIDTH-1:0] uart_wdata,
    input                   uart_w_valid,
    output                  uart_w_ready,
    output                  uart_bresp,
    output                  uart_bvalid,
    input                   uart_bready
);
parameter UART_WIDTH=8;
reg [UART_WIDTH-1:0] uart;

parameter UART_IDLE=2'b00;
parameter UART_OUTPUT=2'b01;
reg [1:0] uart_state;

always @(posedge clock or posedge reset) begin
    if(reset)begin
        uart_state<=UART_IDLE;
    end
    else begin
        case(uart_state)
        UART_IDLE:begin
            if(uart_w_valid&&uart_w_ready)
            uart_state<=UART_OUTPUT;
        end
        UART_OUTPUT:begin
            uart_state<=UART_IDLE;
        end
        default:uart_state<=UART_IDLE;
        endcase
    end
end


always @(posedge clock or posedge reset) begin
    if(reset)begin
        uart<={UART_WIDTH{1'b0}};
    end
    else begin
    if(uart_w_valid&&uart_w_ready)
        uart<=uart_wdata[UART_WIDTH-1:0];
    end
end

always @(posedge clock or posedge reset) begin
    if(uart_state==UART_OUTPUT)begin
        $write("%c",uart);
    end
end

assign uart_w_ready=(uart_state==UART_IDLE);
assign uart_aw_ready=(uart_state==UART_IDLE);
assign uart_r_valid=1'b0;
assign uart_ar_ready=1'b0;
assign uart_bresp=(uart_state==UART_OUTPUT);
assign uart_rdata=32'b0;

endmodule