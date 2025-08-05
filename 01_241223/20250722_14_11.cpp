#include <iostream>

int main() {
	char arr[2][6] = { "DATAW", "QKBB" };
	int n;
	std::cin >> n;

	if (n % 2 == 1) {
		for (int y = 0; y < 5; y++) {
			for (int x = y + 1; x < 5; x++) {
				if (arr[0][x] < arr[0][y]) {
					char temp;
					temp = arr[0][x];
					arr[0][x] = arr[0][y];
					arr[0][y] = temp;
				}
			}
		}
	}

	else if (n % 2 == 0) {
		for (int y = 0; y < 4; y++)
		{
			for (int x = 0; x < 3 - y; x++) {
				if (arr[1][x] > arr[1][x + 1]) {
					char temp;
					temp = arr[1][x];
					arr[1][x] = arr[1][x + 1];
					arr[1][x + 1] = temp;
				}
			}
		}
	}

	std::cout << arr[0] << "\n";
	std::cout << arr[1];
	return 0;
}