#include <iostream>

int main() {

	int n;
	std::cin >> n;

	int a = n / 1000;
	int b = (n % 1000) / 100;
	int c = (n % 100) / 10;
	int d = (n % 10);

	std::cout << "����" << a;
	std::cout << "����" << b;
	std::cout << "����" << c;
	std::cout << "����" << d;
 

	return 0;
}