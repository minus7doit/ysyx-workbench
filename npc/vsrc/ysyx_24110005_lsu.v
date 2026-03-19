module ysyx_24110005_lsu #(
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 32
)(
    input                   clock,
    input                   reset,

    // 原有 LSU 控制/数据输入（保持）
    input  [DATA_WIDTH-1:0] i_src1,
    input  [DATA_WIDTH-1:0] i_src2,
    input  [DATA_WIDTH-1:0] i_imm,
    input  [2:0]            i_fun,
    input  [6:0]            i_opcode,
    input                   i_lsu_dec_ar_valid,
    input                   i_exc_wb_ready,
    input                   i_lsu_ex_w_valid,

    // ======================= AXI4 Read Address (AR) =======================
    output                  o_lsu_arvalid,
    input                   i_lsu_arready,
    output [ADDR_WIDTH-1:0] o_lsu_araddr,
    output [3:0]            o_lsu_arid,
    output [7:0]            o_lsu_arlen,
    output [2:0]            o_lsu_arsize,
    output [1:0]            o_lsu_arburst,

    // ======================= AXI4 Read Data (R) ===========================
    output                  o_lsu_rready,
    input                   i_lsu_rvalid,
    input  [DATA_WIDTH-1:0] i_lsu_rdata,
    input  [1:0]            i_lsu_rresp,
    input                   i_lsu_rlast,
    input  [3:0]            i_lsu_rid,

    // ======================= AXI4 Write Address (AW) ======================
    output                  o_lsu_awvalid,
    input                   i_lsu_awready,
    output [ADDR_WIDTH-1:0] o_lsu_awaddr,
    output [3:0]            o_lsu_awid,
    output [7:0]            o_lsu_awlen,
    output [2:0]            o_lsu_awsize,
    output [1:0]            o_lsu_awburst,

    // ======================= AXI4 Write Data (W) ==========================
    output                  o_lsu_wvalid,
    input                   i_lsu_wready,
    output [DATA_WIDTH-1:0] o_lsu_wdata,
    output [3:0]            o_lsu_wstrb,
    output                  o_lsu_wlast,

    // ======================= AXI4 Write Response (B) ======================
    output                  o_lsu_bready,
    input                   i_lsu_bvalid,
    input  [1:0]            i_lsu_bresp,
    input  [3:0]            i_lsu_bid,

    // 原有 LSU 输出（保持接口给 EX/DEC 用）
    output [DATA_WIDTH-1:0] o_r_data,
    output                  o_lsu_rvalid,
    output                  o_lsu_dec_ar_ready,
    output                  o_lsu_ex_w_ready,
    output [7:0]            o_lsu_wmask
);



    // 你原来的常量（保持）
    parameter TYPE_I0 = 7'b0000011;

    // ===================== 原有组合逻辑（保持语义） =====================
    wire [ADDR_WIDTH-1:0] mem_addr  = i_src1 + i_imm;
    wire [1:0]            mem_offset = mem_addr[1:0];

    // 你原来的 wmask（8bit）保持输出（给你原来其他模块可能还在用）
    assign o_lsu_wmask = i_fun[0] ? 8'b0000_0011 :
                        (i_fun[1] ? 8'b0000_1111 : 8'b0000_0001);

    // 读数据给 EX（保持：以前用 i_lsu_r_data，现在改为 AXI 的 i_lsu_rdata）
    reg [DATA_WIDTH-1:0] r_lsu_data;
    always @(posedge clock or posedge reset) begin
        if (reset) begin
            r_lsu_data <= 32'b0;
        end else begin  
            if (i_lsu_rvalid && o_lsu_rready) begin
                if(i_fun[0]) begin
                    r_lsu_data <= (i_lsu_rdata >> (8*mem_offset)) & 32'hFFFF;
                end else if(i_fun[1]) begin
                    r_lsu_data <= i_lsu_rdata;
                end else begin
                    r_lsu_data <= (i_lsu_rdata >> (8*mem_offset)) & 32'hFF;
                end
            end
            else begin
                r_lsu_data <= r_lsu_data;

            end
        end
    end
    assign o_r_data = r_lsu_data;
    assign o_lsu_rvalid = i_lsu_rvalid;
    // DEC 的 ar_ready（保持）
    assign o_lsu_dec_ar_ready = i_lsu_arready;

    // 写侧 ready（最小 AXI 适配：AWREADY & WREADY 都就绪才算 ready）
    assign o_lsu_ex_w_ready = i_lsu_awready & i_lsu_wready;

    // ===================== AXI4 Read Address 通道 =====================
    // 仍然用你原来的 i_lsu_dec_ar_valid 发起读
    assign o_lsu_arvalid = i_lsu_dec_ar_valid;
    assign o_lsu_araddr  = mem_addr;

    // LSU 目前不做 ID/突发，按单拍读最小配置
    assign o_lsu_arid    = 4'b0;
    assign o_lsu_arlen   = 8'b0;      // 1 beat
    assign o_lsu_arsize  = 3'b010;    // 4 bytes (32-bit)
    assign o_lsu_arburst = 2'b01;     // INCR

    // ===================== AXI4 Read Data 通道 =====================
    // 保持你原语义：只有 load 且 EX/WB ready 才拉高 rready
    assign o_lsu_rready  = (i_opcode == TYPE_I0) && (i_exc_wb_ready);

    // ===================== AXI4 Write Address 通道 =====================
    // 保持你原语义：用 i_lsu_ex_w_valid 同时驱动写（地址/数据同拍发起）
    assign o_lsu_awvalid = i_lsu_ex_w_valid;
    assign o_lsu_awaddr  = mem_addr;

    assign o_lsu_awid    = 4'b0;
    assign o_lsu_awlen   = 8'b0;      // 1 beat
    assign o_lsu_awsize  = 3'b010;    // 4 bytes
    assign o_lsu_awburst = 2'b01;     // INCR

    // ===================== AXI4 Write Data 通道 =====================
    assign o_lsu_wvalid  = i_lsu_ex_w_valid;
    //assign o_lsu_wdata   = i_src2;
    assign o_lsu_wdata   = i_fun[0] ? ({16'b0, i_src2[15:0]}<<(8*mem_offset)) :
                          (i_fun[1] ? (i_src2) : ({24'b0, i_src2[7:0]}<<(8*mem_offset)));

    // 你原来用 fun 选择字节数，这里映射成 4bit strobe（不做地址对齐旋转，保持最简单）
    assign o_lsu_wstrb   = i_fun[0] ? (4'b0011<<mem_offset) :
                          (i_fun[1] ? (4'b1111<<mem_offset) : (4'b0001<<mem_offset));

    // 单拍写
    assign o_lsu_wlast   = 1'b1;

    // ===================== AXI4 Write Response 通道 =====================
    // 你原来没有用 bresp/bvalid 做控制，这里最简单一直 ready
    // 若你后续想严格握手，可再把它跟 i_exc_wb_ready 等做 gating
    assign o_lsu_bready  = 1'b1;

endmodule
