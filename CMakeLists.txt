cmake_minimum_required(VERSION 2.6)
project(101_workshop)



include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_executable(101_workshop ${SOURCES})

set_property(TARGET 101_workshop PROPERTY CXX_STANDARD 17)

