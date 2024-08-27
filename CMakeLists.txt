cmake_minimum_required(VERSION 3.28)
project(linkers_and_loaders)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(test-lib)

add_executable(${PROJECT_NAME} bootstrapper/src/main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE test-lib)