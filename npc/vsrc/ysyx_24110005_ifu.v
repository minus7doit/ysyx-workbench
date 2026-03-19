module ysyx_24110005_ifu #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32
)(
    input                    clock,
    input                    reset,

    // core side
    input   [DATA_WIDTH-1:0] i_pc,
    input                    i_ifu_dec_ready,
    input                    if_bresp,

    output  [DATA_WIDTH-1:0] o_current_inst,
    output                   o_ifu_dec_r_valid,

    // ================= AXI4 Read Address (AR) =================
    output                   o_ifu_arvalid,
    input                    i_ifu_arready,
    output  [ADDR_WIDTH-1:0] o_ifu_araddr,
    output  [3:0]            o_ifu_arid,
    output  [7:0]            o_ifu_arlen,
    output  [2:0]            o_ifu_arsize,
    output  [1:0]            o_ifu_arburst,

    // ================= AXI4 Read Data (R) =================
    output                   o_ifu_rready,
    input                    i_ifu_rvalid,
    input   [DATA_WIDTH-1:0] i_ifu_rdata,
    input   [1:0]            i_ifu_rresp,
    input                    i_ifu_rlast,
    input   [3:0]            i_ifu_rid
);

  // ------------------------------------------------------------
  // 原 IFU 的最小逻辑：只控制 ar_valid
  // ------------------------------------------------------------
  reg r_ifu_ar_valid;

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      r_ifu_ar_valid <= 1'b1;
    end else begin
      if (if_bresp) begin
        r_ifu_ar_valid <= 1'b1;
      end else if (o_ifu_arvalid && i_ifu_arready) begin
        r_ifu_ar_valid <= 1'b0;
      end else begin
        r_ifu_ar_valid <= r_ifu_ar_valid;
      end
    end
  end

  reg [DATA_WIDTH-1:0]r_cur_inst;
  reg r_ifu_dec_rvalid;
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      r_cur_inst <= 32'b0;
    end else begin
      if (i_ifu_rvalid) 
        r_cur_inst <= i_ifu_rdata;
      else 
        r_cur_inst <= r_cur_inst;
    end
  end
  always @(posedge clock or posedge reset) begin
    if (reset) begin
      r_ifu_dec_rvalid <= 1'b0;
    end else begin
      if (i_ifu_rvalid) 
        r_ifu_dec_rvalid <= 1'b1;
      else
        r_ifu_dec_rvalid <= 1'b0; 
    end
  end
  // ------------------------------------------------------------
  // AXI4 AR：地址 = PC，其余字段给默认“单拍读”
  // ------------------------------------------------------------
  assign o_ifu_arvalid = r_ifu_ar_valid;
  assign o_ifu_araddr  = i_pc;

  // 多出来的输出端口：给固定合法值（等价“置默认/置0”）
  assign o_ifu_arid    = 4'd0;
  assign o_ifu_arlen   = 8'd0;       // 1 beat
  assign o_ifu_arsize  = 3'd2;       // 4 bytes (2^2)
  assign o_ifu_arburst = 2'b01;      // INCR

  // ------------------------------------------------------------
  // AXI4 R：只用 rvalid + rdata，其他输入悬空（不使用）
  // ------------------------------------------------------------
  assign o_ifu_rready      = i_ifu_dec_ready;
  assign o_current_inst    = r_cur_inst;
  assign o_ifu_dec_r_valid = r_ifu_dec_rvalid;

  // ------------------------------------------------------------
  // 多余输入端口悬空：避免 Verilator UNUSED 警告（可选）
  // ------------------------------------------------------------
  /* verilator lint_off UNUSED */
  wire [1:0] _unused_rresp = i_ifu_rresp;
  wire       _unused_rlast = i_ifu_rlast;
  wire [3:0] _unused_rid   = i_ifu_rid;
  /* verilator lint_on UNUSED */

endmodule
