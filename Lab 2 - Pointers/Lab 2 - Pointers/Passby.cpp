#include "Passby.h"

void Passby::PassbyValue(int y)
{
	y = y + 3;
}

void Passby::PassbyRef(int& y)
{
	y = y + 3;
}

void Passby::PassbyPtr(int* yptr)
{
	*yptr = *yptr + 3;
}
