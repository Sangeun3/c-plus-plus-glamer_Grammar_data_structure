#include <iostream>

int main() {
	int x, y;
	std::cin >> x >> y;

	if (x > y) {
		std::cout << "큰수는 " << x;
	}
	else if (x < y) {
		std::cout << "큰수는 " << y;
	}
	else {
		std::cout << "같은숫자";
	}
}