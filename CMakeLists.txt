cmake_minimum_required(VERSION 3.17)
project(CPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(run
        pascals_triangle.cpp triangle.h triangle.cpp board.h board.cpp player.h game.h game.cpp)
