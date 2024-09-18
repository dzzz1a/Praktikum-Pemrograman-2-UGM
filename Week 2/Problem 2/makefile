# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = quadratic_solver
SRC = quadratic_solver.cpp
TESTCASE = test.txt

# Default target: compile the program
all: $(TARGET)

# Compile the quadratic_solver.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program with test.txt if available
test: $(TARGET)
	./$(TARGET) $(TESTCASE)

# Run the program with user input
run: $(TARGET)
	./$(TARGET)

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test
