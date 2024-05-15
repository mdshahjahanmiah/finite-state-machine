cmake_minimum_required(VERSION 3.10)
project(finite-state-machine)

set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(include)

# Add source files
add_executable(finite-state-machine src/main.cpp src/FoodDeliveryFSM.cpp)

# Add tests
