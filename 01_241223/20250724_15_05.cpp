#include <iostream>

int main() {

	int n;
	std::cin >> n;

	int a = n / 1000;
	int b = (n % 1000) / 100;
	int c = (n % 100) / 10;
	int d = (n % 10);

	std::cout << "숫자" << a;
	std::cout << "숫자" << b;
	std::cout << "숫자" << c;
	std::cout << "숫자" << d;
 

	return 0;
}