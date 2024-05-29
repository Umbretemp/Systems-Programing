// 2405 Lecture 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include "Vehicle.h"
#include "Car.h"
#include "Plane.h"

void TextOutput(Car& _car); // passing by reference so I don't make a copy
void TextInput(Car& _car); // passing by reference so I can change the passed in car

void BinOutput(std::vector<Car>& _cars); // passing by reference so I don't make a copy
void BinInput(std::vector<Car>& _cars); // passing by reference so I can change the passed in vector


int main()
{
	// include memory leak detection ( needs to be at top of main )
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); // set block of memory to find memory leak
	_CrtDumpMemoryLeaks();

	//// Text Ouput
	//Car car;
	//car.setModel("Tesla 3");
	//car.setYear(2020);
	//car.setTires(6);
	//TextOutput(car);

	//// Text input
	//Car car;
	//car.Print();
	//TextInput(car);
	//car.Print();

	//// Binary output
	//std::vector<Car> cars;
	//Car car;
	//car.setModel("Tesla 3");
	//car.setTires(8);
	//std::cout << sizeof(Car) << std::endl;
	//for (int i = 0; i < 10; i++)
	//{
	//	car.setYear(2000 + i);
	//	cars.push_back(car);
	//}
	//for (int i = 0; i < cars.size(); i++)
	//{
	//	cars[i].Print();
	//}
	//BinOutput(cars);

	// Binary input
	std::vector<Car> cars;
	BinInput(cars);
	for (int i = 0; i < cars.size(); i++)
	{
		cars[i].Print();
	}


}

void BinOutput(std::vector<Car>& _cars) // passing by reference so I don't make a copy
{
	std::ofstream binout;
	binout.open("output.bin", std::ios_base::binary); // binary file
	if (binout.is_open())
	{
		// write the number of items in the vector
		int numcars = _cars.size();
		binout.write((char*)&numcars, sizeof(int));
		// write from the starting location in the vector all the items in the vector
		binout.write((char*)&_cars[0], _cars.size() * sizeof(Car));
		binout.close();
	}
	else
	{
		// file did not open
		std::cout << "File did not open" << std::endl;
	}
}

void BinInput(std::vector<Car>& _cars) // passing by reference so I can change the passed in vector
{
	std::ifstream binin;
	binin.open("output.bin", std::ios_base::binary);
	if (binin.is_open())
	{
		// read the number of cars that are in the file
		int numcars;
		binin.read((char*)&numcars, sizeof(int));
		// resize the vector
		_cars.resize(numcars);
		// read from the file into the starting memory location of array in vector
		binin.read((char*)&_cars[0], _cars.size() * sizeof(Car));

		binin.close();
	}
	else
	{
		// file did not open
		std::cout << "File did not open" << std::endl;
	}

}

void TextOutput(Car& _car) // passing by reference so I don't make a copy
{
	// make an instance of stream
	std::ofstream fout;
	// open the file
	fout.open("output.txt");
	// check to make sure the file opened ok
	if (fout.is_open())
	{
		// do stuff with the file
		fout << _car.getModel() << std::endl;
		fout << _car.getYear() << std::endl;
		fout << _car.getTires() << std::endl;
		// close the file
		fout.close();
	}
	else
	{
		// file did not open
		std::cout << "File did not open" << std::endl;
	}
}

void TextInput(Car& _car) // passing by reference so I can change the passed in car
{
	std::ifstream fin;
	fin.open("output.txt");
	if (fin.is_open())
	{
		char buffer[32]; // temp to read into - we have to call setModel and pass in an array
		fin.getline(buffer, 32); // read the model
		_car.setModel(buffer);

		int temp; // temp int to read into
		fin >> temp; // read the year
		_car.setYear(temp);

		fin >> temp; // read the tires
		_car.setTires(temp);


		fin.close();
	}
	else
	{
		// file did not open
		std::cout << "File did not open" << std::endl;
	}
}