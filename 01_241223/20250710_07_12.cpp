#include <iostream>
int n;
void BBQ() {
	if (0 < n && n < 5) {
		std::cout << "�ʱⰪ";
	}
	else if (6 < n && n < 10)
	{
		std::cout << "�߰���";
	}
	else {
		std::cout << "�˼����°�";
	}
}
int main()
{
	
	std::cin >> n;

	if (n == 3 || n == 5 || n == 7) {
		for (int i = 1; i <= 10; i++) {
			std::cout << i;
		}
	}

	else if (n == 0 || n == 8)
	{
		for (int i = 10; i >= 1; i--) {
			std::cout << i;
		}
	}

	else {
		BBQ();
	}
	return 0;
}