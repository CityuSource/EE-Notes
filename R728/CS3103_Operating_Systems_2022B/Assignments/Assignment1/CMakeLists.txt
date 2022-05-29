cmake_minimum_required(VERSION 2.8.12)
project(Assignment1_55724681)
set(CMAKE_VERBOSE_MAKEFILE on)

SET(CMAKE_CXX_FLAGS  "-std=c++17")

include_directories(/usr/include/readline)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(shell ./55724681.cpp)
target_link_libraries(shell readline)

# add_executable(test ./test.cpp)
#Just remove the hashtag above this, if you are also compiling test.cpp