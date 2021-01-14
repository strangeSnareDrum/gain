cmake_minimum_required(VERSION 3.19)

project(gain CXX)

add_library(gain STATIC src/gain.cpp)
target_include_directories(gain PUBLIC inc)
include(CTest)

option(UNIT_TESTS_ENABLED "Unit test enabled" ON)

if (UNIT_TESTS_ENABLED)
    message("Unit tests are enabled")
    add_subdirectory(externals/Unity)
    add_subdirectory(test)
endif()