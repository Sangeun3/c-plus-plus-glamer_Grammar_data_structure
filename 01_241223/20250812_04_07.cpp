#include <iostream>

int map[5][5] = { 1,2,3,4,5,
				  6,7,8,9,10
				 ,1,2,3,4,5,
				  6,7,8,9,10,
				  11,12,13,14,15 };

int sum(int y, int x)
{
	int vertex[4][2] = { {-1,-1},
						 {-1, 1},
						 {1,1},
						 {1,-1} };
	int sum = 0;
	for (int dy = 0; dy < 4; dy++)
	{
		sum += map[y + vertex[dy][0]][x + vertex[dy][1]];
	}
	return sum;

}

int main()
{ 
	int max = 0;
	int dy = 0;
	int dx = 0;
	for (int y = 1; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			int sumResult = sum(y, x);
			if (max < sumResult)
			{
				max = sumResult;
				dy = y;
				dx = x;
			}
		}
	}

	std::cout << dy << " " << dx <<" " << max;
	 
}

