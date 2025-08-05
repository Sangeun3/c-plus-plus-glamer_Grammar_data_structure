#include <iostream>

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	if (a * b * c <= a + b + c) {
		std::cout << "青款狼 荐\n";

	}
	else {
		std::cout << "家家茄 荐\n";
	}
}