#include <iostream>

char arr[2][6] = { '4','5','7','1','3','2','D','F','Q','W','G','Z' };
int main() {
	char n;
	std::cin >> n;
	int ix;
	for (int x = 0; x < 6; x++)
	{
		if (arr[0][x] == n) {
			ix = x;
			break;
		}
	}

	std::cout << arr[1][ix];
}