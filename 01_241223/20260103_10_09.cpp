#include <iostream>

int main()
{
	char a[4][4];
	int alpaNum = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cin >> a[j][i];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if ('A' <= a[i][j] && a[i][j] <= 'Z')
			{
				alpaNum++;
			}
		}
		std::cout << alpaNum << " ";
		alpaNum = 0;
	}
}