#include <iostream>

int main()
{
	char ID[9] = "qlqlaqkq";
	char PASSWORD[10] = "tkaruqtkf";

	char inputID[20];
	char inputPASSWORD[20];
	std::cin >> inputID;
	std::cin >> inputPASSWORD;

	if (strcmp(ID, inputID) == 0 &&
		strcmp(PASSWORD, inputPASSWORD) == 0)
	{
		std::cout << "LOGIN";
	}
	else {
		std::cout << "INVALID";
	}
	
}