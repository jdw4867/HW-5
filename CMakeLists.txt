cmake_minimum_required(VERSION 3.12)
project(HW_5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HW_5
        makefile
        song.cpp
        song.h
        UtPod.cpp
        UtPod.h
        UtPodDriver.cpp)
