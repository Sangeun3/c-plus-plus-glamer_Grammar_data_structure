#include <iostream>

int main()
{
	char a;
	std::cin >> a;

	a -= char('a' - 'A');
	std::cout << a;
    return 0;
}