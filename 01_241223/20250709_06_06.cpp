#include <iostream>

int main()
{
	char a;
	std::cin >> a;
	if (a >= 'A' && a <= 'Z') { std::cout << "�빮���Դϴ�"; }
	else if ('a' <= a && a <= 'z')
	{
		std::cout << "�ҹ����Դϴ�";
	}
 return 0;
}