cmake_minimum_required(VERSION 3.14)
project(lex_tests)

set(CMAKE_CXX_STANDARD 17)

include_directories(common-include)

add_subdirectory(lex-lib)
add_subdirectory(shunting-yard-lib)
add_subdirectory(tests)