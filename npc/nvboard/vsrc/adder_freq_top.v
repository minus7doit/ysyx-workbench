module adder_freq_top #(
    parameter WIDTH = 32
)(
    input                  clock,
    input                  reset,
    input  [WIDTH-1:0]     in_a,
    input  [WIDTH-1:0]     in_b,
    output reg [WIDTH-1:0] out_sum
);

    reg [WIDTH-1:0] a_r;
    reg [WIDTH-1:0] b_r;

    // 输入打一拍
    always @(posedge clock) begin
        if (reset) begin
            a_r <= {WIDTH{1'b0}};
            b_r <= {WIDTH{1'b0}};
        end else begin
            a_r <= in_a;
            b_r <= in_b;
        end
    end

    // 只保留一个 WIDTH 位加法器作为关键路径
    always @(posedge clock) begin
        if (reset) begin
            out_sum <= {WIDTH{1'b0}};
        end else begin
            out_sum <= a_r + b_r;
        end
    end

endmodule