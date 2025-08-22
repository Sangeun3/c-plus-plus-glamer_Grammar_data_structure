#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (a + b > 10)
	{
		std::cout << "합만세";
	}
	else if (a * b > 10)
	{
		std::cout << "곱만세";
	}
}