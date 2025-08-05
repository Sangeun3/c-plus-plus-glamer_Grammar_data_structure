#include <iostream>

int main() {
	char ch;
	std::cin >> ch;
	int y = 2;
	char arr[3][3] = {};

	while (y >= 0) {
		int x = 0;
		while (x <= 2 - y) {
			arr[y][x] = ch;
			ch++;
			x++;
		}
		y--;
	}

	y = 0;
	while (y < 3)
	{
		int x = 0;
		while (x < 3) {
			std::cout << arr[y][x];
			x++;
		}
		std::cout << "\n";
		y++;
	}
	return 0;
}