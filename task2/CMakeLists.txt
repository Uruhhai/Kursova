cmake_minimum_required(VERSION 3.10)
project(task2 CXX)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)
set(SRC_LIB src/calculator.cpp)
set(SRC_MAIN src/main.cpp)

add_library(calc STATIC ${SRC_LIB})
add_executable(mycalc ${SRC_MAIN})
target_link_libraries(mycalc PRIVATE calc)
