cmake_minimum_required(VERSION 3.28)
project(static-shared-lib)

add_library(${PROJECT_NAME} SHARED src/service.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_NAME} PUBLIC header-only-lib)