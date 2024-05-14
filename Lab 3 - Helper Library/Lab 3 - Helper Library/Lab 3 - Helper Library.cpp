#include "Helper.h"
#include <iostream>
#include <string>
using namespace Helper;

int main()
{
    std::cout << "You entered " << std::to_string(GetValidatedInt("Please enter a number: ", 0, INT_MAX)) << "\n";

    std::cout << "You entered " << std::to_string(GetValidatedInt("Please enter a number: ", 0, 0)) << "\n";

    std::cout << "You entered " << std::to_string(GetValidatedInt("Please enter a number: ", 500, INT_MAX)) << "\n";

    std::cout << "You entered " << std::to_string(GetValidatedInt("Please enter a number: ", INT_MIN, 500)) << "\n";
}