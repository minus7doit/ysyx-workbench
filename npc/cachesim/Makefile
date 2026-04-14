CXX      := g++
CXXFLAGS := -O2 -std=c++17 -Wall -Wextra

ICACHE_TARGET := icache_cachesim
DCACHE_TARGET := dcache_cachesim

ICACHE_SRC := icache_cachesim.cpp
DCACHE_SRC := dcache_cachesim.cpp

PYTHON := python3
EVAL_SCRIPT := cachesim.py

# ---------------- trace 文件 ----------------
ITRACE ?= itrace_train.bin
MTRACE ?= mtrace_train.bin

# ---------------- 参数搜索空间 ----------------
BLOCK_SIZE_BYTES ?= 4,8,16,32
TOTAL_BLOCKS     ?= 16,32,64,128,256
ASSOCIATIVITY    ?= 1,2,4
POLICY           ?= lru
JOBS             ?= 8

# ---------------- icache 参数 ----------------
BUS_WIDTH_BYTES       ?= 4
BASE_TRANSACTION_COST ?= 1.0

# ---------------- dcache 参数 ----------------
LOAD_HIT_CYCLES     ?= 1.0
STORE_HIT_CYCLES    ?= 1.0
LOAD_MISS_CYCLES    ?= 21.309
STORE_MISS_CYCLES   ?= 7.154
WRITEBACK_CYCLES    ?= 7.154
WRITE_ALLOCATE      ?= 1
WRITE_BACK          ?= 1

.PHONY: all run eval clean

all: $(ICACHE_TARGET) $(DCACHE_TARGET)

$(ICACHE_TARGET): $(ICACHE_SRC)
	$(CXX) $(CXXFLAGS) -o $@ $<

$(DCACHE_TARGET): $(DCACHE_SRC)
	$(CXX) $(CXXFLAGS) -o $@ $<

# make run：只负责编译出两个 simulator
run: all
	@echo "===== build done ====="
	@echo "generated: $(ICACHE_TARGET), $(DCACHE_TARGET)"

# make eval：编译 + 运行统一 Python 评估脚本
eval: all
	$(PYTHON) $(EVAL_SCRIPT) \
		--icache-sim ./$(ICACHE_TARGET) \
		--dcache-sim ./$(DCACHE_TARGET) \
		--itrace $(ITRACE) \
		--mtrace $(MTRACE) \
		--block-size-bytes $(BLOCK_SIZE_BYTES) \
		--total-blocks $(TOTAL_BLOCKS) \
		--associativity $(ASSOCIATIVITY) \
		--policy $(POLICY) \
		--bus-width-bytes $(BUS_WIDTH_BYTES) \
		--base-transaction-cost $(BASE_TRANSACTION_COST) \
		--load-hit-cycles $(LOAD_HIT_CYCLES) \
		--store-hit-cycles $(STORE_HIT_CYCLES) \
		--load-miss-cycles $(LOAD_MISS_CYCLES) \
		--store-miss-cycles $(STORE_MISS_CYCLES) \
		--writeback-cycles $(WRITEBACK_CYCLES) \
		$(if $(filter 1,$(WRITE_ALLOCATE)),--write-allocate,--no-write-allocate) \
		$(if $(filter 1,$(WRITE_BACK)),--write-back,--no-write-back) \
		--jobs $(JOBS)

clean:
	rm -f $(ICACHE_TARGET) $(DCACHE_TARGET) icache_dse.csv dcache_dse.csv