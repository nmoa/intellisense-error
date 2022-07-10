# Sets CMAKE version
cmake_minimum_required(VERSION 3.11)
project(main CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(test_main
    test.cpp
)

target_compile_options(test_main
    PUBLIC -g3 -O0 -std=c++11 -Wall --coverage
)

target_link_options(test_main
    PUBLIC ${CMAKE_EXE_LINKER_FLAGS}
    PUBLIC --coverage
)

target_link_libraries(test_main)
