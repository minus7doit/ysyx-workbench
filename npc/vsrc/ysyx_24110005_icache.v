module ysyx_24110005_icache #(
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
//缓存阵列申明
//根据cachesim，icache设计为2级组相联，行大小为8字节，组数为128：
localparam LINE_WIDTH = LINE_BYTES * 8; //行大小
localparam SET_IDX_WIDTH = $clog2(SET_NUM); //组索引宽度
localparam INLINE_BYTE_WIDTH = $clog2(LINE_BYTES); //块内偏移宽
localparam TAG_WIDTH = ADDR_WIDTH - SET_IDX_WIDTH - INLINE_BYTE_WIDTH; //标签宽度
//状态机状态定义
localparam S_IDLE = 2'b00;
localparam S_RD_MEM = 2'b01;//若未命中，进入读内存状态

localparam S_UPDATE_CACHE = 2'b10;//从内存读回数据后，更新缓存状态\或是命中后直接更新状态



reg [LINE_WIDTH-1:0] cache_data0 [0:SET_NUM-1];
reg [LINE_WIDTH-1:0] cache_data1 [0:SET_NUM-1];
reg [TAG_WIDTH-1:0]  cache_tag0 [0:SET_NUM-1];
reg [TAG_WIDTH-1:0]  cache_tag1 [0:SET_NUM-1];
reg [SET_NUM-1:0]    cache_valid0 ;
reg [SET_NUM-1:0]    cache_valid1 ;
  
//当前访问的地址分解
reg [ADDR_WIDTH-1:0]    addr_q;
reg [TAG_WIDTH-1:0]     tag_q;
reg [SET_IDX_WIDTH-1:0] set_q;
reg [INLINE_BYTE_WIDTH-1:0] offset_q;

wire [TAG_WIDTH-1:0]             cur_tag;
wire [SET_IDX_WIDTH-1:0]         cur_set;
wire [INLINE_BYTE_WIDTH-1:0]     cur_offset;

assign cur_tag    = cpu_ar_addr[ADDR_WIDTH-1 -: TAG_WIDTH];
assign cur_set    = cpu_ar_addr[INLINE_BYTE_WIDTH +: SET_IDX_WIDTH];
assign cur_offset = cpu_ar_addr[INLINE_BYTE_WIDTH-1:0];

//命中判断
wire hit0 = (cache_valid0[cur_set] && cache_tag0[cur_set] == cur_tag);
wire hit1 = (cache_valid1[cur_set] && cache_tag1[cur_set] == cur_tag);
wire hit = hit0 || hit1;    
//组路选择,都未命中时默认选择路0更新，若上一次替换了路0，则这次优先替换路1，实现简单的LRU替换策略
reg [SET_NUM-1:0] lru_bit;
reg replace_way_q;

//上游接口控制信号
reg resp_valid; //响应有效信号，表示当前指令数据有效
reg [DATA_WIDTH-1:0] resp_data; //响应数据寄存器
wire cpu_r_fire;
wire cpu_ar_fire;
//下游返回数据缓冲寄存器
reg                  mem_beat_cnt;
reg [DATA_WIDTH-1:0] mem_data_buf;
wire                 mem_r_fire;
wire                 mem_ar_fire;
// flush信号处理，flush时丢弃当前未完成的请求
reg refill_drop_q;

//统计计数器
reg [63:0] ic_req_cnt;
reg [63:0] ic_hit_cnt;
reg [63:0] ic_miss_cnt;
reg [63:0] ic_total_access_cycles;
reg [63:0] ic_miss_penalty_cycles;
reg [63:0] req_cycle_cnt;
reg        ic_access_busy;
reg        ic_miss_busy;
//状态机实现
reg [1:0] state;
always @(posedge clock or negedge rst_n ) begin
    if(!rst_n) begin
        state <= S_IDLE;
    end else begin
         if(flush_i) begin
        if(state == S_UPDATE_CACHE) begin
            // memory AR 已经发出，不能直接取消，继续留在接收状态，把 R 数据接完并丢弃
            state <= S_UPDATE_CACHE;
        end else begin
            // S_IDLE 或 S_RD_MEM 阶段可以直接回到 IDLE
            state <= S_IDLE;
        end
        end
        else begin
          case(state)
            S_IDLE: begin
                if(cpu_ar_fire) begin
                    if(hit) begin
                        state <= S_IDLE;
                    end else begin
                        state <= S_RD_MEM;
                    end
                end else begin
                    state <= S_IDLE;
                end
            end
            S_RD_MEM: begin
               if(mem_ar_fire) begin
                    state <= S_UPDATE_CACHE;
                end 
            end
            S_UPDATE_CACHE: begin
                if(mem_r_fire && mem_rlast) begin
                    state <= S_IDLE;
                end
            end
              default: state <= S_IDLE;
        endcase  

        end
        
    end 
end

always @(posedge clock or negedge rst_n) begin
    if(!rst_n) begin
        tag_q <= 0;
        set_q <= 0;
        offset_q <= 0;
        addr_q <= 0;
    end else if(cpu_ar_fire) begin
        tag_q <= cpu_ar_addr[ADDR_WIDTH-1 -: TAG_WIDTH];
        set_q <= cpu_ar_addr[INLINE_BYTE_WIDTH +: SET_IDX_WIDTH];
        offset_q <= cpu_ar_addr[INLINE_BYTE_WIDTH-1:0];
        addr_q <= cpu_ar_addr;
    end
end

always @(posedge clock or negedge rst_n) begin
    if(!rst_n) begin
        replace_way_q <= 1'b0;
    end
    else if(cpu_ar_fire && !hit) begin
        replace_way_q <= lru_bit[cur_set];
    end
end

always @(posedge clock or negedge rst_n) begin
    if(!rst_n) begin
        lru_bit <= {SET_NUM{1'b0}};
    end else begin
        if(state == S_UPDATE_CACHE && mem_r_fire && mem_rlast) begin
            lru_bit[set_q] <=  ~replace_way_q; //更新替换路记录
        end
        else if(cpu_ar_fire && hit) begin
            // 每次命中时，更新该 set 的 LRU 位：命中的 way 作为最近使用，下一次 miss 优先替换另一路
            lru_bit[cur_set] <= hit0 ? 1'b1 : 1'b0; //如果路0命中，下一次优先替换路1，反之亦然
        end
    end 
end

integer i;
always @(posedge clock or negedge rst_n) begin
    if(!rst_n) begin
        //重置时，所有缓存行无效
        cache_valid0 <= {SET_NUM{1'b0}};
        cache_valid1 <= {SET_NUM{1'b0}};
    end 
    else if(flush_i) begin
            cache_valid0 <= {SET_NUM{1'b0}};
            cache_valid1 <= {SET_NUM{1'b0}};
    end
    else if(state == S_UPDATE_CACHE && mem_r_fire && !refill_drop_q) begin
        if(!replace_way_q) begin
            if(mem_beat_cnt == 0) begin
                cache_data0[set_q][DATA_WIDTH-1:0] <= mem_rdata; //第一拍数据暂存
            end
            else begin
                cache_tag0[set_q] <= tag_q;
                cache_valid0[set_q] <= 1; //标记为有效
                cache_data0[set_q][LINE_WIDTH-1:DATA_WIDTH] <= mem_rdata; //第二拍数据合成完整行
             end
                
            
        end else begin
            if(mem_beat_cnt == 0) begin
                cache_data1[set_q][DATA_WIDTH-1:0] <= mem_rdata; //第一拍数据暂存
            end
            else begin
                cache_tag1[set_q] <= tag_q;
                cache_valid1[set_q] <= 1; //标记为有效
                cache_data1[set_q][LINE_WIDTH-1:DATA_WIDTH] <= mem_rdata; //第二拍数据合成完整行
            end
        end
    end
end

always @(posedge clock or negedge rst_n) begin
    if(!rst_n) begin
        resp_valid <= 0;
        resp_data <= 0;
    end else if(state == S_IDLE && hit && cpu_ar_fire) begin
        resp_valid <= 1; //命中时响应有效
        if(hit0) begin
            resp_data <= cur_offset[2] ? cache_data0[cur_set][LINE_WIDTH-1:DATA_WIDTH]: cache_data0[cur_set][DATA_WIDTH-1:0];
        end else begin
            resp_data <= cur_offset[2]? cache_data1[cur_set][LINE_WIDTH-1:DATA_WIDTH] : cache_data1[cur_set][DATA_WIDTH-1:0];
        end
    end else if(state == S_UPDATE_CACHE && mem_r_fire && mem_rlast && !refill_drop_q) begin
        resp_valid <= 1; //更新缓存后响应有效
        resp_data <=offset_q[2] ? mem_rdata : mem_data_buf; //输出从内存读回的数据
     end else if(cpu_r_fire) begin
        resp_valid <= 0; //其他情况响应无效
        resp_data <= 0;
    end
end

always @(posedge clock or negedge rst_n) begin
    if(!rst_n) begin
        mem_beat_cnt <= 1'b0;
        mem_data_buf <= {DATA_WIDTH{1'b0}};
    end 
    else if(mem_ar_fire) begin
        mem_beat_cnt <= 1'b0;
        mem_data_buf <= {DATA_WIDTH{1'b0}};
    end
    else if(state == S_UPDATE_CACHE && mem_r_fire) begin
        if(mem_beat_cnt == 1'b0) begin
            mem_beat_cnt <= 1'b1;
            mem_data_buf <= mem_rdata;
        end else begin
            mem_beat_cnt <= 1'b0;
        end
    end
end

always @(posedge clock or negedge rst_n) begin
    if(!rst_n) begin
        refill_drop_q <= 1'b0;
    end
    else if(flush_i && state == S_UPDATE_CACHE) begin
        // AR 已经发出，后续 R 数据要接收但丢弃
        refill_drop_q <= 1'b1;
    end
    else if(state == S_UPDATE_CACHE && mem_r_fire && mem_rlast) begin
        // 当前 memory 返回事务结束，清除丢弃标志
        refill_drop_q <= 1'b0;
    end
    else if(cpu_ar_fire && !hit) begin
        // 新 miss 开始，默认不丢弃
        refill_drop_q <= 1'b0;
    end
end



always @(posedge clock or negedge rst_n) begin
    if(!rst_n) begin
        ic_req_cnt              <= 64'd0;
        ic_hit_cnt              <= 64'd0;
        ic_miss_cnt             <= 64'd0;
        ic_total_access_cycles  <= 64'd0;
        ic_miss_penalty_cycles  <= 64'd0;
        //req_cycle_cnt           <= 64'd0;

        ic_access_busy          <= 1'b0;
        ic_miss_busy            <= 1'b0;
    end
    else begin
        if(cpu_ar_fire) begin
            ic_req_cnt <= ic_req_cnt + 64'd1;
           // req_cycle_cnt <= req_cycle_cnt + 64'd1;
            if(hit) begin
                ic_hit_cnt <= ic_hit_cnt + 64'd1;
            end else begin
                ic_miss_cnt <= ic_miss_cnt + 64'd1;
            end
        end
        if(flush_i) begin
          ic_access_busy <= 1'b0;
        end

        if(cpu_ar_fire) begin
            ic_access_busy <= 1'b1;
        end

        if(cpu_r_fire) begin
            ic_access_busy <= 1'b0;
        end

        if(cpu_ar_fire && !hit) begin
            ic_miss_busy <= 1'b1;
        end


        if(mem_r_fire && mem_rlast) begin
            ic_miss_busy <= 1'b0;
        end

        if(ic_access_busy) begin
            ic_total_access_cycles <= ic_total_access_cycles + 64'd1;
        end
        if(ic_miss_busy) begin
            ic_miss_penalty_cycles <= ic_miss_penalty_cycles + 64'd1;
        end

    end
end
//输出数据和控制信号
assign cpu_ar_ready = (state == S_IDLE) && (!cpu_inst_rvalid); //只有空闲状态才接受新的地址请求 
assign cpu_inst_rvalid = resp_valid; //只有在空闲状态且命中时，指令数据有效
assign cpu_inst_rdata = resp_data; //输出响应数据
assign cpu_ar_fire = cpu_ar_valid && cpu_ar_ready;
assign cpu_r_fire = cpu_inst_rvalid && cpu_inst_rready; //指令响应完成的信号

assign mem_ar_valid = (state == S_RD_MEM) && !flush_i;
assign mem_ar_addr = {addr_q[ADDR_WIDTH-1:INLINE_BYTE_WIDTH],
                      {INLINE_BYTE_WIDTH{1'b0}}};
assign mem_ar_len = (LINE_BYTES / (DATA_WIDTH / 8)) - 1; //burst长度，假设每次读一个完整的行
assign mem_ar_size =  3'b010; //burst大小，单位为4字节，这里是行大小
assign mem_ar_burst = 2'b01; //burst类型，假设为INCR类型
assign mem_rready = (state == S_UPDATE_CACHE); //只有在更新缓存状态才准备接受内存返回的数据
assign mem_r_fire = mem_rvalid && mem_rready; //内存返回数据的有效信号
assign mem_ar_fire = mem_ar_valid && mem_ar_ready; //内存地址请求的有效信号
endmodule