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
	//3���� �迭
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
	//������ 2���� �迭�� ���� ����. �������� �����Ƽ�
	int arrA[2][5];
	int arrB[2][5];
	run(0);

	return 0;
}