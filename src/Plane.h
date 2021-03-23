#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Flight.h"
#include <map>

class Plane{
public:
    int rows;
    int width;
    int reserved;
    std::string seat;
    std::string name;
    std::map<std::string, std::string>passengers;
public:
    Plane();
    ~Plane();
    friend void allocatePlane(std::fstream &inFile, Plane& tempPlane);
    friend void clearMap(Plane& plane);
};


