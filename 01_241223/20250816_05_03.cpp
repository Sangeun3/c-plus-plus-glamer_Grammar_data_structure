#include <iostream>

void backStep(int* arr, int idx)
{
	std::cout << arr[idx] << " ";
	if (idx == 5)
	{
		return;
	}
	backStep(arr, idx+1);
	std::cout << arr[idx] << " ";
}

int main()
{
	int arr[6];
	for (int i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}
	backStep(arr, 0);

}