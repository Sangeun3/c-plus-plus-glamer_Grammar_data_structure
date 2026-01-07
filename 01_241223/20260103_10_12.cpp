#include <iostream>

int main()
{
	std::string str;
	std::cin >> str;
	char strs[3][6];

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			strs[y][x] = str[x+y*5];
		}
		strs[y][5] = '\0';
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << strs[i] << std::endl;
	}
	
}