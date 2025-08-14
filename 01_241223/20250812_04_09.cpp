#include <iostream>

int image[4][4] = {};

int rectSum(int y, int x)
{
	int sum = 0;
	/*int Direct[6][2] = { 0,0, 0,1, 0,2,
						1,0, 1,1, 1,2, };
	for (int i = 0; i < 6; i++)
	{
		int dy = y + Direct[i][0];
		int dx = x + Direct[i][1];
		sum += image[dy][dx];
	}*/

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int dy = y + i;
			int dx = x + j;
			sum += image[dy][dx];
		}
	}
	return sum;
}

int main()
{
	int max = -1;
	int yidx = -1;
	int xidx = -1;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			std::cin >> image[y][x];
		}
	}

	
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			int sum = rectSum(y, x);
			if (max < sum)
			{
				max = sum;
				yidx = y;
				xidx = x;
			}
		}
	}

	std::cout << "(" << yidx << "," << xidx << ")";
}