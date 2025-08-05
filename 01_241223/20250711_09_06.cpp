#include <iostream>

int main() {
	char arr[3][3];
	char a = 'A';
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			arr[y][x] = a;
			a = (char)(a++);
		}
	}

	int indexY1, indexX1;
	int indexY2, indexX2;
	std::cin >> indexY1 >> indexX1;
	std::cin >> indexY2 >> indexX2;

	char t;

	t = arr[indexY1][indexX1];
	arr[indexY1][indexX1] = arr[indexY2][indexX2] ;
	arr[indexY2][indexX2] = t;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			std::cout << arr[y][x];
		}
		std::cout << "\n";
	}

	return 0;
}