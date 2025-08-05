#include <iostream>

int main()
{
	int n;
	int arr[6];

	std::cin >> n;

	for (int i = 0; i < 6; i++)
	{
		arr[i] = n;
		n++;
	}
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}