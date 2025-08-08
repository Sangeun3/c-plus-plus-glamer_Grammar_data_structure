#include <iostream>

int findChAddxy(char* arr, char ch, int y1, int x1)
{
	for (size_t y = 0; y < 3; y++)
	{
		for (size_t x = 0; x < 2; x++)
		{
			if (arr[y][x] == ch)
			{
				std::cout << arr[y + y1][x + x1];
			}
		}
	}
}
int main()
{
	char arr[3][2] = { 'T','B',
					'C','D',
					'a','E' };
	char ch;
	int y1, x1;
	std::cin >> ch >> y1 >> x1;
	findChAddxy(arr,ch,y1,x1)
	
	return 0;
}