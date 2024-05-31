#pragma once
#include "Base.h"
class Student :	public Base
{

private:
	float _GPA;

public:
	// method
	Student();
	~Student();
	void DisplayRecord() override;

	// getter


	// setter
	void setGPA(const float& GPA) { _GPA = GPA; }
};

