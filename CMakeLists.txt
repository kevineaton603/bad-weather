cmake_minimum_required(VERSION 3.17)

set(This BadWeather)

project(${This})

set(CMAKE_C_STANDARD 99)
set(CMKAE_CXX_STANDARD 11)
set(CMAKE_POSITON_INDEPEDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

add_subdirectory(test)

# The compiled library code is here
add_subdirectory(src)

# The executable code is here
add_subdirectory(app)