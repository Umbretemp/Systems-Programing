#include <iostream>
#include <vector>
#include "Base.h"
#include "Employee.h"
#include "Student.h"
#include "Helper.h"
#define MEMORY_LEAK_LINE -1

void AddRecord(std::vector<Base*>& vect);
void DisplayRecords(std::vector<Base*>& vect);
void DuplicateRecord(std::vector<Base*>& vect);

void changeIt(Employee ptr)
{

}

void changeIt2(Student ptr)
{

}

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(MEMORY_LEAK_LINE); // DO NOT COMMENT OUT THIS LINE
	_CrtDumpMemoryLeaks();

	std::vector<Base*> Bases;
	int choice = 0;

	do {
		std::cout << "Menu:\n";
		std::cout << "1. Add record\n";
		std::cout << "2. Display records\n";
		std::cout << "3. Duplicate record\n";
		std::cout << "4. Exit\n";
		//std::cout << "Enter your choice: ";
		//std::cin >> choice;
		choice = Helper::GetValidatedInt("Enter your choice: ", 1, 4);
		
		switch (choice) {
		case 1:
			AddRecord(Bases);
			break;
		case 2:
			DisplayRecords(Bases);
			break;
		case 3:
			DuplicateRecord(Bases);
			break;
		case 4:
			break;
		default:
			std::cout << "Invalid choice.\n";
		}
	} while (choice != 4);

}

void AddRecord(std::vector<Base*>& vect)
{
	int choice = 0;
	
		std::cout << "Which Record type would you like to add?\n";
		std::cout << "1. Employee\n";
		std::cout << "2. Student\n";
		std::cout << "3. None/Exit\n";
		std::cin >> choice;
		if (choice == 1)
		{
			Employee* newEmployee = new Employee();
			char name[32];
			int Salary = 0;
			std::cout << "What is the Employee's Name?\n";
			std::cin >> name;
			char* nameptr = name;
			newEmployee->setName(nameptr);
			Salary = Helper::GetValidatedInt("What is the Employee's Salary?", 0, INT_MAX);
			newEmployee->setSalary(Salary);
			std::cout << "New Employee added\t";
			newEmployee->DisplayRecord();
			vect.push_back(newEmployee);
		}
		else if (choice == 2)
		{
			Student* newStudent = new Student();
			char name[32];
			float GPA = 0.00;
			std::cout << "What is the Student's Name?\n";
			std::cin >> name;
			char* nameptr = name;
			newStudent->setName(nameptr);
			GPA = Helper::GetValidatedInt("What is the Student's GPA?", 0, 5.00);
			newStudent->setGPA(GPA);
			std::cout << "New Student added\t";
			newStudent->DisplayRecord();
			vect.push_back(newStudent);			
		}
		else
			std::cout << "Invalid choice. Please choose 1. Employee or 2. Student\n";
}

void DisplayRecords(std::vector<Base*>& vect)
{
	for (auto i = 0; i < vect.size(); i++)
	{
		vect[i]->DisplayRecord();
	}
}

void DuplicateRecord(std::vector<Base*>& vect)
{
	int index = -1;
	bool valid = false;
	index = Helper::GetValidatedInt("Enter the index of the record you would like to duplicate: ", 0, vect.size());

	//do
	//{
	//	std::cout << "Enter the index of the record you would like to duplicate: ";
	//	std::cin >> index;
	//	if (index < 0 || index >= vect.size())
	//	{
	//		std::cout << "Invalid index.\n";
	//		valid = true;
	//	}
	//} while (true);
	
	Employee* test = dynamic_cast<Employee*>(vect[index]);
	Student* test1 = dynamic_cast<Student*>(vect[index]);
	if (test != nullptr)
	{
		changeIt(*test);
		vect.push_back(test);
	}
	else if (test1 != nullptr)
	{
		changeIt2(*test1);
		vect.push_back(test1);
	}
	else
		std::cout << "That recored is not an Employee or Student.\n";
}
