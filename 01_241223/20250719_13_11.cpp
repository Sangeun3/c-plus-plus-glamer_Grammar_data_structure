#include <iostream>

int main() {
	int arr[3][5];
	int result[5];


	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			std::cin >> arr[y][x];
			}
	}

	for (int i = 0; i < 5; i++) {
		result[i] = arr[0][i] * arr[1][i] + arr[2][i];
		std::cout << result[i] << " ";
	}

}