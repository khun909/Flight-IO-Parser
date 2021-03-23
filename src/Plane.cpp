#include <string>
#include "Flight.h"
#include "Plane.h"


using namespace std;

Plane::Plane()= default;

void allocatePlane(fstream &inFile, Plane&tempPlane){

    inFile >> tempPlane.rows;
    inFile >> tempPlane.width;
    inFile >> tempPlane.reserved;

    std::string seat;
    std::string name;
    inFile >> ws;
    for(int y = 0; y < tempPlane.reserved; y++) {
    inFile >> seat;
    inFile >> ws;
    getline(inFile, name);
    tempPlane.passengers[seat] = name;

    }
}

//destructor
Plane::~Plane(){}

void clearMap(Plane &plane) {
plane.passengers.clear();
}

