#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			std::cout << j << " ";
		}
	}
	return 0;
}