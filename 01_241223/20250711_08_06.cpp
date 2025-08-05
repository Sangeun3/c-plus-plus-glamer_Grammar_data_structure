#include <iostream>

int arr[3][4];

void input() {
	int n;
	std::cin >> n;

	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			arr[y][x] = n;
			n++;
		}
	}
}

void process() {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			arr[y][x]++;
		}
	}
}

void output() {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 4; x++) {
			std::cout << arr[y][x];
		}
		std::cout << "\n";
	}
}
int main()
{
	input();
	process();
	output();

	return 0;
}