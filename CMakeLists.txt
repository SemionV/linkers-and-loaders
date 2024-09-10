cmake_minimum_required(VERSION 3.28)
project(linkers_and_loaders)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(test-lib)
add_subdirectory(dyn-test-lib)
add_subdirectory(header-only-lib)
add_subdirectory(static-shared-lib)
add_subdirectory(bootstrapper)