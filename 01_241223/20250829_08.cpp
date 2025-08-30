#include <iostream>

char path[5] = "";
void test(int level)
{
	if (level >= 2 && path[level - 2] == path[level - 1])
		return;
	if (level == 3)
	{
		std::cout << path << std::endl;
		return;
	}

	for (size_t i = 0; i < 3; i++)
	{
		if (level == 0 && ('A' + i) == 'A')
		{
			continue;
		}
		path[level] = 'A' + i;
		test(level + 1);
		path[level] = 0;
	}
}

int main()
{
	test(0);
	return 0;
}