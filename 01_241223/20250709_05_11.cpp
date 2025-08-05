#include <iostream>

int arr[6];

void PrintAll()
{
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}
int main()
{
	int n;
	std::cin >> n;
	

	for (int i = 0; i < 6; i++)
	{
		arr[i] = n;
		n++;
	}

	PrintAll();
}