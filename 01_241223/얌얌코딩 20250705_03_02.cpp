#include <iostream>

int main() {
	int x, y;
	std::cin >> x >> y;

	if (x > y) {
		std::cout << "ū���� " << x;
	}
	else if (x < y) {
		std::cout << "ū���� " << y;
	}
	else {
		std::cout << "��������";
	}
}