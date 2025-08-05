#include <iostream>
char arr[3][3] = { {'A','D','F'},{'Q','W','E'},{'Z','X','C'} };

void Find(char c, char(* arr)[3], int* yi, int* xi) {
		
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++) {
			if (arr[y][x] == c) {
				*yi = y;
				*xi = x;
			}
		}
	}

}

int main() {
	char ch;
	std::cin >> ch;

	int yi;
	int xi;

	Find(ch, arr, &yi, &xi);
	std::cout << yi << "," << xi;
}