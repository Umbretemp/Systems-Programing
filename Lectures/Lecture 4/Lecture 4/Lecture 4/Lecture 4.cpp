// 2405 Lecture 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Car.h"
#include "Plane.h"

int main()
{
	// include memory leak detection ( needs to be at top of main )
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); // set block of memory to find memory leak
	_CrtDumpMemoryLeaks();

	//Vehicle vehicle;
	//std::cout << sizeof(vehicle) << std::endl;
	//std::cout << sizeof(Vehicle) << std::endl;

	//// Vehicle::setYear(2000); //  illegal call of non-static member function
	//// std::cout << vehicle << std::endl; //  << operator not defined for Vehicle class
	//vehicle.Print();


	/*Car car;
	std::cout << sizeof(car) << std::endl;
	std::cout << sizeof(Car) << std::endl;
	car.Print();*/
	//car.~Car(); // don't call destructor explicitly - this will cause a crash in this instance
	// because year will get deleted here, and then again when destructor get called when object
	// gets destroyed

	//Vehicle* vptr = new Vehicle();
	//delete vptr; // object gets destroyed - destructor gets called

	// virtual functions
	//Vehicle* vptr2 = new Plane(); // upcasting
	//std::cout << sizeof(Plane) << std::endl;
	//vptr2->Print();
	//delete vptr2;

	// usage of upcasting and virtual functionality
	// without upcasting and virtual functionality I need a constainer call (vector)
	// for each type of object derived from Vehicle
	/*std::vector<Plane> planes;
	Plane plane;
	for (int i = 0; i < 10; i++)
	{
		plane.setYear(1990 + i);
		planes.push_back(plane);
	}
	for (int i = 0; i < planes.size(); i++)
	{
		planes[i].Print();
	}
	
	std::vector<Car> cars;
	Car car;
	for (int i = 0; i < 10; i++)
	{
		car.setYear(1990 + i);
		cars.push_back(car);
	}
	for (int i = 0; i < cars.size(); i++)
	{
		cars[i].Print();
	}*/

	// with upcasting and virtual functionality we can store in one vector
	// std::vector<Vehicle&> vehicles; // remeber can't have a vector of references
	std::vector<Vehicle*> vehicles;
	vehicles.push_back(new Car()); // upcasting
	vehicles.push_back(new Plane()); // upcasting
	vehicles.push_back(new Car()); // upcasting
	// vehicles[0]->setTires(6); // can't call functions not defined in Vehicle
	for (int i = 0; i < vehicles.size(); i++)
	{
		vehicles[i]->Print(); // virtual dipatch to Car or Plane Print
	}
	for (int i = 0; i < vehicles.size(); i++)
	{
		delete vehicles[i];
	}



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
