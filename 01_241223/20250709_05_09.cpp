#include <iostream>

char arr[3] = { 'A', 'B', 'C' };

void KFC()
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << arr[i];
	}
	std::cout << std::endl;
}
int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		KFC();
	}
}