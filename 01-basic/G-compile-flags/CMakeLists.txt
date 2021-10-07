cmake_minimum_required(VERSION 3.5)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DEX2" CACHE STRING "Set C++ Compiler Flags" FORCE)

project(hello_world_flags)

add_executable(${PROJECT_NAME} main.cpp)

target_compile_definitions(${PROJECT_NAME}
    PRIVATE EX3
)