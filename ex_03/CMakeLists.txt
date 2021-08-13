cmake_minimum_required(VERSION 3.20)
project(ex_03)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

AUX_SOURCE_DIRECTORY(. SRC)

add_executable(ex_03
        ${SRC}
        )
