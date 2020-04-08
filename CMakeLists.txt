cmake_minimum_required(VERSION 3.17)

set(This BadWeather)

project(${This})

set(CMAKE_C_STANDARD 99)
set(CMKAE_CXX_STANDARD 11)
set(CMAKE_POSITON_INDEPEDENT_CODE ON)

enable_testing()

# Accumulator library
# This is header only, so could be replaced with git submodules or FetchContent
# find_package(nlohmann_json 3.2.0 REQUIRED)
# Adds nlohmann_json::nlohmann_json

set(JSON_BuildTests OFF CACHE INTERNAL "")

include(FetchContent)

# Formatting library
FetchContent_Declare(
  nlohmann_json
  GIT_REPOSITORY https://github.com/nlohmann/json.git
)
FetchContent_MakeAvailable(nlohmann_json)
# Adds nlohmann_json::nlohmann_json

add_subdirectory(googletest)

add_subdirectory(test)

# The compiled library code is here
add_subdirectory(src)

# The executable code is here
add_subdirectory(app)

