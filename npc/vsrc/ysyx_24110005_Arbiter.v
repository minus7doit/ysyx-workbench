module ysyx_24110005_Arbiter #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32
)(
    input  clock,
    input  reset,

    // =========================================================
    // IFU side
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
    // LSU read side
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

    // =========================================================
    // LSU write side
    // =========================================================
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
    // Master side to XBAR
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
);

    // =========================================================
    // State definition
    // =========================================================
    localparam S_IDLE    = 3'd0;
    localparam S_IFU_AR  = 3'd1;
    localparam S_IFU_R   = 3'd2;
    localparam S_LSU_AR  = 3'd3;
    localparam S_LSU_R   = 3'd4;
    localparam S_LSU_W   = 3'd5;
    localparam S_LSU_B   = 3'd6;

    reg [2:0] state;
    reg [2:0] state_next;

    // AW/W independent handshake record
    reg aw_done_r;
    reg w_done_r;

    // =========================================================
    // Handshake
    // =========================================================
    wire m_ar_fire;
    wire m_r_fire;
    wire m_aw_fire;
    wire m_w_fire;
    wire m_b_fire;

    assign m_ar_fire = m_arvalid && m_arready;
    assign m_r_fire  = m_rvalid  && m_rready && m_rlast;
    assign m_aw_fire = m_awvalid && m_awready;
    assign m_w_fire  = m_wvalid  && m_wready && m_wlast;
    assign m_b_fire  = m_bvalid  && m_bready;

    wire aw_done_next;
    wire w_done_next;

    assign aw_done_next = aw_done_r || m_aw_fire;
    assign w_done_next  = w_done_r  || m_w_fire;

    // =========================================================
    // Next state
    //
    // 注意：
    //   一旦进入 S_IFU_R / S_LSU_R / S_LSU_B，
    //   必须等对应返回完成，不能被其他请求抢占。
    // =========================================================
    always @(*) begin
        state_next = state;

        case (state)
            S_IDLE: begin
                // 这里建议 LSU 优先，防止 load/store 被 IFU 长期饿死。
                // 如果你确定 MEM stall 时 IFU 不会请求，也可以改回 IFU 优先。
                if (lsu_awvalid || lsu_wvalid) begin
                    state_next = S_LSU_W;
                end else if (lsu_arvalid) begin
                    state_next = S_LSU_AR;
                end else if (ifu_arvalid) begin
                    state_next = S_IFU_AR;
                end else begin
                    state_next = S_IDLE;
                end
            end

            S_IFU_AR: begin
                if (m_ar_fire) begin
                    state_next = S_IFU_R;
                end else if (!ifu_arvalid) begin
                    // 防止 IFU flush 后撤销 ARVALID，Arbiter 卡死
                    state_next = S_IDLE;
                end else begin
                    state_next = S_IFU_AR;
                end
            end

            S_IFU_R: begin
                if (m_r_fire) begin
                    state_next = S_IDLE;
                end else begin
                    state_next = S_IFU_R;
                end
            end

            S_LSU_AR: begin
                if (m_ar_fire) begin
                    state_next = S_LSU_R;
                end else if (!lsu_arvalid) begin
                    state_next = S_IDLE;
                end else begin
                    state_next = S_LSU_AR;
                end
            end

            S_LSU_R: begin
                if (m_r_fire) begin
                    state_next = S_IDLE;
                end else begin
                    state_next = S_LSU_R;
                end
            end

            S_LSU_W: begin
                if (aw_done_next && w_done_next) begin
                    state_next = S_LSU_B;
                end else if (!lsu_awvalid && !lsu_wvalid && !aw_done_r && !w_done_r) begin
                    // 防止上游撤销写请求导致卡死
                    state_next = S_IDLE;
                end else begin
                    state_next = S_LSU_W;
                end
            end

            S_LSU_B: begin
                if (m_b_fire) begin
                    state_next = S_IDLE;
                end else begin
                    state_next = S_LSU_B;
                end
            end

            default: begin
                state_next = S_IDLE;
            end
        endcase
    end

    // =========================================================
    // State register
    // =========================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            state <= S_IDLE;
        end else begin
            state <= state_next;
        end
    end

    // =========================================================
    // aw_done_r
    // =========================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            aw_done_r <= 1'b0;
        end else if (state == S_IDLE) begin
            aw_done_r <= 1'b0;
        end else if (state == S_LSU_W && m_aw_fire) begin
            aw_done_r <= 1'b1;
        end
    end

    // =========================================================
    // w_done_r
    // =========================================================
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            w_done_r <= 1'b0;
        end else if (state == S_IDLE) begin
            w_done_r <= 1'b0;
        end else if (state == S_LSU_W && m_w_fire) begin
            w_done_r <= 1'b1;
        end
    end

    // =========================================================
    // Select signals
    // =========================================================
    wire sel_ifu_ar;
    wire sel_ifu_r;
    wire sel_lsu_ar;
    wire sel_lsu_r;
    wire sel_lsu_w;
    wire sel_lsu_b;

    assign sel_ifu_ar = (state == S_IFU_AR);
    assign sel_ifu_r  = (state == S_IFU_R);
    assign sel_lsu_ar = (state == S_LSU_AR);
    assign sel_lsu_r  = (state == S_LSU_R);
    assign sel_lsu_w  = (state == S_LSU_W);
    assign sel_lsu_b  = (state == S_LSU_B);

    // =========================================================
    // AR channel
    // =========================================================
    assign m_arvalid =
        sel_ifu_ar ? ifu_arvalid :
        sel_lsu_ar ? lsu_arvalid :
                     1'b0;

    assign m_araddr =
        sel_ifu_ar ? ifu_araddr :
        sel_lsu_ar ? lsu_araddr :
                     {ADDR_WIDTH{1'b0}};

    assign m_arid =
        sel_ifu_ar ? ifu_arid :
        sel_lsu_ar ? lsu_arid :
                     4'b0000;

    assign m_arlen =
        sel_ifu_ar ? ifu_arlen :
        sel_lsu_ar ? lsu_arlen :
                     8'b0000_0000;

    assign m_arsize =
        sel_ifu_ar ? ifu_arsize :
        sel_lsu_ar ? lsu_arsize :
                     3'b000;

    assign m_arburst =
        sel_ifu_ar ? ifu_arburst :
        sel_lsu_ar ? lsu_arburst :
                     2'b00;

    assign ifu_arready = sel_ifu_ar ? m_arready : 1'b0;
    assign lsu_arready = sel_lsu_ar ? m_arready : 1'b0;

    // =========================================================
    // R channel
    //
    // R 返回必须严格按照 owner 路由。
    // =========================================================
    assign m_rready =
        sel_ifu_r ? ifu_rready :
        sel_lsu_r ? lsu_rready :
                    1'b0;

    assign ifu_rvalid = sel_ifu_r ? m_rvalid : 1'b0;
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
    // AW channel
    // =========================================================
    assign m_awvalid = sel_lsu_w && !aw_done_r ? lsu_awvalid : 1'b0;
    assign m_awaddr  = sel_lsu_w ? lsu_awaddr  : {ADDR_WIDTH{1'b0}};
    assign m_awid    = sel_lsu_w ? lsu_awid    : 4'b0000;
    assign m_awlen   = sel_lsu_w ? lsu_awlen   : 8'b0000_0000;
    assign m_awsize  = sel_lsu_w ? lsu_awsize  : 3'b000;
    assign m_awburst = sel_lsu_w ? lsu_awburst : 2'b00;

    assign lsu_awready = sel_lsu_w && !aw_done_r ? m_awready : 1'b0;

    // =========================================================
    // W channel
    // =========================================================
    assign m_wvalid = sel_lsu_w && !w_done_r ? lsu_wvalid : 1'b0;
    assign m_wdata  = sel_lsu_w ? lsu_wdata  : {DATA_WIDTH{1'b0}};
    assign m_wstrb  = sel_lsu_w ? lsu_wstrb  : 4'b0000;
    assign m_wlast  = sel_lsu_w ? lsu_wlast  : 1'b0;

    assign lsu_wready = sel_lsu_w && !w_done_r ? m_wready : 1'b0;

    // =========================================================
    // B channel
    // =========================================================
    assign m_bready = sel_lsu_b ? lsu_bready : 1'b0;

    assign lsu_bvalid = sel_lsu_b ? m_bvalid : 1'b0;
    assign lsu_bresp  = m_bresp;
    assign lsu_bid    = m_bid;

endmodule