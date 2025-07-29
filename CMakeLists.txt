cmake_minimum_required(VERSION 3.10)
project(run-mark)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB_RECURSE SOURCES
    src/*.cpp
    include/*.cpp
    include/*.hpp
)

add_executable(run-mark ${SOURCES})
