cmake_minimum_required(VERSION 3.6)

project(TestAbseil CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(absl REQUIRED)

add_executable(absl_test absl_test.cpp)
target_link_libraries(absl_test PRIVATE absl::flat_hash_map)
