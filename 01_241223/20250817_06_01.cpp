#include <iostream>
void BBQ(int level)
{
	if (level == 2)
	{
		return;
	}
	BBQ(level + 1);
	BBQ(level + 1);
	BBQ(level + 1);
	std::cout << "BBQ" << std::endl;
}
int main()
{
	BBQ(0);
	return 0;
}