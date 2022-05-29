cmake_minimum_required(VERSION 2.8.12)
project(Assignment3_55724681)
set(CMAKE_VERBOSE_MAKEFILE on)

SET(CMAKE_CXX_FLAGS  "-std=c++17 -pthread")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(quantization ./55724681.cpp)