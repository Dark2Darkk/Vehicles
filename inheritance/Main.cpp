// Colton Coey
// CIS 1202 501
// November 20, 2023




#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <string>

using namespace std; 

int main() {
    string manufacturer;
    int yearBuilt;
    int numberOfDoors;
    int towingCapacity;


    cout << "Vehicle:\nEnter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cin.ignore(); 

    Vehicle v(manufacturer, yearBuilt);
    cout << "Vehicle Information:\n";
    v.displayInfo();

    
    cout << "\nCar:\nEnter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the number of doors: ";
    cin >> numberOfDoors;
    cin.ignore(); 

    Car c(manufacturer, yearBuilt, numberOfDoors);
    cout << "Vehicle Information:\n";
    c.displayInfo();

    
    cout << "\nTruck:\nEnter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the towing capacity: ";
    cin >> towingCapacity;

    Truck t(manufacturer, yearBuilt, towingCapacity);
    cout << "Vehicle Information:\n";
    t.displayInfo();

    return 0;
}
