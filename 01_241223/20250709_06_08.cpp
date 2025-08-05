#include <iostream>

int main()
{
	char input;
	std::cin >> input;

	if ('0' <= input && input <= '9')
	{
		int t = input - '0' + 5;
		std::cout << t;
	}
 return 0;
}