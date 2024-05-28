#pragma once
#include "BaseAccount.h"
class CheckingAccount : public BaseAccount
{
public:
	CheckingAccount(float accountBalance_ = 0, int withdrawals_ = 0) 
		: BaseAccount(accountBalance_, withdrawals_)
	{

	}

	void Withdraw(float amount) override;

private:
};

