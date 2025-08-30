#include <iostream>
//1등, 2등, 3등 선물주기 
char path[3] = "";

void func(int level, char* name)
{
	if (level >= 2 && path[level - 2] == path[level - 1])
	{
		return;
	}
	if (level >= 2 && path[level - 3] == path[level - 1])
	{
		return;
	}
	if (level == 3)
	{
		std::cout << path << std::endl;
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
	char name[4];
	for (int i = 0; i < 4; i++)
	{
		std::cin >> name[i];
	}
	func(0, name);
}