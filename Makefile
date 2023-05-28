CXX := g++
CXXFLAGS := -std=c++11 -Wall
SRC_DIR := src
BIN_DIR := bin

# List of source files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)

# List of object files
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%.o,$(SRCS))

# Executable file name
EXECUTABLE := $(BIN_DIR)/airline

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(BIN_DIR)/*
