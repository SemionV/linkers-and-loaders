cmake_minimum_required(VERSION 3.28)
project(dyn-test-lib)

add_library(${PROJECT_NAME} SHARED src/dynModule.cpp)