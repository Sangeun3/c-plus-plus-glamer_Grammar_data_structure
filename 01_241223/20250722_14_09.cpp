#include <iostream>

int main() {
	char arr[4][6];
	bool A = false;
	bool B = false;

	for (int y = 0; y < 4; y++)
	{
		std::cin >> arr[y];
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			if (arr[y][x] == 'A') {
				A = true;
			}
			else if (arr[y][x] == 'B') {
				B = true;
			}
		}
	}

	if (A == true && B == true) {
		std::cout << "대발견";
	}
	else if ((A && !B) || (!A && B)){
		std::cout << "중발견";
	}
	else {
		std::cout << "미발견";
	}

	return 0;
}