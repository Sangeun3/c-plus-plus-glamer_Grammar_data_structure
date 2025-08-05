#include <iostream>

int arr[3][4] = { {4,3,1,1},
	{3,1,2,1,},
	{0,0,1,2,} };

int main()
{
	int n;
	int sum = 0;
	std::cin >> n;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			if (n == arr[y][x]) {
				sum++;
			}
		}
	}

	std::cout << sum << "개 존재합니다";

	return 0;
}