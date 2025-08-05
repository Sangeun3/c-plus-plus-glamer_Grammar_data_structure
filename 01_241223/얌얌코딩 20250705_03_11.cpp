#include <iostream>

int main()
{
	int a, b;
	std::cout << "입력: ";
	std::cin >> a >> b;
	std::cout << "출력: ";
	for (int i = a; i <= b; i++)
	{
		std::cout << i;
	}
}