#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "BaseAccount.h"

class BinaryFile
{
public:
	static void binaryWrite(const std::vector<BaseAccount>& Account);
	static void binaryRead();

private:
};

