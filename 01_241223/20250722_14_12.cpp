#include <iostream>

int main() {
	char arr[3][6] = { "POTIO","ABCDE","YOURE" };
	
	int a;
	int b;
	std::cin >> a >> b;

	for (int y = 0; y < 3; y++) {
		for (int x = a; x <= b; x++) {
			std::cout << arr[y][x];
		}
	}
	return 0;
}