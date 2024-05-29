#pragma once
class Base
{
private: 
	char* _name = nullptr;

public:
	// method
	Base(); // default ctor
	virtual void DisplayRecord() = 0;

	// rule of 3
	Base& operator=(const Base& other); // assignment operator
	Base(const Base& other); // copy constructor
	virtual ~Base(); // destructor - gets called when object gets destroyed

	// getter
	char* getName() { return _name; }

	// setter
	void setName(const char* name);
};

