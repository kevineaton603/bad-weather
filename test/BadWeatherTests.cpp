#include "../include/Example.h"
#include "../include/Request.h"
#include "../include/Converter.h"
#include "../include/UserInput.h"
#include <gtest/gtest.h>
#include <fstream>

TEST(BadWeatherTests, isTrue){
    EXPECT_EQ(isTrue(true), true);
}

TEST(RequestsTests, WeatherRequest){
    WeatherRequest req;
    auto json = req.getWeather(0,0);
    
    EXPECT_EQ(json["coord"]["lon"], 0);
    EXPECT_EQ(json["coord"]["lat"], 0);
}

TEST(ConversionTest, convert) {
    double GivenKelvins = 301.8;
    double actualFahrenheit = 83.57;
    EXPECT_FLOAT_EQ(convert(GivenKelvins), actualFahrenheit);
}

TEST(UserInputTest, getUserInput){
    int longitude, latitude;
    std::string locationStr = "41\n72\n";

    std::stringstream ss(locationStr);
    longitude = getUserInput(ss);
    latitude = getUserInput(ss);
    EXPECT_EQ(longitude, 41);
    EXPECT_EQ(latitude, 72);
    ss.clear();
}