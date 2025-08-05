#include <iostream>


int main() {
	int arr[8] = { 4,3,6,1,3,1,5,3 };
	int counting = 0;
	int n;

	std::cin >> n;

	for (int i = 0; i < 8; i++) {
		if (arr[i] == n) {
			counting++;
		}
	}

	std::cout << "숫자" << n << "개수는" << counting << "개";
}