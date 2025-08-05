#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[4][4] = {};
	
	if (n % 2 == 0) {
		int counting = 1;
		for (int i = 0; i < 4; i++) {
			arr[i][i] = counting;
			counting++;
		}

	}

	else {
		int counting = 4;
		for (int i = 0; i < 4; i++)
		{
			arr[3 - i][i] = counting;
			counting--;
		}
	}

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			std::cout << arr[y][x] << " ";
		}
		std::cout << std::endl;
	}

}