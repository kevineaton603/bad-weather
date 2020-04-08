cmake_minimum_required(VERSION 3.17)

set(This BadWeatherTests)

set(Sources
    BadWeatherTests.cpp
)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    BadWeather
    nlohmann_json::nlohmann_json
    gtest_main
)

add_test(
    NAME ${This}
    COMMAND ${This}
)