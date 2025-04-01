cmake_minimum_required(VERSION 3.10)
project(out)
file(GLOB SOURCES "*.cc")

add_executable(out ${SOURCES})
