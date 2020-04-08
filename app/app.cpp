#include "../include/httplib.h"
#include <string>
#include <iostream>
#include <Request.h>


int main () {
    WeatherRequest req = WeatherRequest();
    req.getWeather();
    return 0;
}