module ysyx_24110005_icache #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,

    // 目标方案：2KB / 8B / 2-way
    parameter LINE_BYTES = 8,
    parameter SET_NUM    = 128
)(
    input                       clock,
    input                       rst_n,
    input                       flush_i,

    // ================= CPU / IFU side =================
    input                       cpu_ar_valid,
    input   [ADDR_WIDTH-1:0]    cpu_ar_addr,
    output                      cpu_ar_ready,

    input                       cpu_inst_rready,
    output                      cpu_inst_rvalid,
    output  [DATA_WIDTH-1:0]    cpu_inst_rdata,

    // ================= Memory side =================
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
    localparam [WORD_INDEX_WIDTH-1:0] LAST_WORD_INDEX =
        LAST_WORD_INDEX_U32[WORD_INDEX_WIDTH-1:0];

    localparam [7:0] AXI_ARLEN   = LAST_WORD_INDEX_U32[7:0];
    localparam [2:0] AXI_ARSIZE  = 3'b010;
    localparam [1:0] AXI_ARBURS  = 2'b01;

    localparam ST_IDLE      = 2'b00;
    localparam ST_HIT       = 2'b01;
    localparam ST_MISS      = 2'b10;
    localparam ST_WAIT_RESP = 2'b11;

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

    reg [63:0] ic_req_cnt;
    reg [63:0] ic_hit_cnt;
    reg [63:0] ic_miss_cnt;
    reg [63:0] ic_total_access_cycles;
    reg [63:0] ic_miss_penalty_cycles;

    reg        req_inflight;
    reg        req_is_hit;
    reg [63:0] req_cycle_cnt;

    initial begin
        if (LINE_BYTES < WORD_BYTES) begin
            $error("LINE_BYTES must be >= WORD_BYTES");
        end
        if ((LINE_BYTES % WORD_BYTES) != 0) begin
            $error("LINE_BYTES must be a multiple of WORD_BYTES");
        end
        if (SET_NUM <= 0) begin
            $error("SET_NUM must be > 0");
        end
    end

    wire [SET_INDEX_WIDTH-1:0] cur_set =
        cpu_ar_addr[OFFSET_WIDTH + SET_INDEX_WIDTH - 1 : OFFSET_WIDTH];
    wire [TAG_WIDTH-1:0] cur_tag =
        cpu_ar_addr[ADDR_WIDTH-1 : OFFSET_WIDTH + SET_INDEX_WIDTH];

    wire [SET_INDEX_WIDTH-1:0] req_set =
        req_addr_r[OFFSET_WIDTH + SET_INDEX_WIDTH - 1 : OFFSET_WIDTH];
    wire [TAG_WIDTH-1:0] req_tag =
        req_addr_r[ADDR_WIDTH-1 : OFFSET_WIDTH + SET_INDEX_WIDTH];

    wire [WORD_INDEX_WIDTH-1:0] req_word_index;
    wire [OFFSET_WIDTH-1:0] req_byte_offset =
        req_addr_r[OFFSET_WIDTH-1:0];

    generate
        if (WORDS_PER_LINE == 1) begin : gen_req_word_index_single
            assign req_word_index = WORD_INDEX_ZERO;
        end else begin : gen_req_word_index_multi
            assign req_word_index = req_byte_offset[OFFSET_WIDTH-1:WORD_OFFSET_W];
        end
    endgenerate

    wire cur_hit0 = cache_valid0[cur_set] && (cache_tags0[cur_set] == cur_tag);
    wire cur_hit1 = cache_valid1[cur_set] && (cache_tags1[cur_set] == cur_tag);
    wire hit      = cur_hit0 | cur_hit1;

    wire req_hit0 = cache_valid0[req_set] && (cache_tags0[req_set] == req_tag);
    wire req_hit1 = cache_valid1[req_set] && (cache_tags1[req_set] == req_tag);

    wire [DATA_WIDTH-1:0] req_data_way0 =
        cache_data0[req_set][req_word_index*DATA_WIDTH +: DATA_WIDTH];
    wire [DATA_WIDTH-1:0] req_data_way1 =
        cache_data1[req_set][req_word_index*DATA_WIDTH +: DATA_WIDTH];

    wire [DATA_WIDTH-1:0] req_hit_data =
        req_hit0 ? req_data_way0 : req_data_way1;

    wire cur_way0_valid = cache_valid0[cur_set];
    wire cur_way1_valid = cache_valid1[cur_set];

    wire victim_way_sel =
        !cur_way0_valid ? 1'b0 :
        !cur_way1_valid ? 1'b1 :
                          lru_bit[cur_set];

    wire [ADDR_WIDTH-1:0] req_line_base_addr =
        {req_addr_r[ADDR_WIDTH-1:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};

    assign cpu_ar_ready    = (state == ST_IDLE);
    assign cpu_inst_rvalid = (state == ST_HIT);
    assign cpu_inst_rdata  = req_hit_data;

    assign mem_ar_valid = (state == ST_MISS);
    assign mem_ar_addr  = req_line_base_addr;
    assign mem_ar_len   = AXI_ARLEN;
    assign mem_ar_size  = AXI_ARSIZE;
    assign mem_ar_burst = AXI_ARBURS;
    assign mem_rready   = (state == ST_WAIT_RESP);

    integer i;

    always @(posedge clock or negedge rst_n) begin
        if (!rst_n) begin
            state <= ST_IDLE;
        end else if (flush_i) begin
            state <= ST_IDLE;
        end else begin
            case (state)
                ST_IDLE: begin
                    if (cpu_ar_valid) begin
                        if (hit) begin
                            state <= ST_HIT;
                        end else begin
                            state <= ST_MISS;
                        end
                    end
                end

                ST_HIT: begin
                    if (cpu_inst_rvalid && cpu_inst_rready) begin
                        state <= ST_IDLE;
                    end
                end

                ST_MISS: begin
                    if (mem_ar_valid && mem_ar_ready) begin
                        state <= ST_WAIT_RESP;
                    end
                end

                ST_WAIT_RESP: begin
                    if (mem_rvalid && mem_rready && mem_rlast) begin
                        state <= ST_HIT;
                    end
                end

                default: begin
                    state <= ST_IDLE;
                end
            endcase
        end
    end

    always @(posedge clock or negedge rst_n) begin
        if (!rst_n) begin
            req_addr_r   <= {ADDR_WIDTH{1'b0}};
            victim_way_r <= 1'b0;
        end else if (cpu_ar_ready && cpu_ar_valid) begin
            req_addr_r <= cpu_ar_addr;
            if (!hit) begin
                victim_way_r <= victim_way_sel;
            end
        end
    end

    always @(posedge clock or negedge rst_n) begin
        if (!rst_n) begin
            refill_word_idx <= WORD_INDEX_ZERO;
        end else begin
            if (cpu_ar_valid && cpu_ar_ready && !hit) begin
                refill_word_idx <= WORD_INDEX_ZERO;
            end
            else if (state == ST_WAIT_RESP && mem_rvalid && mem_rready) begin
                if (mem_rlast) begin
                    refill_word_idx <= WORD_INDEX_ZERO;
                end else begin
                    refill_word_idx <= refill_word_idx + WORD_INDEX_ONE;
                end
            end
        end
    end

    always @(posedge clock or negedge rst_n) begin
        if (!rst_n) begin
            cache_valid0 <= {SET_NUM{1'b0}};
            cache_valid1 <= {SET_NUM{1'b0}};
            lru_bit      <= {SET_NUM{1'b0}};

            for (i = 0; i < SET_NUM; i = i + 1) begin
                cache_tags0[i] = {TAG_WIDTH{1'b0}};
                cache_tags1[i] = {TAG_WIDTH{1'b0}};
                cache_data0[i] = {LINE_BITS{1'b0}};
                cache_data1[i] = {LINE_BITS{1'b0}};
            end
        end 
        else if (flush_i) begin
            cache_valid0 <= {SET_NUM{1'b0}};
            cache_valid1 <= {SET_NUM{1'b0}};
        end
        else begin
            if (cpu_ar_valid && cpu_ar_ready && hit) begin
                if (cur_hit0) begin
                    lru_bit[cur_set] <= 1'b1;
                end else begin
                    lru_bit[cur_set] <= 1'b0;
                end
            end

            if (cpu_ar_valid && cpu_ar_ready && !hit) begin
                if (victim_way_sel == 1'b0) begin
                    cache_valid0[cur_set] <= 1'b0;
                end else begin
                    cache_valid1[cur_set] <= 1'b0;
                end
            end

            if (state == ST_WAIT_RESP && mem_rvalid && mem_rready) begin
                if (victim_way_r == 1'b0) begin
                    cache_data0[req_set][refill_word_idx*DATA_WIDTH +: DATA_WIDTH] <= mem_rdata;

                    if (mem_rlast) begin
                        cache_valid0[req_set] <= 1'b1;
                        cache_tags0[req_set]  <= req_tag;
                        lru_bit[req_set]      <= 1'b1;
                    end
                end else begin
                    cache_data1[req_set][refill_word_idx*DATA_WIDTH +: DATA_WIDTH] <= mem_rdata;

                    if (mem_rlast) begin
                        cache_valid1[req_set] <= 1'b1;
                        cache_tags1[req_set]  <= req_tag;
                        lru_bit[req_set]      <= 1'b0;
                    end
                end
            end
        end
    end

    always @(posedge clock or negedge rst_n) begin
        if (!rst_n) begin
            ic_req_cnt             <= 64'd0;
            ic_hit_cnt             <= 64'd0;
            ic_miss_cnt            <= 64'd0;
            ic_total_access_cycles <= 64'd0;
            ic_miss_penalty_cycles <= 64'd0;

            req_inflight           <= 1'b0;
            req_is_hit             <= 1'b0;
            req_cycle_cnt          <= 64'd0;
        end else if (flush_i) begin
            req_inflight           <= 1'b0;
            req_is_hit             <= 1'b0;
            req_cycle_cnt          <= 64'd0;
        end else begin
            if (cpu_ar_valid && cpu_ar_ready) begin
                ic_req_cnt    <= ic_req_cnt + 64'd1;
                req_inflight  <= 1'b1;
                req_is_hit    <= hit;
                req_cycle_cnt <= 64'd1;
            end
            else if (req_inflight && !(cpu_inst_rvalid && cpu_inst_rready)) begin
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

`ifdef verilator
    always @(posedge clock) begin
        if (rst_n && state == ST_WAIT_RESP && mem_rvalid && mem_rready && mem_rlast) begin
            if (refill_word_idx != LAST_WORD_INDEX) begin
                $display("[ICACHE][WARN] mem_rlast early: refill_word_idx=%0d LAST_WORD_INDEX=%0d",
                         refill_word_idx, LAST_WORD_INDEX);
            end
        end
    end
`endif

wire [SET_NUM-1:0] w_cache_valid0 = cache_valid0;
wire [SET_NUM-1:0] w_cache_valid1 = cache_valid1;

endmodule