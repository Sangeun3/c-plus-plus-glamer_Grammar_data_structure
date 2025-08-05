#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;
	int* p = &a;
	int* t = &b;

	int temp;
	temp = *p;
	*p = *t;
	*t = temp;

	std::cout << *p << " " << *t;
	return 0;
}