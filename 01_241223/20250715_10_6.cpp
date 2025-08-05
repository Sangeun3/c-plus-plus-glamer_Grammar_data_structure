#include <iostream>


int main() {
	int arr[4][4];
	int n = 1;
	for (int x = 3; x >= 0 ; x--)
	{
		for (int y = 0; y < 4; y++) {
			arr[y][x] = n;
			n++;
		}
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			std::cout << arr[y][x] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}