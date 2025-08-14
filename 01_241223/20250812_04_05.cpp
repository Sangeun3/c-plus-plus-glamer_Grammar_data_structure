#include <iostream>

int main()
{
	int arr[4][2] = {};
	int vect[4][3] = {};


	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			std::cin >> arr[y][x];
		}
	}
	


	for (int i = 0; i < 4; i++)
	{
		int y = arr[i][0];
		int x = arr[i][1];
		vect[y][x] = 5;
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			std::cout << vect[y][x] << " ";
		}
		std::cout << std::endl;
	}

}