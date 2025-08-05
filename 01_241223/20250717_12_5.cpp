#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int arr[3][4] = {};
	int one = 1;
	if (n == 1){
		for (int y = 0; y < 3; y++) {
			for (int x = 2 - y; x < 4; x++) {
				arr[y][x] = one;
				
				one++;
			}
			std::cout << std::endl;
		}
	}
	one = 2;
	if (n == 2) {
		for (int y = 0; y < 3; y++) {
			for (int x = 2-y; x < 4; x++) {
				arr[y][x] = one;
				one++;
			}
		}
	}
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {

			if (arr[y][x] == 0) {
				std::cout << " ";
			}
			else {
				std::cout << arr[y][x];
			}

		}
		std::cout << std::endl;
	}
}