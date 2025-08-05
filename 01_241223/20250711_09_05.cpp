#include <iostream>

int main() {
	struct ABC {
		int x;
		int y;
	};

	ABC t;
	std::cin >> t.x >> t.y;
	std::cout << t.x + t.y;

	return 0;
}