#include "TriangleHeap.h"

TriangleHeap::TriangleHeap()
{
    setBase(0.0f);
    setHeight(0.0f);
}

TriangleHeap& TriangleHeap::operator=(const TriangleHeap& _other)
{
    // TODO: insert return statement here
    if (this != &_other) // if they have the same memory address - same object don't need to do anything
	{
		*mBase = *(_other.mBase); 
		*mHeight = *(_other.mHeight); 
	}

	return *this; // this is a pointer to the invoking object
}

TriangleHeap::TriangleHeap(const TriangleHeap& _other)
{
    // need to fix any shallow copies
    *this = _other; // just call the assignment operator as it does out deep copies for us
}

TriangleHeap::~TriangleHeap()
{
    delete mBase;
    delete mHeight;
}

float TriangleHeap::GetArea()
{
    //area is base * height / 2
    float result;
  
    result = *mBase * *mHeight / 2;

    return result;
}
