#include <iostream>
#include "../../Misc/Input/Input.h"
#include "../../Misc/Console/Console.h"
#include "Passby.h"
#include "Car.h"
#include "Programs.h"


int main()
{
    //std::cout << "Hello World!\n";

    Programs::Program1();   
    
    
    int Arrayfield[15];
    for (auto i = 0; i < 15; i++)
    {
        Arrayfield[i] = rand();
        int* ArrayfieldPTR = &Arrayfield[i];
        Programs::Program2(Arrayfield[i], ArrayfieldPTR);
    }
    

	
 
}