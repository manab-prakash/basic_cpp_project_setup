cmake_minimum_required(VERSION 3.10.2)
set(This Example)
project(${This} C CXX)
set(CMAKE_C_STANDARD 98) #cpp standard
set(CMAKE_CXX_STANDARD 11) #cpp standard

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()
add_subdirectory(googletest)

set(Headers
    src/Example.hpp
    )

 set(SOURCES
    src/Example.cpp
 )   

add_library(${This} STATIC ${Sources} ${Headers})
add_subdirectory(test)
SET_TARGET_PROPERTIES(${This} PROPERTIES LINKER_LANGUAGE CXX)
add_executable(main ${SOURCES})
