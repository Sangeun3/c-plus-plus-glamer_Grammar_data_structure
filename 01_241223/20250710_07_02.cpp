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
		std::cout << "����Ѵ�";
	}
	else {
		std::cout << "¦�����";
	}
	return 0;
}