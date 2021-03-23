cmake_minimum_required(VERSION 3.17)
project(FlightSystem)

set(CMAKE_CXX_STANDARD 14)

add_executable(FlightSystem src/main.cpp src/Plane.cpp src/Plane.h src/Flight.cpp src/Flight.h src/Utilities.cpp src/Utilities.h)