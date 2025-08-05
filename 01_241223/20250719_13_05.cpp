#include <iostream>
int arr[2][6] = { {2,5,6,1,3,1}, {2,1,3,6,3,6} };
void input(int* a, int* b, int* c) {
	std::cin >> *a >> *b >> *c;

}

void Process(int a, int b, int c, int* aCount, int* bCount, int* cCount) {
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 6; x++) {
			if (a == arr[y][x]) {
				(*aCount)++;
			}
			else if (b == arr[y][x]) {
				(*bCount)++;
			}
			else if (c == arr[y][x]) {
				(*cCount)++;
			}
		}
	}
}

void output(int a, int b, int c, int aCount, int bCount, int cCount) {
	std::cout << a << "=" << aCount << "\n";
	std::cout << b << "=" << bCount << "\n";
	std::cout << c << "=" << cCount;
}

int main() {
	int a, b, c;
	int aC = 0;
	int bC = 0;
	int cC = 0;

	input(&a, &b, &c);
	Process(a, b, c, &aC, &bC, &cC);
	output(a, b, c, aC, bC, cC);
}