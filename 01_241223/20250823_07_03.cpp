#include <iostream>
//경로 이름은 BGTK 
char path[3] = {};
char BGTK[5] = "BGTK";

void func(int level, int n)
{
	if (n == level)
	{
		std::cout << path << std::endl;
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		path[n] = BGTK[i];
		func(level, n + 1);
		path[n] = 0;
	}
}


int main()
{
	int level;
	std::cin >> level;
	func(level, 0);
}