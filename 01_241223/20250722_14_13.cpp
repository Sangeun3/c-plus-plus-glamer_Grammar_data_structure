#include <iostream>

int main() {
	char a, b;
	std::cin >> a >> b;

	char* c = &a;
	char* d = &b;

	char temp;
	temp = *c;
	*c = *d;
	*d = temp;

	std::cout << *c << *d;

	return 0;
}