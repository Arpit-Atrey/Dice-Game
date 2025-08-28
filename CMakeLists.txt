cmake_minimum_required(VERSION 3.10)

# Project name and language
project(Dice_Game C)

# Add include folder
include_directories(include)

# Collect all C source files
file(GLOB SOURCES "src/*.c")

# Create executable
add_executable(Dice_Game ${SOURCES})
