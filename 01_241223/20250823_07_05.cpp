#include <iostream>
//1 ~ n ���� ģ�� 4��ġ û�Ҵ�� ����
char day[5] = {};

void func(int level, int people)
{
	if (4 == level)
	{ 
		std::cout << day << std::endl;
		return;
	}

	for (int i = 0; i < people; i++)
	{
		day[level] = (char)(i+49);
		func(level + 1, people);
		day[level] = '\0';
	}
}

int main()
{
	int people;
	std::cin >> people;
	func(0, people);
}