#include "Student.h"
#include <iostream>

void Student::DisplayRecord()
{
	std::cout << "NAME: " << Base::getName() << "\tGPA: " << _GPA << "\n";
}
