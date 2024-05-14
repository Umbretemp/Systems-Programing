#pragma once
#include "BaseAccount.h"
class CreditAccount : public BaseAccount
{
public:
	CreditAccount(float accountBalance_, int withdrawals_, int ammountSpent = 0)
		: BaseAccount(accountBalance_, withdrawals_)
		,ammountSpent_(ammountSpent)
	{

	}

	void Withdraw(float amount) override;

private:
	int ammountSpent_ = 0;
};

