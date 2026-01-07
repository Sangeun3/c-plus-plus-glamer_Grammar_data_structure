#include <iostream>

int main()
{
	int a[3][3] = { 1,2,3,
				   4,5,6,
				   7,8,9 };

	int k;
	std::cin >> k;
	int result[3][3];

	//for (int i = 0; i < k; i++)
	//{
	//	int temp;
	//	temp = a[0][0];
	//	a[0][0] = a[2][0];
	//	a[2][0] = a[2][2];
	//	a[2][2] = a[0][2];
	//	a[0][2] = temp;

	//	temp = a[1][0];
	//	a[1][0] = a[2][1];
	//	a[2][1] = a[1][2];
	//	a[1][2] = a[0][1];
	//	a[0][1] = temp;
	//}

	
	for (int h = 0; h < k; h++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				result[j][2 - i] = a[i][j];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				a[i][j] = result[i][j];
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << result[i][j] << " ";
		}
		std::cout << "\n";
	}
	/*
	0,0 -> 2,0 -> 2,2 -> 0,2
	1,0 -> 2,1 -> 1,2 -> 0,1
	2,0 -> 2,2 ->
	1,1 -> 1,1

	0,0 -> 0,2
	0,1 -> 1,2
	0.2 -> 2,2
	1,0 -> 0,1
	1,1 -> 1,1
	1,2 -> 2,1
	2,0 -> 0,0
	2,1 -> 1,0
	2,2 -> 2,0
	*/
}