#include <iostream>

int main()
{
	int arr[11] = { 3,4,1,5,8,1,7,7,3,6,9 };
	int n;
	std::cin >> n;
	for (int i = 0; i < 11; i += n)
	{
		std::cout << arr[i] << " ";
	}
}