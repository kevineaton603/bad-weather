#ifndef INVALID_COORDINATES_H
#define INVALID_COORDINATES_H

#include <exception>

class InvalidCoordinates : public std::exception {
public:
    virtual const char* what() const throw();
};

#endif