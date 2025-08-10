#include <iostream>

int main()
{
	int arr[4][4] = { 1, 1, 1, 3,
					  2, 4, 5, 6,
					  5, 6, 7, 8,
					  2, 3, 2, 3 };
	int num[10] = {};
	int n;
	std::cin >> n;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			num[arr[y][x]]++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (num[i] == n)
		{
			std::cout << i << " ";
		}
	}

}