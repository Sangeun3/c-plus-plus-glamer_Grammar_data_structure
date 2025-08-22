#include <iostream>

void func(int zero, int level, int branch)
{
	if (zero == level)
	{
		return;
	}

	for (int i = 0; i < branch; i++)
	{
		func(zero + 1, level, branch);
	}
	
}
int main()
{
	int level, branch;
	std::cin >> level;
	std::cin >> branch;
	int zero = 0;
	func(zero, level, branch);
}