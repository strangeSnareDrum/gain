cmake_minimum_required(VERSION 3.19)

project(gain)

add_library(gain src/gain.cpp)

target_include_directories(gain PUBLIC inc)