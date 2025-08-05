#include <iostream>

void KFC() {
	std::cout << "KFC입니다";
}

void MC() {
	std::cout << "MC입니다";
}

int main()
{
	int n;
	std::cin >> n;

	if (n == 1) {
		KFC();
	}
	else if (n == 2) {
		MC();
	}
}