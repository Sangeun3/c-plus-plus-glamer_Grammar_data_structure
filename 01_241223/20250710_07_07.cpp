#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	if (a >= b && a >= c) {
		std::cout << "MAX=" << a << std::endl;
	}
	else if (b >= a && b >= c) {
		std::cout << "MAX=" << b << std::endl;
	}
	else {
		std::cout << "MAX=" << c << std::endl;
	}
	
	if (a <= b && a <= c) {
		std::cout << "MIN=" << a << std::endl;
	}
	else if (b <= a && b <= c) {
		std::cout << "MIN=" << b << std::endl;
	}
	else {
		std::cout << "MIN=" << c << std::endl;
	}
	return 0;
}