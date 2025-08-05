#include <iostream>

int main() {
	int arr[6] = { 3,4,2,5,7,9 };
	int a, b;
	std::cin >> a >> b;

	int t;
	
	t = arr[a];
	arr[a] = arr[b];
	arr[b] = t;

	for (int i =0; i < 6; i++) {
		std::cout << arr[i] << " ";
	}

	return 0;
}