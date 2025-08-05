#include <iostream>

int main() {
	char arr[10] = "DATAPOWER";
	int a, b;

	std::cin >> a >> b;
	char c[9];
	int ci=0;
	for (int i = a; i <= b; i++) {
		c[ci] = arr[i];
		ci++;
	}

	for (int i = 0; i < ci; i++) {
		std::cout << c[i];
	}


	return 0;
}