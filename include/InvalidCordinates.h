#ifndef InvalidCordinates_H
#define InvalidCordinates_H

#include <exception>

class InvalidCordinates : public exception {
public:
    const char* what() {
        return "Invalid Cordinates";
    }
};

#endif