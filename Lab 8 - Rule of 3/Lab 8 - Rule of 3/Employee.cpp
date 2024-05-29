#include "Employee.h"
#include <iostream>

void Employee::DisplayRecord()
{
	std::cout << "NAME: " << Base::getName() << "\tSalary: " << _salary << "\n";
}
