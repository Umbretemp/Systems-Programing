#pragma once
#include <iostream>

namespace Helper
{
	int GetValidatedInt(const char* strMessage, int nMinimumRange = 0, int nMaximumRange = 0);
	void PrintBinary(const unsigned int _x);
	void ClearInputBuffer();

	int GetValidatedInt(const char* strMessage, int nMinimumRange, int nMaximumRange)
	{
		int Input;
		std::cout << strMessage << "\n";		
		
		if (nMaximumRange == 0 && nMinimumRange == 0) // Prefer (min == max) instead of both = 0
			return 0;		

		do
		{
			if (std::cin >> Input && Input <= nMaximumRange && Input >= nMinimumRange) // entered non integer
			{
				ClearInputBuffer();
				break;
			}
			ClearInputBuffer();
			std::cout << "Please enter a value between " << nMinimumRange << " and " << nMaximumRange << "\n";

		}	while (true);

		return Input;
	}

	void PrintBinary(const unsigned int _x)
	{
		std::cout << "Initial value: " << _x << "\t";
		std::cout << "Binary value: ";
		for (int i = 31; i >= 0; i--)
		{
			std::cout << ((_x >> i) & 1);
			if (i % 4 == 0)
				std::cout << " ";
		}
		std::cout << "\n";
	}

	void ClearInputBuffer()
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}
}