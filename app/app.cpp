#include "../include/httplib.h"
#include <string>
#include <iostream>
#include <Request.h>
#include <GetAdvice.h>
#include <Converter.h>
#include <UserInput.h>

using namespace std;

int main () {
    WeatherRequest req = WeatherRequest();
    int lon = 0, lat = 0;
    cout << "-------------------------------" << endl;
    cout << "| Welcome to Our Weather App! |" << endl;
    cout << "-------------------------------" << endl;
    cout << "Please Enter Your Coordinates" << endl;
    cout << "Longitude: ";
    lon = getUserInput(cin);
    cout << "Latitude: ";
    lat = getUserInput(cin);
    
    auto weather = req.getWeather(lon, lat);
    double temp = convert(weather["main"]["temp"]);
    cout << "Currently, the weather condition is " << weather["weather"][0]["description"]
         << " and the temperature is " << temp << "\370F" << endl;
    cout << getAdvice(weather["weather"][0]["id"], temp) << endl;
    return 0;
}