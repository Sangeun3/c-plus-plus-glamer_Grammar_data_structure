#include <iostream>


void program(char* arr, int idx)
{
	int max = 5;
	if (idx == max)
	{
		std::cout << std::endl;
		return;
	}
	std::cout << arr[idx];
	program(arr, idx + 1);
	std::cout << arr[idx];
}



int main()
{
	char arr[5];
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	program(arr, 0);
}