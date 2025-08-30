#include <iostream>
//´ÙÅ÷Ä£±¸ B¿Í T

char path[5] = "";
int n = 0;
void func(int level, char* name)
{
	if (level >= 2 && path[level - 2] == 'B' && path[level - 1] == 'T')
	{
		return;
	}

	if (level >= 2 && path[level - 2] == 'T' && path[level - 1] == 'B')
	{
		return;
	}
	if (level == 4)
	{
		std::cout << path << std::endl;
		n++;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		path[level] = name[i];
		func(level + 1, name);
		path[level] = 0;
	}
}


int main()
{
	char name[4] = "";
	for (int i = 0; i < 4; i++)
	{
		std::cin >> name[i];
	}
	func(0, name);
	std::cout << n;
}