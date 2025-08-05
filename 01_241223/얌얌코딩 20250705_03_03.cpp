#include <iostream>

int main()
{
	int x;
	std::cin >> x;

	if (x == 5 || x == 10) {
		std::cout << "만세";
	}
	else {
		std::cout << "재도전";
	}
}