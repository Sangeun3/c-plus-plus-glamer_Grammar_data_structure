#include <iostream>
//같은문장 찾기
int main()
{
	char a[3][11];
	for (int i = 0; i < 3; i++)
	{
		std::cin >> a[i];
	}

	if (strcmp(a[0], a[1]) == 0 && strcmp(a[1], a[2]) == 0)
	{
		std::cout << "WOW";
	}
	else if (strcmp(a[0], a[1]) == 0 || strcmp(a[1], a[2]) == 0)
	{
		std::cout << "GOOD";
	}
	else
	{
		std::cout << "BAD";
	}
}