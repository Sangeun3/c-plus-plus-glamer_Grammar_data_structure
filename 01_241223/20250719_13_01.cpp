#include <iostream>

void ABC(int a, int b, int* sum, int *gop) {
	*sum = a + b;
	*gop = a * b;
}


int main() {
	int a, b;
	std::cin >> a >> b;
	int sum = 0;
	int gop = 0;

	ABC(a, b, &sum, &gop);
	std::cout << sum << std::endl;
	std::cout << gop << std::endl;

}