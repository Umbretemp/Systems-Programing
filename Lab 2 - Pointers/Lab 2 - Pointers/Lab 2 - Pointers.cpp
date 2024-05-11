#include <iostream>
#include "../../Misc/Input/Input.h"
#include "../../Misc/Console/Console.h"
#include "Passby.h"
#include "Car.h"
#include "Programs.h"


int main()
{
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

    Console::WriteLine("\nREPAINT CAR:");
    std::cout << "Please choose which color you would like to repaint your vehicle\n";
    Programs::repaintCar(Carptr, (EnumColorDefinition)Input::GetMenuSelection(colorOptions));


    Console::WriteLine("\nPRINT CAR:");
    Programs::printCar(CarArray[1]);
    Console::WriteLine("\nPRINT CARPTR:");
    Programs::printCarPointer(Carptr);
}