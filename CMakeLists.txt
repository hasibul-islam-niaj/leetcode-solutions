cmake_minimum_required(VERSION 3.23)
project(LeetCode_Problems)

set(CMAKE_CXX_STANDARD 11)

add_executable(LeetCode_Problems main.cpp Algos.cpp Algos.h "problem_1_to_10/#1_two_sum/Solution.cpp" "problem_1_to_10/#1_two_sum/Solution.h" "problem_1_to_10/#2_add_two_numbers/Solution.cpp" "problem_1_to_10/#2_add_two_numbers/Solution.h")
