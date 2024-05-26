#include "BinaryFile.h"

void BinaryFile::binaryWrite(const std::vector<BaseAccount> Account)
{	
	std::ofstream file;
	file.open("Balance.bin", std::ios_base::out | std::ios_base::binary);

	if (file.is_open())
		file.write((char*)& Account[0], Account.size() * sizeof(Account));
	
	file.close();
}
