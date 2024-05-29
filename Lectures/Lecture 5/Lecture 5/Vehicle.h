#pragma once
class Vehicle
{
private:
	char model[32];
	int year;

public:
	Vehicle(); //default constructor
	~Vehicle(); // destructor - gets called when object gets destroyed

	void setModel(const char* _model);
	char* getModel();
	void setYear(const int _year);
	int getYear() const; // this makes invoking object const

	void Print();

};

