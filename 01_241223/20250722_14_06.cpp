#include <iostream>

int main() {
	char a[3][9] = { "BBQWORLD", "KFCAPPLE", "LOT" };
	char d;
	int sum = 0;
	std::cin >> d;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 8; x++) {
			if (a[y][x] == d) {
				sum++;
			}
		}
	}
	std::cout << sum;
	return 0;
}