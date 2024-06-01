#include <iostream>
#include <vector>
#include <fstream>
#include "Vehicle.h"
#include "Car.h"
#include "Plane.h"

void changeIt(Car car) /// pass by copy - Car car(car1)
{

}

int main()
{
	// include memory leak detection ( needs to be at top of main )
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); // set block of memory to find memory leak
	_CrtDumpMemoryLeaks();


	Car car1;
	Vehicle& vref = car1; // can have reference of abstract base class type(it is not an instance)
	changeIt(car1);


	// upcasting - fine - but you lose functionality
	//Vehicle* vptr = (Vehicle*)new Car();
	////vptr->setTires(6); // can only call methods in Vehicle
	//delete vptr;

	// downcasting - bad - gain functionlity that is not there
	//Car* cptr = (Car*)new Vehicle(); // downcasting
	//cptr->setTires(6); // writing to memory the object does not own - super bad
	//std::cout << cptr->getTires() << std::endl; // reading from memory the object does not own
	//delete cptr;

	//Car* cptr2 = new Car();
	//int* iptr = (int*)cptr2; // can cast pointers to any other pointer type
	//*iptr = 10;
	//std::cout << *iptr << std::endl;
	//delete iptr;


	// dynamic_cast
	//Vehicle* vptr4 = new Vehicle();
	//Car* cptr4 = new Car();
	//Plane* pptr4 = new Plane();

	//Vehicle* test1 = dynamic_cast<Vehicle*>(cptr4); // upcasting - fine - returns value of cptr4
	//if (test1 != nullptr)
	//{
	//	test1->Print(); // virtual dispatch to Car Print
	//}
	//Car* test2 = dynamic_cast<Car*>(vptr4); // downcast - bad - returns nullptr
	//if (test2 != nullptr)
	//{
	//	test2->Print(); 
	//}
	//Plane* test3 = dynamic_cast<Plane*>(cptr4); // not safe - bad cast
	//if (test3 != nullptr)
	//{
	//	test3->Print();
	//}
	//delete vptr4;
	//delete cptr4;
	//delete pptr4;

	// duplicate record
	std::vector<Vehicle*> vehicles; // can have pointer of abstract base class type ( it is not an instance )
	vehicles.push_back(new Car()); // upcasting
	vehicles.push_back(new Plane()); // upcasting
	vehicles.push_back(new Car()); // upcasting

	// user enters which record they want a copy of 
	// for our purposes, I am just going to say the entered 1
	// have to figure out what vehicles[1] points to 
	Car* test10 = dynamic_cast<Car*>(vehicles[1]);
	if (test10 != nullptr)
	{
		// create a new Car and pass appropriate thing to copy constructor
		// push above pointer into vector
	}
	Plane* test11 = dynamic_cast<Plane*>(vehicles[1]);
	if (test11 != nullptr)
	{
		// create a new Plane and pass appropriate thing to copy constructor
		// push above pointer into vector
	}


	for (int i = 0; i < vehicles.size(); i++)
	{
		//vehicles[i]->setTires(6); // can only call methods in Vehicle
		vehicles[i]->Print(); // virtual dispatch
	}
	for (int i = 0; i < vehicles.size(); i++)
	{
		delete vehicles[i];
	}


}