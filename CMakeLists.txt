# Advent of Code 2019
cmake_minimum_required(VERSION 3.14 FATAL_ERROR)

project (Advent-of-Code-2019)

set(INCS AoC.hpp)

foreach(f RANGE 1 1)

    if(${f} LESS 10)
        set(l 0${f})
    else()
        set(l ${f})
    endif()

    set(SRCS
        ${l}/main.cpp
    )

    add_executable(day_${l} ${SRCS} ${INCS})
    target_include_directories(day_${l} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)

endforeach()
