#include <iostream>

int yesOrNo() {
	int n;
	std::cin >> n;
	if (n % 3 == 0) {
		return 7;
	}
	else if (n % 3 == 1) {
		return 35;
	}
	else {
		return 50;
	}
}

int main() {
	std::cout << yesOrNo();

	return 0;
}