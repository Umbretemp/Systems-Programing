#pragma once
#include "Base.h"
class Employee :	public Base
{
private:
	int _salary;

public:
	// method
	Employee();
	~Employee();
	void DisplayRecord() override;

	// getter

	
	// setter
	void setSalary(const int& salary) { _salary = salary; }
};

