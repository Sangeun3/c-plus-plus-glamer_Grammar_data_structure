#include <iostream>

void BBQ(int x, int y)
{
	std::cout << "��:" << x + y;
	std::cout << "��:" << x - y;
	std::cout << "��:" << x * y;
	std::cout << "��:" << x / y;
}

int main() {
	int a, b;
	std::cin >> a >> b;

	BBQ(a, b);
	return 0;
}