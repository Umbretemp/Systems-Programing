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

	for (auto i = 0; i < Bases.size(); i++)
	{
		// Exception thrown at 0x00007FF7EAF4922B in Lab 8 - Rule of 3.exe: 0xC0000005: Access violation reading location 0xFFFFFFFFFFFFFFFF.
		// Error when deleting duplicated records
		//if (Bases[i] != nullptr)
		//	delete Bases[i];
	}
}

void AddRecord(std::vector<Base*>& vect)
{
	int choice = 0;
	
		std::cout << "Which Record type would you like to add?\n";
		std::cout << "1. Employee\n";
		std::cout << "2. Student\n";
		std::cout << "3. None/Exit\n";
		std::cin >> choice;
		Helper::ClearInputBuffer();
		if (choice == 1)
		{
			Employee* newEmployee = new Employee();
			Employee* test = dynamic_cast<Employee*>(newEmployee);
			if (test != nullptr)
			{
				char name[32];
				int Salary = 0;
				std::cout << "What is the Employee's Name?\n";
				std::cin >> name;
				char* nameptr = name;
				test->setName(nameptr);
				Salary = Helper::GetValidatedInt("What is the Employee's Salary?", 0, INT_MAX);
				test->setSalary(Salary);
				std::cout << "New Employee added\t";
				test->DisplayRecord();
				vect.push_back(test);
			}
			// Exception thrown at 0x00007FF662F87681 in Lab 8 - Rule of 3.exe: 0xC0000005: Access violation reading location 0xFFFFFFFFFFFFFFFF.
			//delete newEmployee;
			// Exception thrown: read access violation. test->was 0xFFFFFFFFFFFFFFF7.
			//delete test;
		}
		else if (choice == 2)
		{
			Student* newStudent = new Student();
			Student* test1 = dynamic_cast<Student*>(newStudent);
			if (test1 != nullptr)
			{
				char name[32];
				float GPA = 0.00;
				std::cout << "What is the Student's Name?\n";
				std::cin >> name;
				char* nameptr = name;
				test1->setName(nameptr);
				std::cout << "What is the Student's GPA?\n";
				std::cin >> GPA;
				test1->setGPA(GPA);
				std::cout << "New Student added\t";
				test1->DisplayRecord();
				vect.push_back(test1);
			}

			//Unhandled exception at 0x00007FF74AF47731 in Lab 8 - Rule of 3.exe: 0xC0000005: Access violation reading location 0xFFFFFFFFFFFFFFFF.
			// delete newStudent;
			// Unhandled exception thrown: read access violation. test1->was 0xFFFFFFFFFFFFFFF7
			// delete test1;
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
		//Employee* newEmployee = new Employee();
		//newEmployee = test;
		//changeIt(*newEmployee);
		//vect.push_back(newEmployee);
		changeIt(*test);
		vect.push_back(test);
	}
	else if (test1 != nullptr)
	{
		//Student* newStudent = new Student();
		//newStudent = test1;
		//changeIt2(*newStudent);
		//vect.push_back(newStudent);
		changeIt2(*test1);
		vect.push_back(test1);
	}
	else
		std::cout << "That recored is not an Employee or Student.\n";
	// Exception thrown at 0x00007FF68E1C7681 in Lab 8 - Rule of 3.exe: 0xC0000005: Access violation reading location 0xFFFFFFFFFFFFFFFF.
	//delete test;
	// Exception thrown at 0x00007FF7CCBE7731 in Lab 8 - Rule of 3.exe: 0xC0000005: Access violation reading location 0xFFFFFFFFFFFFFFFF.
	//delete test1;
}
