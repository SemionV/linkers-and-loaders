cmake_minimum_required(VERSION 3.28)
project(bootstrapper)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE test-lib static-shared-lib)