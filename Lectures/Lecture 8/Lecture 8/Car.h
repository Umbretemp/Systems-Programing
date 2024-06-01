#pragma once
#include "Vehicle.h"
class Car :
    public Vehicle
{
private:
    int tires;

public:
    Car();
    ~Car();

    void setTires(const int _tires);
    int getTires() const;

    void Print() override;
};