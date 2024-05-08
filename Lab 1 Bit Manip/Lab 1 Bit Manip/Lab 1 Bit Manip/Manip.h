#pragma once
class Manip
{
public:
	//decleration
	unsigned int Turnon(unsigned int bitField, int bit);
	unsigned int TurnOff(unsigned int bitField, int bit);
	unsigned int Toggle(unsigned int bitField, int bit);
	unsigned int Negate(unsigned int bitField);
	unsigned int LeftShift(unsigned int bitField);
	unsigned int RightShift(unsigned int bitField);

private:
};

