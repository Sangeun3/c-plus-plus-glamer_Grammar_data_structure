#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;
	
	if (a > b) {
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
		while (a <= b) {
			std::cout << a << " ";
			a++;
	}
}