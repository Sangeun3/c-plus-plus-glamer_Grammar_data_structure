#include <iostream>

int main() {
	int n;
	int arr[5];
	
	std::cin >> n;
	n += 5;


	for (int i = 0; i < 5; i++) {
		arr[i] = n;
	}

	for (int i = 0; i < 5; i++) {
		std::cout << arr[i];
	}
}