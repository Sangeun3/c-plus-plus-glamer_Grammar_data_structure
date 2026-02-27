#include <iostream>

int main()
{
	int arr[5] = { 8,5,6,2,4 };

	for (int i = 1; i < 5; i++)
	{
		int j = i;
		while (j != 0) {
			if (arr[j - 1] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
			j--;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i];
	}
}