# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = table
SRC = table.cpp
TESTCASE = testcase.txt

# Default target: compile the program
all: $(TARGET)

# Compile the table.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program with input from testcase.txt
test: $(TARGET) $(TESTCASE)
	./$(TARGET) $(TESTCASE)

# Run the program with user input
run: $(TARGET)
	./$(TARGET)

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test
