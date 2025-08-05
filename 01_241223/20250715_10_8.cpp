#include <iostream>


int main() {
	int arr[4][4];
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			std::cin >> arr[y][x];
		}
	}
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++) {
			if (arr[y][x] % 2 == 1) {
				std::cout << "@";
			}
			else if (arr[y][x] == 0) {
				std::cout << "!";
			}
			else {
				std::cout << "#";
			}
			
		}
		std::cout << "\n";
	}
	return 0;
}