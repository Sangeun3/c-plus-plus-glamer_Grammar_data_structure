#include <iostream>

bool isPattern(int* arr, int* find, int index)
{
	for (int y = 0; y < 3; y++)
	{
		if (find[y] != *(arr + index + y))
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	int arr[5][3] = {15, 18, 17,
					 1,  2,  3,
					 4,  5,  7,
	                 7,  8,  9,
					15,  2,  6};

	int find[3];
	int* p = &arr[0][0];
	for (int y = 0; y < 3; y++)
	{
		std::cin >> find[y];
	}
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (isPattern(p, find, x + y*3) == 1)
			{
				std::cout << 5 - y << "Ãþ";
			}
		}
	}
}