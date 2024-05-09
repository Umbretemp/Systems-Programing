#include "Programs.h"
#include <memory>
#include <iostream>

void Programs::Program1()
{
	int Array[15];
	for (auto i = 0; i < 15; i++)
	{
		Array[i] = rand();
		std::cout << "Value" << i+1 << ": " << Array[i] << "\tMEM: " << &Array[i] << "\n";
	}
}

void Programs::Program2(int x, int* xptr)
{
	std::cout << "Value: " << x << "\tPtr: " << xptr << "\n";
}



