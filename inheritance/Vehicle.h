#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
protected:
    std::string manufacturer;
    int yearBuilt;

public:
    Vehicle(const std::string& manufacturer, int yearBuilt);
    void setManufacturer(const std::string& manufacturer);
    std::string getManufacturer() const;
    void setYearBuilt(int yearBuilt);
    int getYearBuilt() const;
    virtual void displayInfo() const;
};

#endif // VEHICLE_H
