# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = find_biggest
SRC = find_biggest.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the find_biggest.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program in test mode (using test.txt)
test: $(TARGET)
	./$(TARGET) test.txt

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test
