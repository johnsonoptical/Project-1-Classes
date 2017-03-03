cmake_minimum_required(VERSION 3.6)
project(Project1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp BMI.cpp BMI.h Schools.cpp Schools.h Athlete.cpp Athlete.h)
add_executable(Project1 ${SOURCE_FILES})