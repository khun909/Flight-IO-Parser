#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Plane.h"


class Flight{
public:
    int flightNum;
    std::string origin;
    std::string destination;
    Plane plane;
public:
  friend void allocateFlight( std::fstream& inFile ,std::vector<Flight>& flight);
  friend void addFlight(std::fstream& inFile , std::vector<Flight>& flight);
    Flight();

};


