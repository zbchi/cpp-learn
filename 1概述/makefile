# 定义源文件、目标文件和最终可执行文件
SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)
TARGET := out

# 编译器和编译选项
CXX := g++
CXXFLAGS := -g -Wall -Wextra # 你可以根据需要添加更多的编译选项

# 默认目标
all: $(TARGET)

# 链接目标文件生成最终可执行文件
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@

# 编译规则：从 .cpp 文件生成 .o 文件
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理生成的目标文件和最终可执行文件
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean