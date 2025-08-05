#include <iostream>

int main()
{
	int arr[5] = { 3,5,2,4,1 };
	int arr2[3][2] = { 9,8,
					   7,1,
					   3,4 };
	int n;
	std::cin >> n;

	if (n % 2 == 1)
	{
		for (int i = 0; i < 5; i++) {
			std::cout << arr[i] << " ";
		}
	}
	else
	{
		for (int y = 0; y < 3; y++) {
			for (int x = 0; x < 2; x++) {
				std::cout << arr2[y][x] << " ";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}