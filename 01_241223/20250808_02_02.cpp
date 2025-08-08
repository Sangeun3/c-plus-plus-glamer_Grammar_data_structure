#include <iostream>

void InputMatching(int masking[][3]) {
	for (size_t y = 0; y < 3; y++)
	{
		for (size_t x = 0; x < 3; x++)
		{
			std::cin >> masking[y][x];
		}
	}
}

int addSum(int* sum, int(* arr)[3], int masking[][3])
{
	for (size_t y = 0; y < 3; y++)
	{
		for (size_t x = 0; x < 3; x++)
		{
			if (masking[y][x] == 1)
			{
				*sum += arr[y][x];
			}
		}
	}
	return *sum;
}

int main()
{
	int arr[3][3] = { 4,3,2,
	9,8,7,
	6,5,4 };

	int matching[3][3];
	int sum = 0;

	InputMatching(matching);
	addSum(&sum, arr, matching);
	
	std::cout << sum;
	return 0;
}