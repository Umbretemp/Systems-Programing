#include "Base.h"
#include <iostream>

void Base::SetName(const char* name)
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
