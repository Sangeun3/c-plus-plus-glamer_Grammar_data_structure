#include <iostream>

void func(int i, int level, int branch, int* counting)
{
	(*counting)++;
	if (level == i)
	{
		return;
	}
	for (int x = 0; x < branch; x++)
	{
		func(i + 1, level, branch, counting);
	}


}

int main()
{
	int branch;
	int level;
	int counting = 0;

	std::cin >> branch;
	std::cin >> level;

	func(0, level, branch, &counting);
	std::cout << counting;
}