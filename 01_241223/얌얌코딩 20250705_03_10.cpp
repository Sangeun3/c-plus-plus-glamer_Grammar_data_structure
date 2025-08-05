#include <iostream>

int main() {
	int a;
	std::cin >> a;

	a = (a * 2 + 20) / 5;
	if (a != 100) {
		std::cout << "Magic";
	}
}