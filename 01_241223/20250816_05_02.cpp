#include <iostream>

void countDown(int n)
{
	std::cout << n << " ";
	if (n == 0)
	{
		return;
	}
	countDown(n - 1);

	std::cout << n << " ";
}
int main()
{
	int n;
	std::cin >> n;
	countDown(n);
}