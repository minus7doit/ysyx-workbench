module ysyx_24110005_Arbiter #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32
)(
    input  clock,
    input  reset,

    // =========================================================
    // IFU side (AXI4-lite like) -> 改成 AXI4 AR/R 完整字段
    // =========================================================
    input                   ifu_arvalid,
    output                  ifu_arready,
    input  [ADDR_WIDTH-1:0] ifu_araddr,
    input  [3:0]            ifu_arid,
    input  [7:0]            ifu_arlen,
    input  [2:0]            ifu_arsize,
    input  [1:0]            ifu_arburst,

    output                  ifu_rvalid,
    input                   ifu_rready,
    output [DATA_WIDTH-1:0] ifu_rdata,
    output [1:0]            ifu_rresp,
    output                  ifu_rlast,
    output [3:0]            ifu_rid,

    // =========================================================
    // LSU side -> 改成 AXI4 AR/R + AW/W/B 完整字段
    // =========================================================
    input                   lsu_arvalid,
    output                  lsu_arready,
    input  [ADDR_WIDTH-1:0] lsu_araddr,
    input  [3:0]            lsu_arid,
    input  [7:0]            lsu_arlen,
    input  [2:0]            lsu_arsize,
    input  [1:0]            lsu_arburst,

    output                  lsu_rvalid,
    input                   lsu_rready,
    output [DATA_WIDTH-1:0] lsu_rdata,
    output [1:0]            lsu_rresp,
    output                  lsu_rlast,
    output [3:0]            lsu_rid,

    input                   lsu_awvalid,
    output                  lsu_awready,
    input  [ADDR_WIDTH-1:0] lsu_awaddr,
    input  [3:0]            lsu_awid,
    input  [7:0]            lsu_awlen,
    input  [2:0]            lsu_awsize,
    input  [1:0]            lsu_awburst,

    input                   lsu_wvalid,
    output                  lsu_wready,
    input  [DATA_WIDTH-1:0] lsu_wdata,
    input  [3:0]            lsu_wstrb,
    input                   lsu_wlast,

    input                   lsu_bready,
    output                  lsu_bvalid,
    output [1:0]            lsu_bresp,
    output [3:0]            lsu_bid,

    // =========================================================
    // Master side to XBAR (完整 AXI4)
    // =========================================================
    output                  m_arvalid,
    input                   m_arready,
    output [ADDR_WIDTH-1:0] m_araddr,
    output [3:0]            m_arid,
    output [7:0]            m_arlen,
    output [2:0]            m_arsize,
    output [1:0]            m_arburst,

    input                   m_rvalid,
    output                  m_rready,
    input  [DATA_WIDTH-1:0] m_rdata,
    input  [1:0]            m_rresp,
    input                   m_rlast,
    input  [3:0]            m_rid,

    output                  m_awvalid,
    input                   m_awready,
    output [ADDR_WIDTH-1:0] m_awaddr,
    output [3:0]            m_awid,
    output [7:0]            m_awlen,
    output [2:0]            m_awsize,
    output [1:0]            m_awburst,

    output                  m_wvalid,
    input                   m_wready,
    output [DATA_WIDTH-1:0] m_wdata,
    output [3:0]            m_wstrb,
    output                  m_wlast,

    output                  m_bready,
    input                   m_bvalid,
    input  [1:0]            m_bresp,
    input  [3:0]            m_bid

    // 你原来的“完成信号”（如果顶层还在用 bresp 推进 pc）
  //  output                  o_bresp_done
);

    localparam IDLE = 2'b00;
    localparam S_IFU = 2'b01;
    localparam S_LSU_R = 2'b10;
    localparam S_LSU_W = 2'b11;

    reg [1:0] state;

    // -----------------------------
    // AXI 握手事件
    // -----------------------------
    wire ifu_ar_fire = ifu_arvalid && ifu_arready;
    wire lsu_ar_fire = lsu_arvalid && lsu_arready;

    wire lsu_aw_fire = lsu_awvalid && lsu_awready;
    wire lsu_w_fire  = lsu_wvalid  && lsu_wready;
    wire lsu_b_fire  = lsu_bvalid  && lsu_bready;

    wire m_ar_fire   = m_arvalid && m_arready;
    wire m_r_fire    = m_rvalid  && m_rready && m_rlast;
    wire m_aw_fire   = m_awvalid && m_awready;
    wire m_w_fire    = m_wvalid  && m_wready && m_wlast;
    wire m_b_fire    = m_bvalid  && m_bready;

    // -----------------------------
    // 仲裁状态机：IFU 优先；LSU 分读/写
    // -----------------------------
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            state <= IDLE;
        end else begin
            case (state)
                IDLE: begin
                    if (ifu_arvalid) begin
                        state <= S_IFU;
                    end else if (lsu_awvalid) begin
                        state <= S_LSU_W;
                    end else if (lsu_arvalid) begin
                        state <= S_LSU_R;
                    end
                end

                S_IFU: begin
                    // 等待读数据完成（单拍/突发都用 rlast 结束）
                    if (m_r_fire) begin
                        state <= IDLE;
                    end
                end

                S_LSU_R: begin
                    if (m_r_fire) begin
                        // 读完成优先回 IDLE，再由下一拍重新仲裁
                        state <= IDLE;
                    end else if (ifu_arvalid) begin
                        // 允许 IFU 抢占（符合你原来 LSU 状态下 ifu_ar_valid -> IFU）
                        state <= S_IFU;
                    end
                end

                S_LSU_W: begin
                    // 写完成：看 B 通道
                    if (m_b_fire) begin
                        state <= IDLE;
                    end else if (ifu_arvalid) begin
                        // 允许 IFU 抢占
                        state <= S_IFU;
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end

    // =========================================================
    // 选择当前 master 通道来源
    // =========================================================
    wire sel_ifu   = (state == S_IFU);
    wire sel_lsu_r = (state == S_LSU_R);
    wire sel_lsu_w = (state == S_LSU_W);

    // ---------------- AR ----------------
    assign m_arvalid = sel_ifu   ? ifu_arvalid :
                       sel_lsu_r ? lsu_arvalid :
                       1'b0;

    assign m_araddr  = sel_ifu   ? ifu_araddr  :
                       sel_lsu_r ? lsu_araddr  :
                       {ADDR_WIDTH{1'b0}};

    assign m_arid    = sel_ifu   ? ifu_arid    :
                       sel_lsu_r ? lsu_arid    :
                       4'b0;

    assign m_arlen   = sel_ifu   ? ifu_arlen   :
                       sel_lsu_r ? lsu_arlen   :
                       8'b0;

    assign m_arsize  = sel_ifu   ? ifu_arsize  :
                       sel_lsu_r ? lsu_arsize  :
                       3'b0;

    assign m_arburst = sel_ifu   ? ifu_arburst :
                       sel_lsu_r ? lsu_arburst :
                       2'b0;

    // 对应 ready 回灌
    assign ifu_arready = sel_ifu   ? m_arready : 1'b0;
    assign lsu_arready = sel_lsu_r ? m_arready : 1'b0;

    // ---------------- R ----------------
    // master rready 取决于当前选中的发起方
    assign m_rready = sel_ifu   ? ifu_rready :
                      sel_lsu_r ? lsu_rready :
                      1'b0;

    // IFU / LSU 的 R 输出（只在各自被选中时有效）
    assign ifu_rvalid = sel_ifu ? m_rvalid : 1'b0;
    assign ifu_rdata  = m_rdata;
    assign ifu_rresp  = m_rresp;
    assign ifu_rlast  = m_rlast;
    assign ifu_rid    = m_rid;

    assign lsu_rvalid = sel_lsu_r ? m_rvalid : 1'b0;
    assign lsu_rdata  = m_rdata;
    assign lsu_rresp  = m_rresp;
    assign lsu_rlast  = m_rlast;
    assign lsu_rid    = m_rid;

    // =========================================================
    // 写通道：只在 LSU 写状态下驱动 AW/W/B
    // =========================================================
    assign m_awvalid = sel_lsu_w ? lsu_awvalid : 1'b0;
    assign m_awaddr  = sel_lsu_w ? lsu_awaddr  : {ADDR_WIDTH{1'b0}};
    assign m_awid    = sel_lsu_w ? lsu_awid    : 4'b0;
    assign m_awlen   = sel_lsu_w ? lsu_awlen   : 8'b0;
    assign m_awsize  = sel_lsu_w ? lsu_awsize  : 3'b0;
    assign m_awburst = sel_lsu_w ? lsu_awburst : 2'b0;

    assign lsu_awready = sel_lsu_w ? m_awready : 1'b0;

    assign m_wvalid = sel_lsu_w ? lsu_wvalid : 1'b0;
    assign m_wdata  = sel_lsu_w ? lsu_wdata  : {DATA_WIDTH{1'b0}};
    assign m_wstrb  = sel_lsu_w ? lsu_wstrb  : 4'b0;
    assign m_wlast  = sel_lsu_w ? lsu_wlast  : 1'b0;

    assign lsu_wready = sel_lsu_w ? m_wready : 1'b0;

    // B：master bready 由 LSU 决定
    assign m_bready = sel_lsu_w ? lsu_bready : 1'b0;

    assign lsu_bvalid = sel_lsu_w ? m_bvalid : 1'b0;
    assign lsu_bresp  = m_bresp;
    assign lsu_bid    = m_bid;

    // “完成信号”给你顶层推进 PC（沿用你之前的 all_bresp 思路）
    //assign o_bresp_done = m_bvalid && m_bready;

endmodule
