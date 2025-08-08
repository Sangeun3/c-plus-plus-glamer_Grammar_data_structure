#include <iostream>

void PrintEmpty(int(* c)[3], int y, int x)
{
	if (c[y][x] == 0)
	{
		std::cout << "(" << y << "," << x << ")";
	}
}

void SumArray(int a[3][3], int b[3][3], int c[3][3])
{
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++)
		{
			c[y][x] = a[y][x] + b[y][x];
			PrintEmpty(c, y, x);
		}
	}
}
int main()
{
	int a[3][3] = { 1 , 0 , 0,
					2 , 3 , 4,
					0 , 0 , 2};

	int b[3][3] = { 1 , 1 , 1, 
					0 , 2 , 3,
					0 , 0 , 3};
	int c[3][3] = {};
	SumArray(a, b, c);
	return 0;
}