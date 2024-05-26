#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "BaseAccount.h"

class BinaryFile : public BaseAccount
{
	void binaryWrite(const std::vector<BaseAccount> Account);
};

