#include <iostream>

char day[5] = {};

void func(int level, int people)
{
	if (4 == level)
	{ 
		std::cout << day;
		return;
	}

	for (int i = 0; i < people; i++)
	{
		day[i] = (char)(i+'0');
		func(level + 1, people);
		day[i] = '\0';
	}
}

int main()
{
	int people;
	std::cin >> people;
	func(0, people);
}