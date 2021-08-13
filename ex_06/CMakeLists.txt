cmake_minimum_required(VERSION 3.20)
project(ex_05)

set(CMAKE_CXX_STANDARD 14)

AUX_SOURCE_DIRECTORY(. SRC)

add_executable(ex_05
        ${SRC}
        )