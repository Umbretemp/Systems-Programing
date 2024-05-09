// 2405 Lecture 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>

unsigned int bitField = 19; // global variable
void TurnOn(int bit);

void Print(const unsigned int _x); // declaration

int main()
{
	//int x = 74;
	//std::cout << "x=" << x << std::endl;  // interpret x as an int
	//std::cout << "x=" << (char)x << std::endl;  // interpret x as a char

	//// left shift
	//int y = 197;
	//Print(y);
	//y = y << 1;
	//Print(y);

	//// right shift
	//int y = 197;
	//Print(y);
	//y = y >> 1;
	//Print(y);
	//y = y << 1;
	//Print(y);

	//// NOT (~)
	//int z = 167;
	//Print(z);
	//z = ~z;
	//Print(z);
	//int a = UINT_MAX;
	//Print(a);
	//a = UINT_MAX - 167;
	//Print(a);

	//// AND (&)
	//int f = 187;
	//Print(f);
	//int g = 243;
	//Print(g);
	//int h = f & g;
	//Print(h);

	//// OR (|)
	//int f = 187;
	//Print(f);
	//int g = 243;
	//Print(g);
	//int h = f | g;
	//Print(h);


	//// XOR (^)
	//int f = 187;
	//Print(f);
	//int g = 243;
	//Print(g);
	//int h = f ^ g;
	//Print(h);


	//// Let’s look at an example of storing 8 flags(Boolean values) in one char

	//const unsigned char isHungry =	1 << 0; // 0000 0001
	//const unsigned char isSad =		1 << 1; // 0000 0010
	//const unsigned char isMad =		1 << 2; // 0000 0100
	//const unsigned char isHappy =	1 << 3; // 0000 1000
	//const unsigned char isLaughing =1 << 4; // 0001 0000
	//const unsigned char isAsleep =	1 << 5; // 0010 0000
	//const unsigned char isDead =	1 << 6; // 0100 0000
	//const unsigned char isCrying =	1 << 7; // 1000 0000

	//unsigned char me = 0; // all flags/options turned off to start

	//me = me | isHappy | isLaughing; // I am happy and laughing
	//// me			0000 0000
	//// isHappy		0000 1000
	//// isLaughing	0001 0000
	////-----------------------
	//// me			0001 1000
	//Print(me);

	//me = me & ~isLaughing; // I am no longer laughing
	//// me			0001 1000
	//// ~isLaughing	1110 1111
	////-----------------------
	//// me			0000 1000
	//Print(me);

	//// Query a few states (we'll use static_cast<bool> to interpret the results as a 
	//// boolean value rather than an integer)
	//std::cout << "I am happy? " << static_cast<bool>(me & isHappy) << '\n';
	//// me			0000 1000
	//// isHappy		0000 1000
	////-----------------------
	////				0000 1000

	//std::cout << "I am laughing? " << static_cast<bool>(me & isLaughing) << '\n';
	//// me			0000 1000
	//// isLaughing	0001 0000
	////-----------------------
	////			0000 0000

	////Let’s look at an example of storing RGBA values in one 32 bit(4byte) integer

	//const unsigned int redBits =	0xFF000000; // hexadecimal number
	//const unsigned int greenBits =	0x00FF0000; // hexadecimal number
	//const unsigned int blueBits =	0x0000FF00; // hexadecimal number
	//const unsigned int alphaBits =	0x000000FF; // hexadecimal number

	//std::cout << "Enter a 32-bit RGBA color value in hexadecimal (e.g. FF7F3300): ";
	//unsigned int pixel;
	//std::cin >> std::hex >> pixel; // std::hex allows us to read in a hex value

	//// use bitwise AND to isolate red pixels, then right shift the value into the range 0-255
	//unsigned char red =		(pixel & redBits)	>> 24;
	//unsigned char green =	(pixel & greenBits) >> 16;
	//unsigned char blue =	(pixel & blueBits)	>> 8;
	//unsigned char alpha =	pixel & alphaBits;

	//std::cout << "Your color contains:\n";
	//std::cout << static_cast<int>(red) << " of 255 red\n";
	//std::cout << static_cast<int>(green) << " of 255 green\n";
	//std::cout << static_cast<int>(blue) << " of 255 blue\n";
	//std::cout << static_cast<int>(alpha) << " of 255 alpha\n";



}

void TurnOn(int bit)
{
	// bitfield 0001 0011 - current value of bitfield
	// pretend user passed in 3 as bit to turn on
	// need to figure out what operator to use and what value
	// -------------------
	// bitfield 0001 1011 - this will be result - if 3 passed in
}

void Print(const unsigned int _x) // definition
{
	std::cout << "DEC:   " << _x << "\t";
	std::cout << "HEX:   " << std::hex << _x << std::dec << "\t";
	std::cout << "BIN:   " << std::bitset<32>(_x) << std::endl;
}