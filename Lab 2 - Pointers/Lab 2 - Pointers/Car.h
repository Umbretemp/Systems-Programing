#pragma once

enum EnumColorDefinition
{
	Red,
	Blue,
	Green,
	Yellow,
	White,
	Silver,
	Gray,
	Black,
};


struct Car
{

	//Make - char array of size 32
	//Model – char array of size 32
	//Year – int
	//Mileage – int
	//Color - EnumColorDefinition
	char Make_[32];
	char Model_[32];
	int Year_;
	int Milage_; 
	EnumColorDefinition Color;
};