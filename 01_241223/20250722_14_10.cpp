#include <iostream>

int main() {
	char a[2][6];
	char b[12];
	int aLen = 0;
	int bLen = 0;

	for (int y = 0; y < 2; y++) {
			std::cin >> a[y];
			
	}

	for (int x = 0; x < 6; x++) {
		if (a[0][x] == '\0') {
			aLen = x;
		}
		if (a[1][x] == '\0') {
			bLen = x;
		}
	}
	int j = 0;
	
		for (int i = 0; i < aLen; i++) {
			b[j] = a[0][i];
			j++;
		}
		for (int i = 0; i < + bLen + 1; i++) {
			b[j] = a[1][i];
			j++;
		}

	std::cout << b;
	return 0;
}