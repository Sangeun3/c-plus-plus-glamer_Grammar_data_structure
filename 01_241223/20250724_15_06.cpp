#include <iostream>

int main() {

	int arr[6];
	for (int i = 0; i < 6; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < 5; i++) {
		if (arr[i] - arr[i + 1] >= 3 || arr[i] - arr[i + 1] <= -3) {
			std::cout << "재배치필요";
			return 0;
		}
	}

	std::cout << "완벽한배치";
	return 0;
}