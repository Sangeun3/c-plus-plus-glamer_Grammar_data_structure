#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	for (int i = n; i >= n - 3; i--)
	{
		std::cout << i << i << i << i <<std::endl;
	}
}