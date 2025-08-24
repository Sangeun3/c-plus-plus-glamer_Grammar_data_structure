#include <iostream>
//3차 배열에서 MAX MIN 찾기

int main()
{
	int A[2][3][4]
		= {
		1,5,3,2,
		4,2,1,3,
		5,1,2,4,

		6,2,4,3,
		2,5,3,6,
		4,6,2,5
	};
	int idx;
	std::cin >> idx;
	if (idx == 0)
	{
		int MAX = 0;
		int MIN = 10;
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 4; x++)
			{
				if (MAX < A[0][y][x])
				{
					MAX = A[0][y][x];
				}
				if (MIN > A[0][y][x])
				{
					MIN = A[0][y][x];
				}
			}
		}
		std::cout << "MAX=" << MAX << std::endl;
		std::cout << "MIN=" << MIN << std::endl;
	}

	if (idx == 1)
	{
		int MAX = 0;
		int MIN = 10;
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 4; x++)
			{
				if (MAX < A[1][y][x])
				{
					MAX = A[1][y][x];
				}
				if (MIN > A[1][y][x])
				{
					MIN = A[1][y][x];
				}
			}
		}
		std::cout << "MAX=" << MAX << std::endl;
		std::cout << "MIN=" << MIN << std::endl;
	}
}