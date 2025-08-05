#include <iostream>

char atoZ() {
	char a;
	std::cin >> a;

	if ('A' <= a && a <= 'M') {
		return 'A';
	}
	else if ('N' <= a && a <= 'Z') {
		return 'Z';
	}
}

int main() {
	std::cout << atoZ();

	return 0;
}