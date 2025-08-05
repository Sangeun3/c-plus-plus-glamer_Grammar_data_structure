#include <iostream>


int main() {
	int arr[3][4];
	int n = 1;
	for (int y = 2; y >= 0; y--) {
		for (int x = 3; x >= 0; x--)
		{
			arr[y][x] = n;
			n++;
		}
	}

	int input;
	std::cin >> input;
	for (int y = 0; y < 3; y++) {
		arr[y][input] = 0;
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++) {
			std::cout << arr[y][x] << " ";
		}
		std::cout << "\n";
	}
	return 0;
}