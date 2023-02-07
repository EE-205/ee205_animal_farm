###############################################################################
###               University of Hawaii, College of Engineering
###               Animal Farm - EE 205 - Spring 2023
###
### Tells cmake about the project's source files and targets
###
### @see https://cmake.org/cmake/help/latest/manual/cmake-language.7.html
###
### @file   CMakeLists.txt
### @author Mark Nelson <marknels@hawaii.edu>
###############################################################################

cmake_minimum_required(VERSION 3.25)

project(ee205_animal_farm
      VERSION 1.0
      DESCRIPTION "Lorem ipsum"
      LANGUAGES CXX)

message(STATUS "CMAKE_SOURCE_DIR = [${CMAKE_SOURCE_DIR}]")

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")

add_executable(ee205_animal_farm main.cpp src/Utility/Trim.cpp src/Utility/Trim.h)

add_subdirectory(tests)
