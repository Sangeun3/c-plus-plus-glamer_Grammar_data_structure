#include <iostream>

int main()
{
	char town[3][3] = {'A','B','C',
					   'D','E','F',
					   'G','H','I'};
	char blackList[5];
	int count = 0;
	std::cin >> blackList;

	for (int i = 0; i < 4; i++)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (blackList[i] == town[y][x])
				{
					count++;
				}
			}
		}
	}

	std::cout << count << "Έν";
	
}