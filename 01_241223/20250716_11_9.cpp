#include <iostream>

int main() {
	char arr[8];
	for (int i = 0; i < 8; i++) {
		std::cin >> arr[i];
	}

	char big[8];
	char small[8];
	int bigIndex = 0;
	int smallIndex = 0;
	for (int i = 0; i < 8; i++) {
		
		if ('A' <= arr[i] && arr[i] <= 'Z' ) {
			big[bigIndex] = arr[i];
			bigIndex++;
		}
		else {
			small[smallIndex] = arr[i];
			smallIndex++;
		}
	}
	std::cout << "big = ";
	for (int i = 0; i < bigIndex; i++) {
		std::cout << big[i];
	}
	std::cout << "small = ";
	for (int i = 0; i < smallIndex; i++)
	{
		std::cout << small[i];
	}

	return 0;
}