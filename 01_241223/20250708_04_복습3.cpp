#include <iostream>

int main() {
	int arr[5];
	int n;
	std::cin >> n;
	for (int i = 0; i < 5; i++) {
		arr[i] = n;
	}

	for (int i = 0; i < 5; i++) {
		std::cout << arr[i];
	}
}