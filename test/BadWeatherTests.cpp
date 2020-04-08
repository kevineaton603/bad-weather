#include "../include/Example.h"
#include "../include/Request.h"
#include <gtest/gtest.h>

TEST(BadWeatherTests, isTrue){
    EXPECT_EQ(isTrue(true), true);
}

TEST(RequestsTests, WeatherRequest){
    WeatherRequest req;
    auto json = req.getWeather(0,0);
    
    EXPECT_EQ(json["coord"]["lon"], 0);
    EXPECT_EQ(json["coord"]["lat"], 0);
}