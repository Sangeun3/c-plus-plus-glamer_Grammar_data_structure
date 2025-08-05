#include <iostream>

int main() {
	int arr[6][2];

	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 2; x++) {
			std::cin >> arr[y][x];
		}
	}

	int counting = 0;

	for (int y = 0; y < 6; y++) {
		if (arr[y][0] < arr[y][1]) {
			int t;
			t = arr[y][0];
			arr[y][0] = arr[y][1];
			arr[y][1] = t;

			counting++;
		}
	}

	for (int y = 0; y < 6; y++) {
		for (int x = 0; x < 2; x++) {
			std::cout << arr[y][x];
		}
		std::cout << "\n";
	}

	std::cout << counting << "Έν";
	return 0;
}