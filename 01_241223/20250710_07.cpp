#include <iostream>

int main()
{
	//else if 연산자
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
		//a가 최대인 조건
	}
	else if (b >= a && b >= c)
	{
		//b가 최대인 조건
	}
	else
	{
		//c가 최대인 조건
	}


	//% 나머지 연산자
	int etc = 10 % 3;

	if (etc % 2 == 0) {
		//짝수
	}
	else
	{
		//홀수
	}

	// counting
	int arr[5] = { 1,2,3,4,5 };
	int count = 0; //짝수가 몇개인가

	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0)
		{
			count++;
		}
	}
	//ctrl + F10.. f9 +f5

	//2차원배열의 시작

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

	//2차원 배열 + 2중 for문
}