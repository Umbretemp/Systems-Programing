#include <iostream>
#include "../../Misc/Input/Input.h"
#include "../../Misc/Console/Console.h"
#include "Passby.h"
#include "Car.h"
#include "Programs.h"


int main()
{
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
    Programs::Program3();

    
}