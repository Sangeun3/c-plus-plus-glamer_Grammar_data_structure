#include <iostream>

int main() {
	int A[4];
	int B[4];
	int result[4];

	for (int i = 0; i < 4; i++) {
		std::cin >> A[i];
	}

	for (int i = 0; i < 4; i++) {
		std::cin >> B[i];
	}

	for (int i = 0; i < 4; i++) {
		result[i] = A[i] + B[3 - i];
		std::cout << result[i] << " ";
	}
}