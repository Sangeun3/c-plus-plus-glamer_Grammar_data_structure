#include <iostream>

int main() {
	int alen;
	int blen;
	char arr[2][9];
	int counting = 0;

	for (int y = 0; y < 2; y++) {
		std::cin >> arr[y];
		
	}

	for (int x = 0; x < 9; x++) {
			if (arr[0][x] == '\0') {
				alen = x;
				break;
			}
	}
	for (int x = 0; x < 9; x++) {
		if (arr[1][x] == '\0') {
			blen = x;
			break;
		}
	}

	if (alen < blen) {
		alen = blen;
	}

		for (int x = 0; x < alen; x++)
		{
			if (arr[0][x] != arr[1][x])
			{
				counting++;
			}
		}

		std::cout << counting;

	return 0;
}