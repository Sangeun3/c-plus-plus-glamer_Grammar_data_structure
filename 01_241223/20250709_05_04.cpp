#include <iostream>

void KFC() {
	std::cout << "KFC�Դϴ�";
}

void MC() {
	std::cout << "MC�Դϴ�";
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