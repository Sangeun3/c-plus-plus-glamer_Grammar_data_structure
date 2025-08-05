#include <iostream>

int input();
void cals(int a, int b, int c);

int main() {
	int a = input();
	int b = input();
	int c = input();

	cals(a, b, c);
}

int input()
{
	int n;
	std::cin >> n;
	return n;
}
void cals(int a, int b, int c) {
	std::cout << a + b + c;
}