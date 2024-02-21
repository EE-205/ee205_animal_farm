
cmake_minimum_required(VERSION 3.28)

project(ee205_animal_farm
        VERSION 1.0
        DESCRIPTION "Lorem ipsum"
        LANGUAGES CXX)

message(STATUS "CMAKE_SOURCE_DIR = [${CMAKE_SOURCE_DIR}]")

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_CLANG_TIDY
        clang-tidy -extra-arg=-std=c++17;
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")

add_executable(ee205_animal_farm main.cpp)
