#include <iostream>

int main() {
	int arr[6];
	for (int i = 0; i < 6; i++) {
		std::cin >> arr[i];
	}

	for (int y = 0; y < 5; y++) {
		for (int x = y + 1; x < 6; x++) {
			if (arr[y] < arr[x]) {
				int temp;
				temp = arr[y];
				arr[y] = arr[x];
				arr[x] = temp;
			}
		}
	}

	for (int i = 0; i < 6; i++) {
		std::cout << arr[i];
	}

	return 0;
}