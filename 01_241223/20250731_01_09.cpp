#include <iostream>
void addadd(int* arr) {
	for (int i = 0; i < 5; i++)
	{
		arr[i + 1] = arr[i] + arr[i + 1];
	}
}
int main() {
	int arr[6];
	for (int i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}

	
	addadd(arr);
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}