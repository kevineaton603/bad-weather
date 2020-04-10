#include "../include/httplib.h"
#include <string>
#include <iostream>
#include <Request.h>

using namespace std;

int main () {
    WeatherRequest req = WeatherRequest();
    int lon = 0, lat = 0;
    cout << "-------------------------------" << endl;
    cout << "| Welcome to Our Weather App! |" << endl;
    cout << "-------------------------------" << endl;
    cout << "Please Enter Your Coordinates" << endl;
    cout << "Longitude: ";
    cin >> lon;
    cout << "Latitude: ";
    cin >> lat;
    
    auto weather = req.getWeather(lon, lat);
    cout << weather<< endl;
    return 0;
}