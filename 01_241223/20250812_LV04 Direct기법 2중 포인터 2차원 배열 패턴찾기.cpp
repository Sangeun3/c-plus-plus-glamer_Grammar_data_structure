#include <iostream>

// 패턴찾기 -> 2중 FOR문에서 패턴찾기

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
	// 방향을 표현하기 위한 코딩 방법

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


	// 2중 포인터 변수

	// 포인터 변수 = 주소값을 저장하는 변수 타입 (끝) -> 2중 포인터 -> *() -> *(a + 1) -> a[1]
	// int 변수 = 정수형 숫자를 저장하는 변수 타입
	// char 변수 = 문자형 글자를 저장하는 변수 타입

	int a = 100;
	int* p = &a;
	int** pp = &p;

	*(*pp) = a;

	// 구조체, 클래스를 이용한 배열

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