#include <iostream>

int main() 
{
	
	int n;
	std::cin >> n;

	if (n > 5) {
		for (int i = 1; i <= 10; i++)
		{
			std::cout << i << std::endl;
		}
	}
	else
	{
		for (int i = 5; i >= 1; i--)
		{
			std::cout << i << std::endl;
		}
	}
}