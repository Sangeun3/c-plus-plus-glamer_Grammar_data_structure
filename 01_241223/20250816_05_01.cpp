#include <iostream>

void test(int x, int limit, int n)
{
	if (n >= 3)
	{
		return;
	}

	std::cout << "enter " << n << std::endl;
	test(x, limit, n + 1);
	std::cout << "exit " << n << std::endl;
}

int main()
{
	int x = 0;
	int limit = 3;

	test(x, limit, 0);
}