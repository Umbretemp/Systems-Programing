#pragma once
class Vehicle
{
private:
	char* model = nullptr;
	int* year = new int(); // just newing to show more rule of 3

public:
	Vehicle(); //default constructor

	// rule of 3
	Vehicle& operator=(const Vehicle& _other); // assignment operator
	Vehicle(const Vehicle& _other); // copy constructor
	virtual ~Vehicle(); // destructor - gets called when object gets destroyed

	void setModel(const char* _model);
	char* getModel();
	void setYear(const int _year);
	int getYear() const; // this makes invoking object const

	//virtual void Print() = 0; // pure virtual function
	virtual void Print(); // virtual function

};