#include "Car.h"
#include <iostream>

Car::Car()
{
	std::cout << "Car constructor" << std::endl;
	setModel("Ford");
	setYear(2000);
	setTires(4);
}

Car::~Car() // destructor - gets called when object gets destroyed
{
	std::cout << "Car destructor" << std::endl;
}

void Car::setTires(const int _tires)
{
	tires = _tires;
}
int Car::getTires() const
{
	return tires;
}

void Car::Print()
{
	std::cout << getTires() << "\t";
	Vehicle::Print(); // call base class Print;
}