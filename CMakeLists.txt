cmake_minimum_required(VERSION 3.5)

project(05.homework)

add_executable(random_shuffle src/random_shuffle.cpp)
set_target_properties(random_shuffle PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(chrono_example src/chrono_example.cpp)
set_target_properties(chrono_example PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(statistics 
                src/statistics/IStatistics.hpp
                src/statistics/statistics.cpp
                src/statistics/Min.cpp src/statistics/Min.hpp
                src/statistics/Max.cpp src/statistics/Max.hpp
                src/statistics/Mean.cpp src/statistics/Mean.hpp
                src/statistics/Std.cpp src/statistics/Std.hpp)
set_target_properties(statistics PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

