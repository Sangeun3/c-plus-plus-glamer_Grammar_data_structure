#include <iostream>

int main()
{
	char a;
	std::cin >> a;
	if (a >= 'A' && a <= 'Z') { std::cout << "대문자입니다"; }
	else if ('a' <= a && a <= 'z')
	{
		std::cout << "소문자입니다";
	}
 return 0;
}