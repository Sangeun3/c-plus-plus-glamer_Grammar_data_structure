#include <iostream>

int main() {
	int arr[5] = { 3,9,12,15,55 };
	int a,b,c;
	std::cin >> a >> b >> c;
	int sum = a + b + c;

	if (sum > 10) {
		std::cout << arr[4];
	}
	
	else {
		std::cout << arr[0];
	}
}