cmake_minimum_required(VERSION 3.30)
project(Genome)

set(CMAKE_CXX_STANDARD 23)

add_executable(Genome main.cpp
        BaseGenomes/BaseGenome.cpp
        BaseGenomes/BaseGenome.h
)
