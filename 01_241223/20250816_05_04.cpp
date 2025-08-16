#include <iostream>

void program(int n, int x)
{
	if (n == x)
	{
		return;
	}
	program(n + 2, x);
	std::cout << n << " ";
}
int main()
{
	int n;
	std::cin >> n;
	int x = n + 8;
	program(n, x);

}