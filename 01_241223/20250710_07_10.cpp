#include <iostream>
char arr[4][4];

void output()
{
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			std::cout << arr[y][x];
		}
		std::cout << "\n";
	}
}
void input()
{
	char n;
	std::cin >> n;
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] = n;
		}
	}
	output();
}


int main()
{
	input(); 
	
	return 0;
}