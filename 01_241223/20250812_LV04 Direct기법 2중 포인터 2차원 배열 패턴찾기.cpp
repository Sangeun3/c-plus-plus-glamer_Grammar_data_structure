#include <iostream>

// ����ã�� -> 2�� FOR������ ����ã��

int map[5][5] =
{
	1,3,5,1,5,
	3,7,9,5,8,
	4,5,3,5,7,
	2,9,7,9,9,
	1,6,2,3,8,
};

int patten[2][2] =
{
	3,5,
	7,9,
};

int isPatten(int dy, int dx)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (map[dy + i][dx + j] != patten[i][j])
			{
				return 0;
			}
		}
	}

	return 1;
}


int main()
{
	// ������ ǥ���ϱ� ���� �ڵ� ���

	int arr[3][3] = { 1, 2, 3,
					  4, 5, 6,
					  7, 8, 9 };

	int direct[4][2] = { -1, 0,
				  		  1, 0,
						  0, -1,
						  0, 1, };

	int y = 1;
	int x = 1;
	int sum = 0;

	for (size_t i = 0; i < 4; i++)
	{
		int NewY = y + direct[i][0];
		int NewX = x + direct[i][1];

		if (NewX >= 0 && NewX <= 2 && NewY >= 0 && NewY <= 2)
		{
			sum += arr[NewY][NewX];
		}
		int a = 0;
	}


	// 2�� ������ ����

	// ������ ���� = �ּҰ��� �����ϴ� ���� Ÿ�� (��) -> 2�� ������ -> *() -> *(a + 1) -> a[1]
	// int ���� = ������ ���ڸ� �����ϴ� ���� Ÿ��
	// char ���� = ������ ���ڸ� �����ϴ� ���� Ÿ��

	int a = 100;
	int* p = &a;
	int** pp = &p;

	*(*pp) = a;

	// ����ü, Ŭ������ �̿��� �迭

	struct ABC
	{
		int a;
		int b;
	};

	ABC ttt[3];
	ttt[0].a = 100;
	
	
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (isPatten(y, x))
			{
				std::cout << y << x << std::endl;
			}

		}
	}

}