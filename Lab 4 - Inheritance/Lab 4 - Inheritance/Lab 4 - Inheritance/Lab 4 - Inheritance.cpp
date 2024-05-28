#include "BaseAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "CreditAccount.h"
#include "Input.h"
#include "Console.h"
#include <iostream>
#include "BinaryFile.h"

int main()
{
	// include memory leak detection ( needs to be at top of main )
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1); // set block of memory to find memory leak
	_CrtDumpMemoryLeaks();

	std::vector<float> Accounts;

	CheckingAccount* CheckingPTR = new CheckingAccount();
	SavingsAccount* SavingsPTR = new SavingsAccount();
	CreditAccount* CreditPTR = new CreditAccount();

	std::fstream checkfile("Balance.bin");
	if (checkfile.good())
	{
		BinaryFile::binaryRead(Accounts);
		CheckingPTR->Deposit(Accounts[0]);
		SavingsPTR->Deposit(Accounts[1]);
		CreditPTR->Deposit(Accounts[2]);
		Accounts.clear();
		if(checkfile.is_open())
			checkfile.close();
	}
	else
	{
		CheckingPTR->Deposit(5000);
		SavingsPTR->Deposit(2000);
		CreditPTR->Deposit(50000);
	}

	int menuSelection = 0;
	std::vector<std::string> bankMenu{ "1. Checking Account", "2. Savings Account", "3. Credit Account", "4. Exit" };
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
			do
			{
				Console::Clear();
				std::cout << "Checking Account: \n";
				accountSelection = Input::GetMenuSelection(accountMenu);
				Console::Clear();

				switch (accountSelection)
				{
				case 1: // Deposit
				{
					CheckingPTR->Deposit(Input::GetInteger("How much would you like to deposit? ", 1, INT_MAX));
					std::cout << "You have $" << CheckingPTR->GetBalance() << ".00 in your Credit account.\n";
					Input::PressEnter();
					break;
				}
				case 2: // Withdrawl
				{
					CheckingPTR->Withdraw(Input::GetInteger("How much would you like to Withdrawl? ", 1, CheckingPTR->GetBalance()));
					std::cout << "You have $" << CheckingPTR->GetBalance() << ".00 in your Credit account.\n";
					Input::PressEnter();
					break;
				}
				case 3: // Balance
				{
					std::cout << "You have $" << CheckingPTR->GetBalance() << ".00 in your Credit account.\n";
					Input::PressEnter();
					break;
				}
				default:
					break;
				}
			} while (accountSelection != accountMenu.size());

			break;
		}
		case 2: // Savings
		{
			do
			{
				Console::Clear();
				std::cout << "Savings Account: \n";
				accountSelection = Input::GetMenuSelection(accountMenu);
				Console::Clear();

				switch (accountSelection)
				{
				case 1: // Deposit
				{
					SavingsPTR->Deposit(Input::GetInteger("How much would you like to deposit? ", 1, INT_MAX));
					std::cout << "You have $" << SavingsPTR->GetBalance() << ".00 in your Credit account.\n";
					Input::PressEnter();
					break;
				}
				case 2: // Withdrawl
				{
					SavingsPTR->Withdraw(Input::GetInteger("How much would you like to Withdrawl? ", 1, SavingsPTR->GetBalance()));
					std::cout << "You have $" << SavingsPTR->GetBalance() << ".00 in your Credit account.\n";
					Input::PressEnter();
					break;
				}
				case 3: // Balance
				{
					std::cout << "You have $" << SavingsPTR->GetBalance() << ".00 in your Credit account.\n";
					Input::PressEnter();
					break;
				}
				default:
					break;
				}
			} while (accountSelection != accountMenu.size());

			break;
		}
		case 3: // Credit
		{
			do
			{
				Console::Clear();
				std::cout << "Credit Account: \n";
				accountSelection = Input::GetMenuSelection(accountMenu);
				Console::Clear();

				switch (accountSelection)
				{
				case 1: // Deposit
				{
					CreditPTR->Deposit(Input::GetInteger("How much would you like to deposit? ", 1, INT_MAX));
					std::cout << "You have $" << CreditPTR->GetBalance() << ".00 in your Credit account.\n";
					Input::PressEnter();
					break;
				}
				case 2: // Withdrawl
				{
					CreditPTR->Withdraw(Input::GetInteger("How much would you like to Withdrawl? ", 1, (CreditPTR->GetBalance())-5000));
					std::cout << "You have $" << CreditPTR->GetBalance() << ".00 in your Credit account.\n";
					Input::PressEnter();
					break;
				}
				case 3: // Balance
				{
					std::cout << "You have $" << CreditPTR->GetBalance() << ".00 in your Credit account.\n";
					Input::PressEnter();
					break;
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

	} while (menuSelection != bankMenu.size());

	if (Accounts.size() == 0)
	{
		Accounts.push_back(CheckingPTR->GetBalance());
		Accounts.push_back(SavingsPTR->GetBalance());
		Accounts.push_back(CreditPTR->GetBalance());
	}
	BinaryFile::binaryWrite(Accounts);
		
	delete CheckingPTR;
	delete SavingsPTR;
	delete CreditPTR;
	// Recieving nullptr error???
}