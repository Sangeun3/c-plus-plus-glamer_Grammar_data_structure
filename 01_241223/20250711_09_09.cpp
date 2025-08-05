#include <iostream>

char arr[2][3] = { 'F','E','W','D','C','A' };

void findCh(char a) {
	int counting = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (a == arr[i][j])
			{
				counting++;
			}
		}
	}

	if (counting > 0) {
		std::cout << "발견";
	}
	else {
		std::cout << "미발견";
	}
}
int main() {
	char n;
	std::cin >> n;

	findCh(n);

	return 0;
}