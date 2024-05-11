#pragma once
#include "Car.h"

class Programs
{
public:
	static void Program1();
	static void Program2(int x, int* xptr);
	static void Program3(Car carArray[3]);

	static void repaintCar(Car* ptrCar, EnumColorDefinition newcolor);
	
	static void printCar(Car c);
	static void printCarPointer(Car* ptrCar);
	static void addMileage(Car* ptrCar, int milestoadd);
private:
};

