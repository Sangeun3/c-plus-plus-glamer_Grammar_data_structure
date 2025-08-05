#include <iostream>

int main() {
	int n;
	char ch;
	std::cin >> n;
	std::cin >> ch;

	char arr[5][5] = {};
	
	for (int x = 4; x >= 0; x--) {
		arr[n-1][x] = ch;
		ch++;
	}

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			if (arr[y][x] == '\0') std::cout << "0";
			std::cout << arr[y][x];
		}
		std::cout << std::endl;
	}
}