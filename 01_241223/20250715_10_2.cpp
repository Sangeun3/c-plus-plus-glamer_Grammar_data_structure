#include <iostream>

char getChar() {
	char a, b;
	std::cin >> a >> b;
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	char ch = getChar();
	std::cout << ch;

	return 0;
}