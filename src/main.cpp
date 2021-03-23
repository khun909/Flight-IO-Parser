#include <iostream>
#include <vector>
#include <string>
#include "Flight.h"
#include "Utilities.h"

using namespace std;

int main(){
    vector<Flight> flight;
    fstream inFile;

    //allocateFlight(inFile ,flight);
    addFlight(inFile, flight);
    userMenu(flight);

    return 0;

}