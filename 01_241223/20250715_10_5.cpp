#include <iostream>

int GOP() {
	int a, b;
	std::cin >> a >> b;
	return a * b;
}

int SUM() {
	int a, b;
	std::cin >> a >> b;
	return a + b;
}

int main() {
	int s = SUM();
	int g = GOP();

	if (g > s) {
		std::cout << "GOP>SUM";
	}
	else if (s > g) {
		std::cout << "GOP<SUM";
	}
	else {
		std::cout << "GOP==SUM";
	}

	return 0;
}