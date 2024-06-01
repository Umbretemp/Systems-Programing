#pragma once
#include "Vehicle.h"
class Plane :
    public Vehicle
{
private:
    int wings = 2;

public:
    Plane();
    ~Plane();

    void setWings(const int _wings);
    int getWings() const;

    void Print();
};