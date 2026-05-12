
module ysyx_24110005_icache_test #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter LINE_BYTES = 8,
    parameter SET_NUM    = 128
)(
    input                       clock,
    input                       rst_n,
    input                       flush_i,

    input                       cpu_ar_valid,
    input   [ADDR_WIDTH-1:0]    cpu_ar_addr,
    output                      cpu_ar_ready,

    input                       cpu_inst_rready,
    output                      cpu_inst_rvalid,
    output  [DATA_WIDTH-1:0]    cpu_inst_rdata,

    output                      mem_ar_valid,
    output  [ADDR_WIDTH-1:0]    mem_ar_addr,
    output  [7:0]               mem_ar_len,
    output  [2:0]               mem_ar_size,
    output  [1:0]               mem_ar_burst,
    input                       mem_ar_ready,

    input                       mem_rvalid,
    output                      mem_rready,
    input   [DATA_WIDTH-1:0]    mem_rdata,
    input                       mem_rlast
);

    localparam WORD_BYTES       = DATA_WIDTH / 8;
    localparam WORDS_PER_LINE   = LINE_BYTES / WORD_BYTES;
    localparam LINE_BITS        = LINE_BYTES * 8;

    localparam OFFSET_WIDTH     = $clog2(LINE_BYTES);
    localparam SET_INDEX_WIDTH  = $clog2(SET_NUM);
    localparam TAG_WIDTH        = ADDR_WIDTH - OFFSET_WIDTH - SET_INDEX_WIDTH;
    localparam WORD_OFFSET_W    = $clog2(WORD_BYTES);
    localparam WORD_INDEX_WIDTH = (WORDS_PER_LINE <= 1) ? 1 : $clog2(WORDS_PER_LINE);

    localparam [WORD_INDEX_WIDTH-1:0] WORD_INDEX_ZERO = {WORD_INDEX_WIDTH{1'b0}};
    localparam [WORD_INDEX_WIDTH-1:0] WORD_INDEX_ONE  = {{(WORD_INDEX_WIDTH-1){1'b0}}, 1'b1};

    localparam [31:0] LAST_WORD_INDEX_U32 = WORDS_PER_LINE - 1;
    localparam [WORD_INDEX_WIDTH-1:0] LAST_WORD_INDEX = LAST_WORD_INDEX_U32[WORD_INDEX_WIDTH-1:0];

    localparam [7:0] AXI_ARLEN_BURST  = LAST_WORD_INDEX_U32[7:0];
    localparam [7:0] AXI_ARLEN_SINGLE = 8'd0;
    localparam [2:0] AXI_ARSIZE       = 3'b010;
    localparam [1:0] AXI_ARBURS       = 2'b01;

    localparam ST_IDLE    = 2'b00;
    localparam ST_MISSREQ = 2'b01;
    localparam ST_REFILL  = 2'b10;

    reg [1:0] state;

    reg [LINE_BITS-1:0]    cache_data0 [0:SET_NUM-1];
    reg [LINE_BITS-1:0]    cache_data1 [0:SET_NUM-1];
    reg [TAG_WIDTH-1:0]    cache_tags0 [0:SET_NUM-1];
    reg [TAG_WIDTH-1:0]    cache_tags1 [0:SET_NUM-1];
    reg [SET_NUM-1:0]      cache_valid0;
    reg [SET_NUM-1:0]      cache_valid1;
    reg [SET_NUM-1:0]      lru_bit;

    reg [ADDR_WIDTH-1:0]   req_addr_r;
    reg                    victim_way_r;
    reg [WORD_INDEX_WIDTH-1:0] refill_word_idx;
    reg [LINE_BITS-1:0]    refill_line_buf;
    reg                    drop_refill;
    reg                    req_uncached_r;

    reg                    resp_valid;
    reg [DATA_WIDTH-1:0]   resp_data;

    // 统计计数器：保留，不影响功能
    reg [63:0] ic_req_cnt;
    reg [63:0] ic_hit_cnt;
    reg [63:0] ic_miss_cnt;
    reg [63:0] ic_total_access_cycles;
    reg [63:0] ic_miss_penalty_cycles;

    reg        req_inflight;
    reg        req_is_hit;
    reg [63:0] req_cycle_cnt;

    integer i;

    // 当前先全部 cacheable
    wire cur_uncached = 1'b0;
    wire req_uncached = req_uncached_r;

    wire [SET_INDEX_WIDTH-1:0] cur_set = cpu_ar_addr[OFFSET_WIDTH + SET_INDEX_WIDTH - 1 : OFFSET_WIDTH];
    wire [TAG_WIDTH-1:0]       cur_tag = cpu_ar_addr[ADDR_WIDTH-1 : OFFSET_WIDTH + SET_INDEX_WIDTH];
    wire [OFFSET_WIDTH-1:0]    cur_byte_offset = cpu_ar_addr[OFFSET_WIDTH-1:0];

    wire [SET_INDEX_WIDTH-1:0] req_set = req_addr_r[OFFSET_WIDTH + SET_INDEX_WIDTH - 1 : OFFSET_WIDTH];
    wire [TAG_WIDTH-1:0]       req_tag = req_addr_r[ADDR_WIDTH-1 : OFFSET_WIDTH + SET_INDEX_WIDTH];
    wire [OFFSET_WIDTH-1:0]    req_byte_offset = req_addr_r[OFFSET_WIDTH-1:0];

    wire [WORD_INDEX_WIDTH-1:0] cur_word_index;
    wire [WORD_INDEX_WIDTH-1:0] req_word_index;

    generate
        if (WORDS_PER_LINE == 1) begin : gen_word_index_single
            assign cur_word_index = WORD_INDEX_ZERO;
            assign req_word_index = WORD_INDEX_ZERO;
        end else begin : gen_word_index_multi
            assign cur_word_index = cur_byte_offset[OFFSET_WIDTH-1:WORD_OFFSET_W];
            assign req_word_index = req_byte_offset[OFFSET_WIDTH-1:WORD_OFFSET_W];
        end
    endgenerate

    wire cur_hit0_raw = cache_valid0[cur_set] && (cache_tags0[cur_set] == cur_tag);
    wire cur_hit1_raw = cache_valid1[cur_set] && (cache_tags1[cur_set] == cur_tag);
    wire cur_hit0     = !cur_uncached && cur_hit0_raw;
    wire cur_hit1     = !cur_uncached && cur_hit1_raw;
    wire hit          = cur_hit0 | cur_hit1;

    wire [DATA_WIDTH-1:0] cur_data_way0 = cache_data0[cur_set][cur_word_index*DATA_WIDTH +: DATA_WIDTH];
    wire [DATA_WIDTH-1:0] cur_data_way1 = cache_data1[cur_set][cur_word_index*DATA_WIDTH +: DATA_WIDTH];
    wire [DATA_WIDTH-1:0] cur_hit_data  = cur_hit0 ? cur_data_way0 : cur_data_way1;

    wire cur_way0_valid = cache_valid0[cur_set];
    wire cur_way1_valid = cache_valid1[cur_set];
    wire victim_way_sel = !cur_way0_valid ? 1'b0 :
                          !cur_way1_valid ? 1'b1 :
                                            lru_bit[cur_set];

    wire [ADDR_WIDTH-1:0] req_line_base_addr = {req_addr_r[ADDR_WIDTH-1:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};
    wire [ADDR_WIDTH-1:0] mem_req_addr       = req_uncached ? req_addr_r : req_line_base_addr;
    wire [7:0]            mem_req_len        = req_uncached ? AXI_ARLEN_SINGLE : AXI_ARLEN_BURST;
    wire [WORD_INDEX_WIDTH-1:0] req_last_word_index = req_uncached ? WORD_INDEX_ZERO : LAST_WORD_INDEX;

    wire [DATA_WIDTH-1:0] refill_resp_word =
        req_uncached ? mem_rdata :
        ((req_word_index == refill_word_idx) ? mem_rdata
                                             : refill_line_buf[req_word_index*DATA_WIDTH +: DATA_WIDTH]);

    wire early_rready = (state == ST_MISSREQ) && mem_ar_ready;
    wire ar_fire      = mem_ar_valid && mem_ar_ready;
    wire r_fire       = mem_rvalid && mem_rready;

    assign cpu_ar_ready    = (state == ST_IDLE) && !resp_valid;
    assign cpu_inst_rvalid = resp_valid;
    assign cpu_inst_rdata  = resp_data;

    assign mem_ar_valid = (state == ST_MISSREQ);
    assign mem_ar_addr  = mem_req_addr;
    assign mem_ar_len   = mem_req_len;
    assign mem_ar_size  = AXI_ARSIZE;
    assign mem_ar_burst = AXI_ARBURS;
    assign mem_rready   = (state == ST_REFILL) || early_rready;

    always @(posedge clock or negedge rst_n) begin
        if (!rst_n) begin
            state <= ST_IDLE;
            req_addr_r <= {ADDR_WIDTH{1'b0}};
            victim_way_r <= 1'b0;
            refill_word_idx <= WORD_INDEX_ZERO;
            refill_line_buf <= {LINE_BITS{1'b0}};
            drop_refill <= 1'b0;
            req_uncached_r <= 1'b0;
            resp_valid <= 1'b0;
            resp_data  <= {DATA_WIDTH{1'b0}};

            cache_valid0 <= {SET_NUM{1'b0}};
            cache_valid1 <= {SET_NUM{1'b0}};
            lru_bit      <= {SET_NUM{1'b0}};
            for (i = 0; i < SET_NUM; i = i + 1) begin
                cache_tags0[i] = {TAG_WIDTH{1'b0}};
                cache_tags1[i] = {TAG_WIDTH{1'b0}};
                cache_data0[i] = {LINE_BITS{1'b0}};
                cache_data1[i] = {LINE_BITS{1'b0}};
            end

            ic_req_cnt             <= 64'd0;
            ic_hit_cnt             <= 64'd0;
            ic_miss_cnt            <= 64'd0;
            ic_total_access_cycles <= 64'd0;
            ic_miss_penalty_cycles <= 64'd0;
            req_inflight           <= 1'b0;
            req_is_hit             <= 1'b0;
            req_cycle_cnt          <= 64'd0;
        end else begin
            if (cpu_inst_rvalid && cpu_inst_rready) begin
                resp_valid <= 1'b0;
            end

            if (flush_i) begin
                // 清掉对 IFU 的当前响应
                resp_valid      <= 1'b0;
                resp_data       <= {DATA_WIDTH{1'b0}};

                // 清掉 in-flight 统计/请求状态
                req_inflight    <= 1'b0;
                req_is_hit      <= 1'b0;
                req_cycle_cnt   <= 64'd0;

                // 丢弃可能还在回来的 refill
                drop_refill     <= 1'b1;
                refill_word_idx <= WORD_INDEX_ZERO;
                refill_line_buf <= {LINE_BITS{1'b0}};
                state           <= ST_IDLE;

                // fence.i 的关键：真正失效所有指令 cache line
                cache_valid0    <= {SET_NUM{1'b0}};
                cache_valid1    <= {SET_NUM{1'b0}};
            end else begin
                case (state)
                    ST_IDLE: begin
                        if (cpu_ar_valid && cpu_ar_ready) begin
                            req_addr_r     <= cpu_ar_addr;
                            req_uncached_r <= cur_uncached;
                            ic_req_cnt     <= ic_req_cnt + 64'd1;
                            req_inflight   <= 1'b1;
                            req_is_hit     <= hit;
                            req_cycle_cnt  <= 64'd1;

                            if (hit) begin
                                resp_valid <= 1'b1;
                                resp_data  <= cur_hit_data;
                                if (cur_hit0) begin
                                    lru_bit[cur_set] <= 1'b1;
                                end else begin
                                    lru_bit[cur_set] <= 1'b0;
                                end
                            end else begin
                                victim_way_r    <= victim_way_sel;
                                refill_word_idx <= WORD_INDEX_ZERO;
                                refill_line_buf <= {LINE_BITS{1'b0}};
                                drop_refill     <= 1'b0;
                                state           <= ST_MISSREQ;
                            end
                        end
                    end

                    ST_MISSREQ: begin
                        if (ar_fire) begin
                            if (r_fire) begin
                                if (!req_uncached) begin
                                    refill_line_buf[refill_word_idx*DATA_WIDTH +: DATA_WIDTH] <= mem_rdata;
                                    if (!drop_refill) begin
                                        if (victim_way_r == 1'b0) begin
                                            cache_data0[req_set][refill_word_idx*DATA_WIDTH +: DATA_WIDTH] <= mem_rdata;
                                        end else begin
                                            cache_data1[req_set][refill_word_idx*DATA_WIDTH +: DATA_WIDTH] <= mem_rdata;
                                        end
                                    end
                                end

                                if (mem_rlast) begin
                                    if (!drop_refill) begin
                                        if (!req_uncached) begin
                                            if (victim_way_r == 1'b0) begin
                                                cache_valid0[req_set] <= 1'b1;
                                                cache_tags0[req_set]  <= req_tag;
                                                lru_bit[req_set]      <= 1'b1;
                                            end else begin
                                                cache_valid1[req_set] <= 1'b1;
                                                cache_tags1[req_set]  <= req_tag;
                                                lru_bit[req_set]      <= 1'b0;
                                            end
                                        end
                                    end

                                    // 无论 drop 与否，都回 IFU 一次，把 outstanding 清掉
                                    resp_valid <= 1'b1;
                                    resp_data  <= refill_resp_word;

                                    refill_word_idx <= WORD_INDEX_ZERO;
                                    drop_refill     <= 1'b0;
                                    state           <= ST_IDLE;
                                end else begin
                                    refill_word_idx <= refill_word_idx + WORD_INDEX_ONE;
                                    state           <= ST_REFILL;
                                end
                            end else begin
                                state <= ST_REFILL;
                            end
                        end
                    end

                    ST_REFILL: begin
                        if (r_fire) begin
                            if (!req_uncached) begin
                                refill_line_buf[refill_word_idx*DATA_WIDTH +: DATA_WIDTH] <= mem_rdata;

                                if (!drop_refill) begin
                                    if (victim_way_r == 1'b0) begin
                                        cache_data0[req_set][refill_word_idx*DATA_WIDTH +: DATA_WIDTH] <= mem_rdata;
                                    end else begin
                                        cache_data1[req_set][refill_word_idx*DATA_WIDTH +: DATA_WIDTH] <= mem_rdata;
                                    end
                                end
                            end

                            if (mem_rlast) begin
                                if (!drop_refill) begin
                                    if (!req_uncached) begin
                                        if (victim_way_r == 1'b0) begin
                                            cache_valid0[req_set] <= 1'b1;
                                            cache_tags0[req_set]  <= req_tag;
                                            lru_bit[req_set]      <= 1'b1;
                                        end else begin
                                            cache_valid1[req_set] <= 1'b1;
                                            cache_tags1[req_set]  <= req_tag;
                                            lru_bit[req_set]      <= 1'b0;
                                        end
                                    end
                                end

                                // 无论 drop 与否，都回 IFU 一次，把 outstanding 清掉
                                resp_valid <= 1'b1;
                                resp_data  <= refill_resp_word;

                                refill_word_idx <= WORD_INDEX_ZERO;
                                drop_refill     <= 1'b0;
                                state           <= ST_IDLE;
                            end else begin
                                refill_word_idx <= refill_word_idx + WORD_INDEX_ONE;
                            end
                        end
                    end

                    default: begin
                        state <= ST_IDLE;
                    end
                endcase

                // 统计计数器：保留
                if (req_inflight && !(cpu_inst_rvalid && cpu_inst_rready)) begin
                    req_cycle_cnt <= req_cycle_cnt + 64'd1;
                end

                if (req_inflight && cpu_inst_rvalid && cpu_inst_rready) begin
                    ic_total_access_cycles <= ic_total_access_cycles + req_cycle_cnt;
                    if (req_is_hit) begin
                        ic_hit_cnt <= ic_hit_cnt + 64'd1;
                    end else begin
                        ic_miss_cnt <= ic_miss_cnt + 64'd1;
                        if (req_cycle_cnt > 64'd1) begin
                            ic_miss_penalty_cycles <= ic_miss_penalty_cycles + (req_cycle_cnt - 64'd1);
                        end
                    end
                    req_inflight <= 1'b0;
                end
            end
        end
    end

`ifdef verilator
    always @(posedge clock) begin
        if (rst_n &&
            !drop_refill &&
            !flush_i &&
            ((state == ST_REFILL) || (state == ST_MISSREQ)) &&
            mem_rvalid && mem_rready && mem_rlast) begin
            if (refill_word_idx != req_last_word_index) begin
                $display("[ICACHE][WARN] mem_rlast early: req_addr=%08x uncached=%0d refill_word_idx=%0d expect=%0d data=%08x",
                         req_addr_r, req_uncached, refill_word_idx, req_last_word_index, mem_rdata);
            end
        end
    end
`endif

    wire [SET_NUM-1:0] w_cache_valid0 = cache_valid0;
    wire [SET_NUM-1:0] w_cache_valid1 = cache_valid1;

endmodule