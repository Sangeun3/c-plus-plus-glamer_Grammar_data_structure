#include <iostream>

int n;

void KFC() {
	std::cin >> n;
}

void BBQ() {
	if (n > 5) std::cout << "만세";
	else std::cout << "다시";
}

int main()
{
	KFC();
	BBQ();
}