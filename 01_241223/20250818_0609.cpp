#include <iostream>

void func1(int n)
{
	if (n == 0) return;
	/*while (n > 0) */func1(n - 1);
	std::cout << n << " ";
}
int main()
{
	int n;
	std::cin >> n;
	func1(n);
}