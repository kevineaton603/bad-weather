#include "Request.h"

const std::string WeatherRequest::APP_KEY  = "dd564605fde0370a9b99f98d80729b18";
const std::string WeatherRequest::BASE_URL = "api.openweathermap.org";

WeatherRequest::WeatherRequest(){

}

std::string WeatherRequest::getWeather(){
    Client cli(this->BASE_URL);
    std::string url = "/data/2.5/weather?q=Burlington&appid=" + APP_KEY;
    auto res = cli.Get(url.c_str());
    if (res && res->status == 200) {
        std::cout << res->body << std::endl;
        auto j = json::parse(res->body);
        std::cout << j << std::endl;
    }
    return res->body;
}
