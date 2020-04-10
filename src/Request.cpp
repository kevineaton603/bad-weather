#include "Request.h"

const std::string WeatherRequest::APP_KEY  = "dd564605fde0370a9b99f98d80729b18";
const std::string WeatherRequest::BASE_URL = "api.openweathermap.org";

WeatherRequest::WeatherRequest(){
    this->client = new Client(this->BASE_URL);
}

WeatherRequest::~WeatherRequest(){
    delete this->client;
}

std::shared_ptr<httplib::Response> WeatherRequest::request(std::string url){
    return this->client->Get(url.c_str());
}

json WeatherRequest::getWeather(){
    std::string url = "/data/2.5/weather?q=Burlington&appid=" + this->APP_KEY;
    json j;
    auto res = this->request(url);
    if (res && res->status == 200) {
        j = json::parse(res->body);
    }
    return j;
}

json WeatherRequest::getWeather(int lng, int lat){
    json j;
    try {
        if (lng < -180 || lng > 180 || lat < -90 || lat > 90) throw new InvalidCoordinates;
        std::string longitude = std::to_string(lng);
        std::string latitude = std::to_string(lat);
        std::string url = "/data/2.5/weather?lat="+latitude+"&lon="+longitude+"&appid=" + this->APP_KEY;
 
        auto res = this->request(url);
        if(res && res->status == 200){
            j = json::parse(res->body);
        }
    } catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    return j;
}
