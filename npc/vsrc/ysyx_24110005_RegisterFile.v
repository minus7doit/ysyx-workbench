/* verilator lint_off DECLFILENAME */
module ysyx_24110005_RegisterFile #(
    parameter REG_ADDR_WIDTH = 5,
    parameter DATA_WIDTH     = 32
)(
    input  wire                      clock,
    input  wire                      reset,
    input  wire                      wen,
    input  wire [DATA_WIDTH-1:0]     w_data,
    input  wire [REG_ADDR_WIDTH-1:0] w_addr,
    input  wire [REG_ADDR_WIDTH-1:0] r_addr1,
    input  wire [REG_ADDR_WIDTH-1:0] r_addr2,
    output wire [DATA_WIDTH-1:0]     r_data1,
    output wire [DATA_WIDTH-1:0]     r_data2,
    output wire [DATA_WIDTH-1:0]     exit_code
);

  reg [DATA_WIDTH-1:0] rf [0:(1<<REG_ADDR_WIDTH)-1];
  integer i;

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      for (i = 0; i < (1<<REG_ADDR_WIDTH); i = i + 1) begin
        rf[i] <= {DATA_WIDTH{1'b0}};
      end
    end else if (wen && (|w_addr)) begin
      rf[w_addr] <= w_data;
    end
  end

  assign r_data1   = (|r_addr1) ? rf[r_addr1] : {DATA_WIDTH{1'b0}};
  assign r_data2   = (|r_addr2) ? rf[r_addr2] : {DATA_WIDTH{1'b0}};
  assign exit_code = rf[10];

endmodule
