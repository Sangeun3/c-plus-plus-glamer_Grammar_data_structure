#include <iostream>

int main()
{
	//else if ������
	int input = 3;
	if (input == 3)
	{

	}
	else if (input == 4)
	{

	}
	else if (input == 5)
	{

	}
	else
	{

	}
	int a = 3;
	int b = 4;
	int c = 5;

	if (a >= b && a >= 3)
	{
		//a�� �ִ��� ����
	}
	else if (b >= a && b >= c)
	{
		//b�� �ִ��� ����
	}
	else
	{
		//c�� �ִ��� ����
	}


	//% ������ ������
	int etc = 10 % 3;

	if (etc % 2 == 0) {
		//¦��
	}
	else
	{
		//Ȧ��
	}

	// counting
	int arr[5] = { 1,2,3,4,5 };
	int count = 0; //¦���� ��ΰ�

	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0)
		{
			count++;
		}
	}
	//ctrl + F10.. f9 +f5

	//2�����迭�� ����

	int arr1[5] = {};
	int arr2D[3][5] = {0,0,0,0,0,
					   0,0,0,0,0,
					   0,0,0,0,0 };
	int num = 0;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			arr2D[y][x] = num;
			num++;
		}
	}

	//2���� �迭 + 2�� for��
}