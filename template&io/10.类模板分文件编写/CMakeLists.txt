cmake_minimum_required(VERSION 3.10)
project(hospital)
file(GLOB SOURCES "*.cc")

add_executable(hospital ${SOURCES})
