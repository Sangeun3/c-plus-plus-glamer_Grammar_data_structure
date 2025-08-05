#include <iostream>

int main()
{
	int arr[6];
	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
	}

	int n;
	std::cin >> n;

	for (int i = 3; i < 6; i++) {
		arr[i] = n;
		n++;
	}
}