#include <iostream>

bool isExist(char arr[][8], char univer)
{
	bool isEXist = 0;
		for (int j = 0; j < 7; j++)
		{
			if (arr[0][j] == univer)
			{
				isEXist = 1;
				break;
			}
		}
		return isEXist;
}
int main()
{
	char arr[2][8] = { '1', '2','3','8','0','4','6','7',
					   'a', 'v','b','w','e','r','t','y' };
	char univer[4];

	for(int i = 0; i < 4; i++)
	{
		std::cin >> univer[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (isExist(arr, univer[i]))
		{
			std::cout << "OK ";
		}
		else
		{
			std::cout << "NO ";
		}
	}
	return 0;
}