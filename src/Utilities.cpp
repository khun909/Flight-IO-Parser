#include "Utilities.h"

using namespace std;

void flightAdder(vector<Flight>&flight,int x){
    string name, seat;
    cout << "Enter your seat: "  <<endl;
    cout << "Row     Seat" << endl;
    cout << "1        AB" << endl;
    cout << "2        AB" << endl;
    cout << "3        AB" << endl;
    cout << "4        AB" << endl;
    cout << "5        AB" << endl;
    cout << "6        AB" << endl;
    cout << "7        AB" << endl;
    cout << "8        AB" << endl;
    cin >> seat;

    cout << "Enter your first and last name: ";
    cin >> name;
    flight[0].plane.passengers[seat] = name;
}

void flightMenu(vector<Flight>&flight ) {
    int choice, x;
    cout << "Please enter your choice: " << endl;
    cout << "Flt#  Origin        Destination" << endl;
    cout << "230   Reno          Los Angeles" << endl;
    cout << "463   Stockton      Los Angeles" << endl;
    cout << "770   Sacramento    San Francisco" << endl;
    cout << "221   Reno          Davis"<< endl;
    cin >> choice;
    if (choice != 230 && choice != 463 && choice != 770 && choice != 221) {
        cout << "Your number is invalid. Please try again";
        cin >> choice;
    }
    switch (choice){
        case 230:
            x= 0;
            flightAdder(flight, x);
        case 463:
            x = 1;
            flightAdder(flight, x);

        case 770:
            x = 2;
            flightAdder(flight, x);
        case 221:
            x = 3;
            flightAdder(flight, x);

    }

}
void userMenu(std::vector<Flight>&flight) {
    int choice;
    cout << "Welcome to the Airlines Reservation System" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Add Passenger" << endl;
    cin >> choice;
    if (choice != 1 && choice != 0) {
        cout << "Your number is invalid. Please try again";
        cin >> choice;
    }
    switch (choice) {
        case 0:
            cout << "Have a good day!";
            break;

        case 1:
            flightMenu(flight);
    }
}
