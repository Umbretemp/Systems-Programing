#include <iostream>
#include <vector>
#include <fstream>
#include "Vehicle.h"
#include "Car.h"
#include "Plane.h"

void changeIt(Car car) // Car car(car1)
{

}

int main()
{
	// include memory leak detection ( needs to be at top of main )
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); // set block of memory to find memory leak
	_CrtDumpMemoryLeaks();

	Car car1;
	car1.setModel("Tesla 3");
	car1.setYear(2020);
	car1.setTires(6);

	Car car2;

	car2 = car1;
	// defualt assigment operator does assignment operator for each member
	// car2.model = car1.model - this is a problem - does a shallow copy
	// car2.year = car1.year - this is a problem - does a shallow copy
	// car2.tires = car1.tires
	car1.Print();
	car2.Print();

	changeIt(car1); // copy constructor gets called - does the same thing by default
	car1.Print();
	// as assignemnt operator - does assignment operator for each member

}