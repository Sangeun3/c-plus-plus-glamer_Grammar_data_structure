#include <iostream>

int main() 
{
	int arr[6];
	int n;
	std::cin >> n;

	
	for (int i = 0; i < 6 ; i++) {
		arr[i] = n;
		n--;
	}
	std::cout << arr[2];
}