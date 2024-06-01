#include "Vehicle.h"
#include <iostream>


Vehicle::Vehicle() : model(nullptr) //default constructor
{
	std::cout << "Vehicle constructor" << std::endl;
	setModel("Unknown");
	setYear(-1);

}

Vehicle::~Vehicle() // destructor - gets called when object gets destroyed
{
	std::cout << "Vehicle destructor" << std::endl;
	delete[] model;
	delete year;
}

Vehicle& Vehicle::operator=(const Vehicle& _other) // assignment operator
{
	if (this != &_other) // if they have the same memory address - smae object don't need to do anything
	{
		setModel(_other.model); // does a deep copy for us
		*year = *(_other.year); // need to do a deep copy
	}

	return *this; // this is a pointer to the invoking object
}

Vehicle::Vehicle(const Vehicle& _other) // copy constructor
{
	// need to fix any shallow copies
	*this = _other; // just call the assignment operator as it does out deep copies for us
}

void Vehicle::setModel(const char* _model)
{
	if (model != nullptr)
	{
		delete[] model;
	}
	// find the length of the array passed in
	int length = strlen(_model) + 1; // add one for the null terminator
	// new an array of that size for model to point to
	model = new char[length];
	// copy the chars from _model to model
	strcpy_s(model, length, _model); // copies chars from _model to model until sees a null terminator
}
char* Vehicle::getModel()
{
	return model; // model = &model[0]
}
void Vehicle::setYear(const int _year)
{
	*year = _year;
}
int Vehicle::getYear() const // this makes invoking object const
{
	return *year;
}

void Vehicle::Print()
{
	std::cout << getModel() << "\t" << getYear() << std::endl;
}