#include <iostream>

int main()
{
	int a[7];

	for (int i = 0; i < 7; i++)
	{
		std::cin >> a[i];
	}

	for (int i = 3; i < 7; i++)
	{
		std::cout << a[i] << " ";
	}
	}