
# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = main
SRC = main.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the main.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program with user input
test: $(TARGET)
	./$(TARGET)

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test
