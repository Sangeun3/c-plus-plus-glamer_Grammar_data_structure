#include <iostream>

char arr[3][3] = { {'D','A','S'},{'Q','W','V'},{'R','T','Y'} };

void Find(int* y1, int* x1, int* y2, int* x2, char* a, char* b) {
	*a = arr[*y1][*x1];
	*b = arr[*y2][*x2];
}
int main() {
	int y1, x1, y2, x2;
	char a, b;

	std::cin >> y1 >> x1;
	std::cin >> y2 >> x2;

	Find(&y1, &x1, &y2, &x2, &a, &b);

	std::cout << a << " " << b;


}