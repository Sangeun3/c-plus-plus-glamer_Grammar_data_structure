#include <iostream>
#include <string.h>

int lengthCh(char* ch)
{
	for (int i = 0; i < 256; i++)
	{
		if (ch[i] == '\0')
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	struct a
	{
		char burger1[256];
		char burger2[256]; 
	};

	a bob;
	a tom;

	std::cin >> bob.burger1;
	std::cin >> bob.burger2;
	std::cin >> tom.burger1;
	std::cin >> tom.burger2;
	std::cout << "bob.burger1 = " << lengthCh(bob.burger1) << std::endl;
	std::cout << "bob.burger2 = " << lengthCh(bob.burger2) << std::endl;
	std::cout << "tom.burger1 = " << lengthCh(tom.burger1) << std::endl;
	std::cout << "tom.burger2 = " << lengthCh(tom.burger2) << std::endl;
}