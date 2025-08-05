#include <iostream>

int main()
{
	int arr[5];
	int n = 0;
	for (int i = 0; i < 5; i++) {
		std::cin >> arr[i];
		if (3 <= arr[i] && arr[i] <= 7) {
			n++;
		}
	}
	std::cout << n;
	return 0;
}