#include <iostream>
#include "../../Misc/Input/Input.h"
#include "../../Misc/Console/Console.h"
#include "Passby.h"
#include "Car.h"
#include "Programs.h"


int main()
{
    Input::GetInteger("test", 0, 55);
    std::vector<std::string> colorOptions{"0. Black" , "1. Red", "2. Blue", "3. Green", "4. Yellow", "5. White", "6. Silver", "7. Gray" };

    std::cout << "PROGRAM 1:\n";
    Programs::Program1();   

    std::cout << "\nPROGRAM 2:\n";
    int Arrayfield[15];
    for (auto i = 0; i < 15; i++)
    {
        Arrayfield[i] = rand();
        int* ArrayfieldPTR = &Arrayfield[i];
        Programs::Program2(Arrayfield[i], ArrayfieldPTR);
    }
    
    std::cout << "\nPROGRAM 3:\n";
    Car CarArray[3];
    Programs::Program3(CarArray);

    Car* Carptr = &CarArray[0];
    int Carnum;

    Console::WriteLine("\nREPAINT CAR:");    
    Carnum = Input::GetInteger("Which Car would you like to paint?", 1, 3);
    switch (Carnum)
    {
    case 1: // Car 1
    {
        Carptr = &CarArray[0];
        break;
    }
    case 2: // Car 2
    {
        Carptr = &CarArray[1];
        break;
    }
    case 3: // Car 3
    {
        Carptr = &CarArray[2];
        break;
    }
    default:
        break;
    }
    std::cout << "Please choose which color you would like to repaint your vehicle\n";
    Programs::repaintCar(Carptr, (EnumColorDefinition)Input::GetMenuSelection(colorOptions));

    Console::WriteLine("\nPRINT CAR:");
    Carnum = Input::GetInteger("Which Car would you like to print?", 1, 3);
    switch (Carnum)
    {
    case 1: // Car 1
    {
        Carptr = &CarArray[0];
        break;
    }
    case 2: // Car 2
    {
        Carptr = &CarArray[1];
        break;
    }
    case 3: // Car 3
    {
        Carptr = &CarArray[2];
        break;
    }
    default:
        std::cout << "Please choose 1, 2, or 3.";
    }
    Programs::printCar((*Carptr));

    Console::WriteLine("\nPRINT CARPTR:");
    Carnum = Input::GetInteger("Which Car would you like to print?", 1, 3);
    switch (Carnum)
    {
    case 1: // Car 1
    {
        Carptr = &CarArray[0];
        break;
    }
    case 2: // Car 2
    {
        Carptr = &CarArray[1];
        break;
    }
    case 3: // Car 3
    {
        Carptr = &CarArray[2];
        break;
    }
    default:
        std::cout << "Please choose 1, 2, or 3.";
    }
    Programs::printCarPointer(Carptr);

    Console::WriteLine("\nMILEAGE ADD:");
    Carnum = Input::GetInteger("Which Car would you like to change the milage of?", 1, 3);
    switch (Carnum)
    {
    case 1: // Car 1
    {
        Carptr = &CarArray[0];
        break;
    }
    case 2: // Car 2
    {
        Carptr = &CarArray[1];
        break;
    }
    case 3: // Car 3
    {
        Carptr = &CarArray[2];
        break;
    }
    default:
        std::cout << "Please choose 1, 2, or 3.";
    }
    Programs::addMileage(Carptr, Input::GetInteger("Please enter how many miles you would like to add to the odomiter: ", 0, INT_MAX));
    Programs::printCarPointer(Carptr);

}