#include <iostream>

int n;

void KFC() {
	std::cin >> n;
}

void BBQ() {
	if (n > 5) std::cout << "����";
	else std::cout << "�ٽ�";
}

int main()
{
	KFC();
	BBQ();
}