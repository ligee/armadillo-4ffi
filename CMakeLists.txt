cmake_minimum_required(VERSION 2.8.4)
project(libarma4ffi)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories("/usr/local/include")
link_directories("/usr/local/lib")

set(LIB_SOURCE_FILES arma4ffi/arma4ffi.cpp)
add_library(arma4ffi SHARED ${LIB_SOURCE_FILES})
target_link_libraries(arma4ffi armadillo)

set(TEST_SOURCE_FILES main.cpp)
add_executable(arma4ffi_test ${TEST_SOURCE_FILES})
target_link_libraries(arma4ffi_test arma4ffi)
