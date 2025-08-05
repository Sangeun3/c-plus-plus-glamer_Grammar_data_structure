#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (a < b) {
		int t;
		t = b;
		b = a;
		a = t;
	}

	if ((a - b) % 2 == 1) {
		std::cout << "°í¹éÇÑ´Ù";
	}
	else {
		std::cout << "Â¦»ç¶û¸¸";
	}
	return 0;
}