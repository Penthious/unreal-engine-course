cmake_minimum_required(VERSION 3.8)
project(BullCowGame)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        "Header Files/FBullCowGame.h"
        FBullCowGame.cpp
        FBullCowGame.hpp
        main.cpp)

add_executable(BullCowGame ${SOURCE_FILES})