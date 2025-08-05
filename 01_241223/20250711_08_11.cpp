#include <iostream>

void starBox() {
	for (int i = 1; i <= 20; i++) {
		if (i % 2 == 1) {
			std::cout << i << " ";
		}
	}
}

void macDoll() {
	for (char i = 'H'; i >= 'A'; i--) {
		std::cout << i << " ";
	}
}

void copyBean() {
	for (int i = -5; i <= 5; i++) {
		std::cout << i << " ";
	}
}

int main()
{
	int input;
	std::cin >> input;

	if (3500 <= input && input <= 5000) {
		starBox();
	}
	else if (2500 <= input && input < 3500) {
		macDoll();
	}
	else {
		copyBean();
	}
	return 0;
}