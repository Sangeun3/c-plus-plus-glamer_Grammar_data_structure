#include <iostream>

void Magic(int (*a)[3]) {
	int one = 1;
	for (int y = 0; y < 3; y++) {
		for (int x = 0 + y; x < 3; x++) {
			a[y][x] = one;
			one++;
		}
	}
}

void output(int (*a)[3]) {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (a[y][x] == 0) {
				std::cout << " ";
			}
			else {
				std::cout << a[y][x];
			}
		}
		std::cout << "\n";

	}
}

int main() {
	int arr[3][3] = {};
	Magic(arr);
	output(arr);
	return 0;
}