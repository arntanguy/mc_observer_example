cmake_minimum_required(VERSION 3.1)
project(mc_observer_example)

find_package(mc_rtc REQUIRED)
find_package(Eigen3 REQUIRED)

add_subdirectory(src)
