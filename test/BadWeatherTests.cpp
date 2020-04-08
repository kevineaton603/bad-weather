#include "../include/Example.h"
#include "../include/Request.h"
#include <gtest/gtest.h>

TEST(BadWeatherTests, isTrue){
    EXPECT_EQ(isTrue(true), true);
}

TEST(RequestsTests, WeatherRequest){
    EXPECT_EQ(isTrue(true), true);
}