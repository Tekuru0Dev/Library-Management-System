# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17 -Iinclude

# Source files
SRC = main.cpp \
      src/Book.cpp \
      src/User.cpp \
      src/Library.cpp \
      src/FileStorageHeader.cpp

# Object files (automatically replace .cpp with .o)
OBJ = $(SRC:.cpp=.o)

# Output executable
TARGET = LibraryApp.exe

# Default build rule
all: $(TARGET)

# Linking the final executable
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

# Compilation rule
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove object files and the executable
clean:
	del /f /q *.o *.exe 2>nul || true

# Run the app (optional convenience rule)
run: all
	./$(TARGET)
