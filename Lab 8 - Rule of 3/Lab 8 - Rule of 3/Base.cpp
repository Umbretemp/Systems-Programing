#include "Base.h"
#include <iostream>

Base::Base() // default ctor
{
	setName("default");
}

Base& Base::operator=(const Base& other)
{
	if (this != &other) // if they have the same memory address - smae object don't need to do anything
	{
		setName(other._name); // does a deep copy for us		
	}

	return *this; // this is a pointer to the invoking object
}

Base::Base(const Base& other)
{
	*this = other;
}

Base::~Base()
{	
	delete[] _name;
}

void Base::setName(const char* name)
{
	if (_name != nullptr)
	{
		delete[] _name;
	}
	// find the length of the array passed in
	int length = strlen(name) + 1; // add one for the null terminator
	// new an array of that size for model to point to
	_name = new char[length];
	// copy the chars from _model to model
	strcpy_s(_name, length, name); // copies chars from _model to model until sees a null terminator
}
