# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Target executable
TARGET = linuxtoolkit

# Source files
SRCS = main.cpp script.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Header files
HEADERS = script.h

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile source files to object files
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -f $(OBJS) $(TARGET)

# Rebuild everything
rebuild: clean all

# Phony targets
.PHONY: all clean rebuild
