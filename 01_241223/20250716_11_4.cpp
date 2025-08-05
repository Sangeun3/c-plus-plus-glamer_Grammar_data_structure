#include <iostream>

int main() {
	char a, b, c;
	std::cin >> a >> b >> c;

	char* d;
	char* f;
	char* g;
	d = &a;
	f = &b;
	g = &c;

	std::cout << ++(*d) << " ";
	std::cout << ++(*f) << " ";
	std::cout << ++(*g) << " ";

	return 0;
}