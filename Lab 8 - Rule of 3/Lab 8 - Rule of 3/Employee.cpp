#include "Employee.h"
#include <iostream>

Employee::Employee()
{
	setName("random");
	setSalary(5);
}

Employee::~Employee()
{
}

void Employee::DisplayRecord()
{
	std::cout << "NAME: " << Base::getName() << "\tSalary: " << _salary << "\n";
}
