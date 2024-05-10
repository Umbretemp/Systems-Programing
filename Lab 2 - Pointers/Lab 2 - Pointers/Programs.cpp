#include "Programs.h"
#include <memory>
#include <iostream>
#include "Car.h"

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

void Programs::Program3()
{
	Car carArray[3];
	int colorInput;

	for (auto i = 0; i < 3; i++)
	{
		std::cout << "Please enter the make of Car " << i + 1 << ": ";
		std::cin.getline(carArray[i].Make_, 32);

		std::cout << "Please enter the model of Car " << i + 1 << ": ";
		std::cin.getline(carArray[i].Model_, 32);

		std::cout << "Please enter the year of Car " << i + 1 << ": ";
		std::cin >> carArray[i].Year_;
		if (std::cin.fail()) // entered non integer
		{
			std::cin.clear(); // clears any errors in cin
			std::cin.ignore(INT_MAX, '\n'); // flush INT_MAX chars until it sees '\n'
		}

		std::cout << "Please enter the milage of Car " << i + 1 << ": ";
		std::cin >> carArray[i].Milage_;
		if (std::cin.fail()) // entered non integer
		{
			std::cin.clear(); // clears any errors in cin
			std::cin.ignore(INT_MAX, '\n'); // flush INT_MAX chars until it sees '\n'
		}

		std::cout << "Please enter the color of Car " << i + 1 << ": ";
		std::cin >> colorInput;
		if (std::cin.fail()) // entered non integer
		{
			std::cin.clear(); // clears any errors in cin
			std::cin.ignore(INT_MAX, '\n'); // flush INT_MAX chars until it sees '\n'
		}
		carArray[i].Color = (EnumColorDefinition)colorInput;
	}
}



