cmake_minimum_required(VERSION 2.8.4)
project(stokes)

include_directories("/home/balin/local/lib/armadillo-6.600.4/usr/include")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#set(SOURCE_FILES main.cpp Simulation.cpp Simulation.h Data.cpp Data.h ParticleSet.cpp ParticleSet.h Boundaries.cpp Boundaries.h SDVector.cpp SDVector.h  SDMatrix.cpp SDMatrix.h)
set(SOURCE_FILES main.cpp SDVector.cpp SDVector.h SDMatrix.cpp SDMatrix.h)
add_executable(stokes ${SOURCE_FILES})
target_link_libraries(stokes "/home/balin/local/lib/armadillo-6.600.4/usr/lib/libarmadillo.so")