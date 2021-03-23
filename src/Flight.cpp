#include <vector>
#include <string>
#include "Flight.h"

using namespace std;

//this function only allocates the Flight array
void allocateFlight(fstream& inFile,vector<Flight>&flight){
    string item;
    inFile.open("reservations.txt");
    //check for error
    if (inFile.fail()){
        cout << "Failed to open";
        exit(1);
    }
    int i;
    i = 0;
    while (getline(inFile, item ))
    {
        if (item.length() == 3){
            i++;
            flight.resize(i);
        }
    }
}

//this function is for reading the .txt file into a SINGLE Flight

void addFlight(fstream& inFile, vector<Flight>&flight){

    Flight addFlight;
    inFile.open("reservations.txt");

    int num_flights = 0;

    inFile >> num_flights;

    for (int i = 0; i < num_flights; i++){
        // get flight information
        inFile >> addFlight.flightNum;
        inFile >> ws;
        getline(inFile,addFlight.origin);
        getline(inFile,addFlight.destination);
        allocatePlane(inFile, addFlight.plane);
        flight.push_back(addFlight);
        clearMap(addFlight.plane);
    }

}
//constructor
Flight::Flight(){}


