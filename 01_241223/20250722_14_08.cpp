#include <iostream>

void CountLine(char arr[3][10]) {
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 10; x++) {
			if (arr[y][x] == '\0') {
				std::cout << x << "=";
				break;
			}
			
		}
		std::cout << arr[y] << "\n";
	}
}

int main() {
	char arr[3][10];

	for (int y = 0; y < 3; y++) {
		std::cin >> arr[y];
	}
	
	CountLine(arr);

	return 0;
}