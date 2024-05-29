#include "Vehicle.h"
#include <iostream>


Vehicle::Vehicle() //default constructor
{
	std::cout << "Vehicle constructor" << std::endl;
	setModel("Unknown");
	setYear(-1);

}

Vehicle::~Vehicle() // destructor - gets called when object gets destroyed
{
	std::cout << "Vehicle destructor" << std::endl;
}

void Vehicle::setModel(const char* _model)
{
	strcpy_s(model, _model); // copies chars from _model to model until sees a null terminator
}
char* Vehicle::getModel()
{
	return model; // model = &model[0]
}
void Vehicle::setYear(const int _year)
{
	year = _year;
}
int Vehicle::getYear() const // this makes invoking object const
{
	return year;
}

void Vehicle::Print()
{
	std::cout << getModel() << "\t" << getYear() << std::endl;
}
