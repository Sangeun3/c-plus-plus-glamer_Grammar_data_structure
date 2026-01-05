#include <iostream>

int main()
{
	char* chars = new char[3];

	std::cin >> chars[0] >> chars[1] >> chars[2];
	if ('A' <= chars[0] && chars[0] <= 'Z' &&
		'A' <= chars[1] && chars[1] <= 'Z' &&
		'A' <= chars[2] && chars[2] <= 'Z')
	{
		std::cout << "모두대문자";
	}
	else
	{
		std::cout << "소문자있음";
	}

	delete[] chars;
	return 0;
}