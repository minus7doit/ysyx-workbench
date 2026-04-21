module ysyx_24110005_ifu #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32
)(
    input                    clock,
    input                    reset,

    input                    i_fetch_allow,
    input                    i_id_ready,
    input   [ADDR_WIDTH-1:0] i_fetch_pc,
    input                    i_flush,

    output                   o_inst_valid,
    output  [DATA_WIDTH-1:0] o_inst,
    output  [ADDR_WIDTH-1:0] o_inst_pc,

    output                   o_ifu_arvalid,
    input                    i_ifu_arready,
    output  [ADDR_WIDTH-1:0] o_ifu_araddr,
    output  [3:0]            o_ifu_arid,
    output  [7:0]            o_ifu_arlen,
    output  [2:0]            o_ifu_arsize,
    output  [1:0]            o_ifu_arburst,

    output                   o_ifu_rready,
    input                    i_ifu_rvalid,
    input   [DATA_WIDTH-1:0] i_ifu_rdata,
    input                    i_ifu_rlast
);

  reg req_outstanding;
  reg [ADDR_WIDTH-1:0] req_pc;

  reg                  buf_valid;
  reg [DATA_WIDTH-1:0] buf_inst;
  reg [ADDR_WIDTH-1:0] buf_pc;
  reg drop_resp;

  wire ar_fire = o_ifu_arvalid && i_ifu_arready;
  wire r_fire  = i_ifu_rvalid && o_ifu_rready && i_ifu_rlast;
  wire id_fire = buf_valid && i_id_ready;

  always @(posedge clock or posedge reset) begin
    if (reset) begin
      req_outstanding <= 1'b0;
      req_pc          <= {ADDR_WIDTH{1'b0}};
      buf_valid       <= 1'b0;
      buf_inst        <= {DATA_WIDTH{1'b0}};
      buf_pc          <= {ADDR_WIDTH{1'b0}};
      drop_resp       <= 1'b0;
    end else begin
      if (i_flush) begin
        if (req_outstanding) begin
          drop_resp <= 1'b1;
        end
        buf_valid <= 1'b0;
      end

      if (ar_fire) begin
        req_outstanding <= 1'b1;
        req_pc          <= i_fetch_pc;
      end

      if (r_fire) begin
        req_outstanding <= 1'b0;

        if (i_flush || drop_resp) begin
          drop_resp <= 1'b0;
          if (!id_fire) begin
            buf_valid <= 1'b0;
          end
        end else begin
          // 关键点：即使同拍 id_fire，也要把新返回留下来
          buf_valid <= 1'b1;
          buf_inst  <= i_ifu_rdata;
          buf_pc    <= req_pc;
        end
      end else if (id_fire) begin
        buf_valid <= 1'b0;
      end
    end
  end

  assign o_ifu_arvalid = i_fetch_allow && !i_flush && !buf_valid && !req_outstanding;
  assign o_ifu_araddr  = i_fetch_pc;
  assign o_ifu_arid    = 4'd0;
  assign o_ifu_arlen   = 8'd0;
  assign o_ifu_arsize  = 3'd2;
  assign o_ifu_arburst = 2'b01;

  assign o_ifu_rready  = 1'b1;

  assign o_inst_valid  = buf_valid;
  assign o_inst        = buf_inst;
  assign o_inst_pc     = buf_pc;
reg bug_dumped;


endmodule