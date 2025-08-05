#include <iostream>

int main() {
	char a[5][11];

	for (int y = 0; y < 5; y++) {
		std::cin >> a[y];
	}

	int length[5];
	for (int y = 0; y < 5; y++) {
		for (int i = 0; i < 10; i++) {
			if (a[y][i] == '\0') {
				length[y] = i;
			}
		}
	}

	int max = 0;
	int maxidx = -1;
	for (int i = 0; i < 5; i++) {
		if (max < length[i]) {
			max = length[i];
			maxidx = i;
		}
	}

	std::cout << a[maxidx];

	return 0;
}