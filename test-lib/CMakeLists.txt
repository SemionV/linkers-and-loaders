cmake_minimum_required(VERSION 3.28)
project(test-lib)

add_library(${PROJECT_NAME} STATIC src/math.cpp)

target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)