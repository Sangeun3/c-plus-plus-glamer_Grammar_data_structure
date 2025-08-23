#include <iostream>

char path[10] = "";
char name[10] = "JYH";

void run(int level)
{
	if (level == 5)
	{
		std::cout << path << std::endl;
		return;
	} 
	/*path[level] = 'A';
	run(level + 1);
	path[level] = 0;

	path[level] = 'B';
	run(level + 1);
	path[level] = 0;*/

	for (size_t i = 0; i < 3; i++)
	{
		path[level] = name[i];
		run(level + 1);
		path[level] = 0;
	}
}


int main()
{
	//3차원 배열
	int arr[2][2][5] = { };

	for (size_t z = 0; z < 2; z++)
	{
		for (size_t y = 0; y < 2; y++)
		{
			for (size_t x = 0; x < 5; x++)
			{
				arr[z][y][x] = 1;
			}
		}
	}
	//보통은 2차원 배열을 따로 쓴다. 가독성이 안좋아서
	int arrA[2][5];
	int arrB[2][5];
	run(0);

	return 0;
}