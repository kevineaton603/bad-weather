cmake_minimum_required(VERSION 3.17)

set(This Example)

project(${This}_C_CXX)

set(CMAKE_C_STANDARD 99)
set(CMKAE_CXX_STANDARD 11)
set(CMAKE_POSITON_INDEPEDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

add_subdirectory(cpp-httplib)

set(Headers
    Example.h
)

set(Sources
    main.cpp
    Example.cpp
)

add_subdirectory(test)

add_executable(${This} ${Sources} ${Headers})