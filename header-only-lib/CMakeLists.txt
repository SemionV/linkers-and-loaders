cmake_minimum_required(VERSION 3.28)
project(header-only-lib)

add_library(${PROJECT_NAME} INTERFACE include/dory/genericService.h)

target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)