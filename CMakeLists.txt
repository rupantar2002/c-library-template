
cmake_minimum_required(VERSION 3.20)

project(my_library C)

set(CMAKE_C_STANDARD 99)

include_directories(include/my_library)

add_library(my_library STATIC src/my_library.c)

# Unity setup
add_subdirectory(tests/unity)
include_directories(tests/unity/src)

# Unit tests
enable_testing()
add_executable(test_my_library tests/test_my_library.c)
target_link_libraries(test_my_library my_library unity)
add_test(NAME my_library_tests COMMAND test_my_library)

