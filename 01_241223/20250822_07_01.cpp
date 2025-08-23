#include <iostream>
//경로를 출력하자 
char path[4] = "";
char ABC[3] = { 'A','B','C' };
void func1(int level)
{
	if (level == 2)
	{
		std::cout << path << std::endl;
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		path[level] = ABC[i];
		func1(level + 1);
		path[level] = 0;
	}
}

int main()
{
	func1(0);
}