#include "Plane.h"
#include <iostream>

Plane::Plane()
{
	std::cout << "Plane constructor" << std::endl;
	setModel("Boeing 747");
	setYear(1990);
}

Plane::~Plane() // destructor - gets called when object gets destroyed
{
	std::cout << "Plane destructor" << std::endl;
}

void Plane::setWings(const int _wings)
{
	wings = _wings;
}

int Plane::getWings() const
{
	return wings;
}

void Plane::Print()
{
	std::cout << getWings() << "\t";
	Vehicle::Print();
}
