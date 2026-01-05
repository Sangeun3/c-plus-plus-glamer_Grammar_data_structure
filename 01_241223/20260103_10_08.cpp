#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cin >> str;

	int a = 10 * (int)(str[1]-'0') + (int)(str[3] - '0');
	std::cout << a + 5;
}