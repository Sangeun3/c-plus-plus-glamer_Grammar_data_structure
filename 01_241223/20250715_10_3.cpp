#include <iostream>


int main() {
	int arr[3][3];
	int n;
	std::cin >> n;
	if (n % 5 == 1) {
		int c = 1;
		for (int x = 2; x >= 0; x--) {
			for (int y = 2; y >= 0; y--)
			{
				arr[y][x] = c;
				c++;
			}
		}
	}

	else if (n % 5 == 2) {
		int c = 1;
		for (int y = 2; y >= 0; y--)
		{
			for (int x = 0; x < 3; x++) {
				arr[y][x] = c;
				c++;
			}
		}
	}

	else {
		int c = 10;
		for (int x = 0; x < 3; x++) {
			for (int y = 0; y < 3; y++) {
				arr[y][x] = c;
				c++;
			}
		}
	}

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			std::cout << arr[y][x] << " ";
		}
		std::cout << "\n";
	}
	return 0;
}