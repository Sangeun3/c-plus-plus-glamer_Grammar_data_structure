#include <iostream>

int main() {
	int arr[4][4] = { {1,3,6,2},{4,2,4,5},{6,3,7,3},{1,5,4,6} };
	int n;
	int select[16];
	int i = 0;
	std::cin >> n;
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (arr[y][x] > n) {
				select[i] = arr[y][x];
				i++;
			}
		}
	}
	for (int y = 0; y < i; y++) {
		std::cout << select[y] << " ";
	}
	
	return 0;
}