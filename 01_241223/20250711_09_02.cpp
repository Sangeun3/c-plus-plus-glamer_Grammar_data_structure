#include <iostream>

int main() {
	char arr[3][5] = { 'A', 'B', 'C', 'D', 'E',
					  'E', 'A', 'B', 'A', 'B',
					  'A', 'C', 'D', 'E', 'R' };

	char n;
	std::cin >> n;
	int counting = 0;


	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 5; x++) {
			if (n == arr[y][x]) {
				counting++;
			}
		}
	}

	if (counting >= 3) {
		std::cout << "��߰�";
	}
	else if (counting >= 1) {
		std::cout << "�߰�";
	}
	else {
		std::cout << "�̹߰�";
	}
	return 0;
}