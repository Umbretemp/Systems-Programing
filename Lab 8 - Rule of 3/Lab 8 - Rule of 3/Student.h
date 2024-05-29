#pragma once
#include "Base.h"
class Student :	public Base
{

private:
	float _GPA;

public:
	// method
	virtual void DisplayRecord() override;

	// getter


	// setter
	void setGPA(const float& GPA) { _GPA = GPA; }
};

