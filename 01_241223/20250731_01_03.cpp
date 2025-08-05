#include <iostream>

void printA(char* arr, int n) {
	for(int i = 6; i > n; i--) {
		int temp = arr[i];
		arr[i] = arr[i - 1];
		arr[i - 1] = temp;
	}
	arr[n] = 'A';
	std::cout << arr;
}

int main() {

	char arr[7];
	int n;

	std::cin >> arr;
	std::cin >> n;

	printA(arr, n);
	
	
}