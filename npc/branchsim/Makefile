CXX      := g++
CXXFLAGS := -O2 -std=c++17 -Wall -Wextra
TARGET   := branchsim
SRCS     := branchsim.cpp
OBJS     := $(SRCS:.cpp=.o)

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET) --btrace btrace.bin --itrace itrace.bin

clean:
	rm -f $(TARGET) $(OBJS)