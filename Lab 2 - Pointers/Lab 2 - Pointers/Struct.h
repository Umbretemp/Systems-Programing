#pragma once

struct Car
{
	Car(const int& year, const int& milage, const char& make, const char& model) :
		Year_(year)
		,Milage_(milage)
	{
	}
	//Make - char array of size 32
	//Model – char array of size 32
	//Year – int
	//Mileage – int
	//Color - EnumColorDefinition
	char Make_[32];
	char Model_[32];
	int Year_;
	int Milage_;
	enum EnumColorDefinition
	{
		Red,
		Blue
	};

};