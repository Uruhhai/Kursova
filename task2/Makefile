CXX = g++
CXXFLAGS = -Iinclude -Wall -Wextra -O2
SRC = src/main.cpp src/calculator.cpp
OBJ = src/main.o src/calculator.o
TARGET = task2
LIB = libtask2.a

.PHONY: all clean

all: $(LIB) $(TARGET)

$(LIB): src/calculator.o
	ar rcs $@ $^

$(TARGET): src/main.o $(LIB)
	$(CXX) -o $@ $^

src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(TARGET) $(LIB)

