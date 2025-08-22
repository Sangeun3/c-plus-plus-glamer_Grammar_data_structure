#include <iostream>

void func(int level, int zero)
{
	std::cout << zero;
	if (zero == level)
	{
		return;
	}
	func(level, zero + 1);
	func(level, zero + 1);
}


int main()
{
	int zero = 0;
	int level;
	std::cin >> level;
	func(level, zero);
	
}