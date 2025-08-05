#include <iostream>

int a[2][3];
int sum = 0;

void input() {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			std::cin >> a[y][x];
		}
	}

}

void process() {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 3; x++) {
			sum += a[y][x];
		}
	}
}

void output() {
	std::cout << sum;
}
int main()
{
	input();
	process();
	output();

	return 0;
}