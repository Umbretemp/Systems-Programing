#include "Student.h"
#include <iostream>

Student::Student()
{
	setName("random");
	setGPA(1.01);
}

Student::~Student()
{
}

void Student::DisplayRecord()
{
	std::cout << "NAME: " << Base::getName() << "\tGPA: " << _GPA << "\n";
}
