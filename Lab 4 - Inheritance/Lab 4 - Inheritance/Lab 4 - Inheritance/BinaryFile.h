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
<<<<<<< HEAD
	static void binaryWrite(const std::vector<float>& Account);
	static void binaryRead(std::vector<float>& Account);
=======
	static void binaryWrite(const std::vector<BaseAccount>& Account);
	static void binaryRead();
>>>>>>> Binary Read (before changing constructor)

private:
};

