#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    Truck(const std::string& manufacturer, int yearBuilt, int towingCapacity);
    void setTowingCapacity(int towingCapacity);
    int getTowingCapacity() const;
    void displayInfo() const override;
};

#endif // TRUCK_H
