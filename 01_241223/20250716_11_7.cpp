#include <iostream>

int main() {
	int arr[7];
	for (int i = 0; i < 7; i++) {
		std::cin >> arr[i];
	}
	int MAX = -99999;
	int MIN = 99999;

	for (int i = 0; i < 7; i++)
	{
		if (MAX < arr[i]) {
			MAX = arr[i];
		}
		if (MIN > arr[i]) {
			MIN = arr[i];
		}
	}

	std::cout << "MAX:" << MAX <<std::endl;
	std::cout << "MIN:" << MIN;
	return 0;
}