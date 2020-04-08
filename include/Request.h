#ifndef REQUEST_H
#define REQUEST_H


#include <httplib.h>
#include <Windows.h>
#include <string>
#include <nlohmann/json.hpp>
#include <iostream>

using json = nlohmann::json;

using namespace httplib;

class WeatherRequest {
private:
    const static std::string APP_KEY;
    const static std::string BASE_URL;
public:
    WeatherRequest();
    std::string getWeather();
    
};

#endif
