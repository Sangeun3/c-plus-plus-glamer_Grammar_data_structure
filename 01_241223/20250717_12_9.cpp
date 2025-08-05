#include <iostream>

int main() {

	int arr[3][3] = {};
	char ch;
	int i = 1;
	std::cin >> ch;

	if ('0' <= ch && ch <= '9') {
		for (int y = 2; y >= 0; y--) {
			for (int x = 2; x >= y; x--) {
				arr[y][x] = i;
				i++;
			}
		}
	}
	
	else if('A' <= ch && ch <= 'Z') {
		i = 1;
		for (int y = 2; y >= 0; y--) {
			for (int x = 0; x <= y; x++) {
				arr[y][x] = i;
				i++;
			}
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++) {
			if (arr[y][x] == 0) {
				std::cout << " ";
			}
			else { std::cout << arr[y][x]; }
		}
		std::cout << "\n";
	}

}