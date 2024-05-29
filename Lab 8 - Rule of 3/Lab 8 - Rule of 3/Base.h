#pragma once
class Base
{
private: 
	char* _name = nullptr;

public:
	// method
	

	// getter
	char* getName() { return _name; }

	// setter
	void SetName(const char* name);
};

