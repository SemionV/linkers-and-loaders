cmake_minimum_required(VERSION 3.28)
project(dyn-test-lib)

add_library(${PROJECT_NAME} SHARED src/dynModule.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX ""
        IMPORT_PREFIX ""
        OUTPUT_NAME "dyn-test-lib")

target_link_libraries(${PROJECT_NAME} PRIVATE test-lib static-shared-lib)