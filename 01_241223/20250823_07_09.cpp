#include <iostream>
#include <string>
//암호 해독하기
int main()
{
	std::string a[4] = { "key", "door", "open","pass" };
	std::string b;
	std::cin >> b;
	bool isSame = 0;

	for (int i = 0; i < 4; i++)
	{
		if (a[i] == b) {
			isSame = 1;
			std::cout << "암호해제";
		}
	}
	if (isSame == 0)
	{
		std::cout << "암호틀림";
	}
}