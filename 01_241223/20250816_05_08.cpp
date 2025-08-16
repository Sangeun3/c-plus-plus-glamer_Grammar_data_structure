#include <iostream>

void print(int n)
{
	if (n == 0)
	{
		return;
	}
	print(n / 2);

	std::cout << n << " ";
	
}
int main()
{
	int n;
	std::cin >> n;
	print(n);
}