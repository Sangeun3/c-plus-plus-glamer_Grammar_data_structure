#include <iostream>

void BBQ(int x, int y)
{
	std::cout << "ÇÕ:" << x + y;
	std::cout << "Â÷:" << x - y;
	std::cout << "°ö:" << x * y;
	std::cout << "¸ò:" << x / y;
}

int main() {
	int a, b;
	std::cin >> a >> b;

	BBQ(a, b);
	return 0;
}