#include <iostream>


int arrlen(char* arr) {
	for (int i = 0; i < 7; i++) {
		if (arr[i] == '\0') {
			return i;
		}
	}
}

int main() {
	char a[4][7];
	int b[4];
	for (int i = 0; i < 4; i++) {
		std::cin >> a[i];
		b[i] = arrlen(a[i]);
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3 - y; x++) {
			if (b[x] > b[x + 1]) {
				int temp;
				temp = b[x];
				b[x] = b[x + 1];
				b[x + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		std::cout << b[i];
	}

	return 0;
}