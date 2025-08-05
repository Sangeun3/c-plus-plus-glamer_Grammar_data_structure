#include <iostream>


int vext[2][5] = { {3,2,6,2,4},{1,4,2,6,5} };

int KFC(int target) {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 5; x++) {
			if (vext[y][x] == target) {
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	
	int target;
	std::cin >> target;

	int exist = KFC(target);

	if (exist) std::cout << "값이 존재합니다";
	else std::cout << "값이 없습니다";
	return 0;
}