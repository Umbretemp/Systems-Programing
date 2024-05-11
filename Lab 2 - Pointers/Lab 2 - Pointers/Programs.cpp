#include "Programs.h"
#include <memory>
#include <iostream>
#include "../../Misc/Console/Console.h"
#include "../../Misc/Input/Input.h"

void Programs::Program1()
{
	int Array[15];
	for (auto i = 0; i < 15; i++)
	{
		Array[i] = rand();
		std::cout << "Value " << i+1 << ": " << Array[i] << "\tMEM: " << &Array[i] << "\n";
	}
}

void Programs::Program2(int x, int* xptr)
{
	std::cout << "Value: " << x << "\tPtr: " << xptr << "\n";
}

void Programs::Program3(Car carArray[3])
{
	
	std::vector<std::string> menuOptions{ "0. Black", "1. Red", "2. Blue", "3. Green", "4. Yellow", "5. White", "6. Silver", "7. Gray" };

	int colorInput;

	for (auto i = 0; i < 3; i++)
	{

		std::cout << "Please enter the make of Car " << i + 1 << ": ";
		do
		{
			std::cin.getline(carArray[i].Make_, 32);
		} while (carArray[i].Make_[0] == '\0'); // Kept auto inputing blank or space

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

		std::cout << "Please enter the color of Car " + std::to_string(i + 1) + ": \n";
		colorInput = Input::GetMenuSelection(menuOptions);
		//std::cout << "Please enter the color of Car " << i + 1 << ": ";
		//std::cin >> colorInput;
		if (std::cin.fail()) // entered non integer
		{
			std::cin.clear(); // clears any errors in cin
			std::cin.ignore(INT_MAX, '\n'); // flush INT_MAX chars until it sees '\n'
		}
		carArray[i].Color = (EnumColorDefinition)colorInput;
		
	}	

	Console::WriteLine("\nPRINT CAR:");
	printCar(carArray[0]);
	printCar(carArray[1]);
	printCar(carArray[2]);

	Car* Car1 = &carArray[0];
	Car* Car2 = &carArray[1];
	Car* Car3 = &carArray[2];

	Console::WriteLine("\nPRINT CARPTR:");
	printCarPointer(Car1);
	printCarPointer(Car2);
	printCarPointer(Car3);
}

void Programs::repaintCar(Car* ptrCar, EnumColorDefinition newcolor)
{
	switch (ptrCar->Color) {
	case Red:
		std::cout << "Your Car is currently red.";
		break;
	case Blue:
		std::cout << "Your Car is currently blue.";
		break;
	case Green:
		std::cout << "Your Car is currently green.";
		break;
	case Yellow:
		std::cout << "Your Car is currently yellow.";
		break;
	case White:
		std::cout << "Your Car is currently white.";
		break;
	case Silver:
		std::cout << "Your Car is currently silver.";
		break;
	case Gray:
		std::cout << "Your Car is currently gray.";
		break;
	default:
		std::cout << "Your Car is currently black.";
		break;
	}

	ptrCar->Color = newcolor;

	switch (ptrCar->Color) {
	case Red:
		std::cout << "\nYour Car has been repainted to red.";
		break;
	case Blue:
		std::cout << "\nYour Car has been repainted to blue.";
		break;
	case Green:
		std::cout << "\nYour Car has been repainted to green.";
		break;
	case Yellow:
		std::cout << "\nYour Car has been repainted to yellow.";
		break;
	case White:
		std::cout << "\nYour Car has been repainted to white.";
		break;
	case Silver:
		std::cout << "\nYour Car has been repainted to silver.";
		break;
	case Gray:
		std::cout << "\nYour Car has been repainted to gray.";
		break;
	default:
		std::cout << "\nYour Car has been repainted to black.";
		break;
	}
	std::cout << "\n";
}

void Programs::printCar(Car Car)
{
	std::cout << "You Car is a " << Car.Year_ << " " << Car.Make_ << " " << Car.Model_;
	std::cout << " with " << Car.Milage_ << " miles";
	switch (Car.Color) {
	case Red:
		std::cout << " and is red.";
		break;
	case Blue:
		std::cout << " and is blue.";
		break;
	case Green:
		std::cout << " and is green.";
		break;
	case Yellow:
		std::cout << " and is yellow.";
		break;
	case White:
		std::cout << " and is white.";
		break;
	case Silver:
		std::cout << " and is silver.";
		break;
	case Gray:
		std::cout << " and is gray.";
		break;
	default:
		std::cout << " and is black.";
		break;
	}
	std::cout << "\n";
}

void Programs::printCarPointer(Car* ptrCar)
{
	std::cout << "You Car is a " << (*ptrCar).Year_ << " " << (*ptrCar).Make_ << " " << (*ptrCar).Model_;
	std::cout << " with " << (*ptrCar).Milage_ << " miles";
	switch ((*ptrCar).Color) {
	case Red:
		std::cout << " and is red.";
		break;
	case Blue:
		std::cout << " and is blue.";
		break;
	case Green:
		std::cout << " and is green.";
		break;
	case Yellow:
		std::cout << " and is yellow.";
		break;
	case White:
		std::cout << " and is white.";
		break;
	case Silver:
		std::cout << " and is silver.";
		break;
	case Gray:
		std::cout << " and is gray.";
		break;
	default:
		std::cout << " and is black.";
		break;
	}
	std::cout << "\n";
}

void Programs::addMileage(Car* ptrCar, int miles2add)
{
	(*ptrCar).Milage_ = (*ptrCar).Milage_ + miles2add;
}



