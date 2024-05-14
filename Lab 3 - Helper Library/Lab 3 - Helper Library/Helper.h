#pragma once
#include <iostream>

namespace Helper
{
	int GetValidatedInt(const char* strMessage, int nMinimumRange = 0, int nMaximumRange = 0);

	int Helper::GetValidatedInt(const char* strMessage, int nMinimumRange, int nMaximumRange)
	{
		int Input;
		bool inRange = false;
		std::cout << strMessage << "\n";		
		
		if (nMaximumRange == 0 && nMinimumRange == 0) // Prefer (min == max) instead of both = 0
			return 0;

		std::cin >> Input;
		if (std::cin.fail()) // entered non integer
		{
			std::cin.clear(); // clears any errors in cin
			std::cin.ignore(INT_MAX, '\n'); // flush INT_MAX chars until it sees '\n'
		}
		else
			std::cin.clear();// the buffer still needs to be cleared even if this step was successful

		do
		{
			if (Input <= nMaximumRange && Input >= nMinimumRange)
				inRange = true;
			else
			{
				std::cout << "Please enter a value between " << nMinimumRange << " and " << nMaximumRange << "\n";
				std::cin >> Input;
				if (std::cin.fail()) // entered non integer
				{
					std::cin.clear(); // clears any errors in cin
					std::cin.ignore(INT_MAX, '\n'); // flush INT_MAX chars until it sees '\n'
				}
				else
					std::cin.clear();// the buffer still needs to be cleared even if this step was successful
			}
		}	while (!inRange);

		return Input;
	}
}