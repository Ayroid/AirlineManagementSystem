CXX := g++
CXXFLAGS := -std=c++11 -Wall
SRC_DIR := src
BIN_DIR := bin

# List of source files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)

# List of object files
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%.o,$(SRCS))

# List of dependency files
DEPS := $(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%.d,$(SRCS))

# Executable file name
EXECUTABLE := $(BIN_DIR)/airline

# Target: all
# Description: Default target to build the executable
all: $(EXECUTABLE)

# Target: $(EXECUTABLE)
# Description: Builds the executable from object files
$(EXECUTABLE): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Pattern Rule: $(BIN_DIR)/%.o
# Description: Compiles each source file into its corresponding object file
$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

# Target: $(BIN_DIR)
# Description: Creates the bin directory if it doesn't exist
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Include the dependency files
-include $(DEPS)

# Target: clean
# Description: Cleans the project by removing the compiled files and the executable
.PHONY: clean
clean:
	rm -rf $(BIN_DIR)/*

# Target: run
# Description: Compiles and builds the project, then runs the "airline" executable
.PHONY: run
run: $(EXECUTABLE)
	$(EXECUTABLE)
