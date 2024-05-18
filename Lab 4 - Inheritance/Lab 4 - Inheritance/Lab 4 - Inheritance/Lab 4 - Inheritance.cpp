#include "BaseAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "CreditAccount.h"
#include "Input.h"
#include "Console.h"
#include <iostream>

int main()
{
	// include memory leak detection ( needs to be at top of main )
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); // set block of memory to find memory leak
	_CrtDumpMemoryLeaks();

	CheckingAccount* CheckingPTR = new CheckingAccount(5000);
	SavingsAccount* SavingsPTR = new SavingsAccount(2000);
	CreditAccount* CreditPTR = new CreditAccount(50000);
	int menuSelection = 0;
	std::vector<std::string> bankMenu{ "1. Checking Account", "2. Savings Account","3. Credit Account", "4. Exit" };
	int accountSelection = 0;
	std::vector<std::string> accountMenu{ "1. Deposit", "2. Withdrawl", "3. Check Balance", "4. Exit" };

	do
	{
		Console::Clear();
		menuSelection = Input::GetMenuSelection(bankMenu);
		Console::Clear();

		

		switch (menuSelection)
		{
		case 1: // Checking
		{
			Console::Clear();
			menuSelection = Input::GetMenuSelection(accountMenu);
			Console::Clear();

			do
			{
				switch (accountSelection)
				{
				case 1: // Deposit
				{
				}
				case 2: // Withdrawl
				{
				}
				case 3: // Balance
				{
				}
				default:
					break;
				}
			} while (accountSelection != accountMenu.size());

			break;
		}
		case 2: // Savings
		{
			Console::Clear();
			menuSelection = Input::GetMenuSelection(accountMenu);
			Console::Clear();

			do
			{
				switch (accountSelection)
				{
				case 1: // Deposit
				{
				}
				case 2: // Withdrawl
				{
				}
				case 3: // Balance
				{
				}
				default:
					break;
				}
			} while (accountSelection != accountMenu.size());

			break;
		}
		case 3: // Credit
		{
			Console::Clear();
			menuSelection = Input::GetMenuSelection(accountMenu);
			Console::Clear();

			do
			{
				switch (accountSelection)
				{
				case 1: // Deposit
				{
				}
				case 2: // Withdrawl
				{
				}
				case 3: // Balance
				{
				}
				default:
					break;
				}
			} while (accountSelection != accountMenu.size());

			break;
		}
		default:
			break;
		}

		Input::PressEnter(true);

	} while (menuSelection != bankMenu.size());

	//CheckingAccount Test(5000, 0);
	//SavingsAccount TESTER(5000, 0);
	//CreditAccount TESTING(50000, 0);
	//std::cout << "CHECKINGS\n";
	//for (size_t i = 0; i < 12; i++)
	//{
	//	Test.Withdraw(5);
	//	std::cout << Test.GetBalance() << "\n";
	//}
	//
	//std::cout << "SAVINGS\n";
	//for (size_t i = 0; i < 6; i++)
	//{
	//	TESTER.Withdraw(50);
	//	std::cout << TESTER.GetBalance() << "\n";
	//}
	//	std::cout << "CREDIT\n";
	//for (size_t i = 0; i < 6; i++)
	//{
	//	TESTING.Withdraw(10);
	//	std::cout << TESTING.GetBalance() << "\n";
	//}
}
