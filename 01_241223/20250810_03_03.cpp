#include <iostream>

int main()
{
	int arr[3][3];
	int find[10] = {};
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			std::cin >> arr[y][x];
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			find[arr[y][x]]++;
		}
	}
	for (int i = 1; i < 9; i++)
	{
		if(find[i] == 0)
		{
			std::cout << i << " ";
		}
	}

	return 0;
}