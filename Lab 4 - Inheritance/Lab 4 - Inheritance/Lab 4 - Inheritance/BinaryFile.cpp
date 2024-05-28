#include "BinaryFile.h"

void BinaryFile::binaryWrite(const std::vector<float>& Account)
{	
	std::ofstream file;
	file.open("Balance.bin", std::ios_base::out | std::ios_base::binary);

	if (file.is_open())
	{
		file.write((char*)&Account[0], Account.size() * sizeof(Account));
		file.close();
	}

}

void BinaryFile::binaryRead(std::vector<float>& Account)
{
	// declare object for ifstream
	std::ifstream file; 
	// open file as binary input
	file.open("Balance.bin", std::ios_base::binary | std::ios_base::in);

	if (file.is_open()) // check to make sure that the file is open
	{
		// move fileptr to end of file
		//file.seekg(0, std::ios_base::end);
		//int count = (int)file.tellg(); // tell us how many bytes we are into the file ( location of fileptr ) – this is total bytes of file
		// put fileptr back at beginning of the file ( so we can read from beginning )
		//file.seekg(0, std::ios_base::beg);

		// divide total bytes in file by how many bytes in each item in our vector – this gives us # of items
		//int numRecords = count / sizeof(Account);

		// put fileptr back at beginning of the file ( so we can read from beginning )
		//file.seekg(0, std::ios_base::beg);

		// must allocate memory to store elements in
		//Account.resize(numRecords);

		// read to the address of the first item of records vector, total bytes ( # of items in vector * size in bytes of each item )
		file.read((char*)&Account[0], Account.size() * sizeof(Account));

		file.close();
	}

}
