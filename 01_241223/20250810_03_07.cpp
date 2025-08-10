#include <iostream>

int main()
{
	char train[10] = { '0', '7', '6', '4', '3','2','1','5','0','9' };
	char team[3];
	int teamidx[3] = {-1,-1,-1};
	int idx = 0;
	int max = -1;
	int min = 10;
	for (int i = 0; i < 3; i++)
	{
		std::cin >> team[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (team[i] == train[x]) 
			{
				teamidx[idx++] = x;
				break;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (max < teamidx[i])
		{
			max = teamidx[i];
		}
		if (min > teamidx[i])
		{
			min = teamidx[i];
		}
	}
	std::cout << min << "¹ø~" << max << "¹ø Ä­";
}