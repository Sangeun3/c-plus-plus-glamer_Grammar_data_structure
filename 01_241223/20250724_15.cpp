#include <iostream>

int yaStrlen(char* arr) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] == '\0') {
			return i;
		}
	}
	return -1;
}


int main()
{
	// 세문장의 길이 구하기

	char vect[3][10] = { "Hello","World","First" };

	for (int i = 0; i < 3; i++)
	{
		int len = yaStrlen(vect[i]);
		int a = 0;
	}

	int arr[4][4] =
	{
		4,1,3,14,
		5,32,1,5,
		6,3,71,2,
		43,2,1,6,
	};

	for (int i = 0; i < 4; i++) {
		int max = 0;
		if (arr[0][i] > max) {
			max = arr[0][i];
		}
	}
	// 맨 윗줄의 max값 구하기

	for (int y = 0; y < 4; y++) 
	{
		int max = 0;
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] > max) 
			{
				max = arr[y][x];
			}
		}
		int a = 0;
	}
	

	 
	// 숫자 1개수 찾기
	// 다중 카운트
	int numArr[5] = { 1,23,4,5,7 };
	int numFind[4] = { 1,2,3,4 };

	for (int y = 0; y < 4; y++) 
	{
		int count = 0;
		for (int x = 0; x < 4; x++) 
		{
			if (numArr[x] == numFind[y]) 
			{
				count++;
			}
		}
		int a = 0;
	}


	// 두 숫자 배열이 같은지 확인

	int numArrB[5] = { 1,23,4,5,7 };
	int numArrA[5] = { 1,23,4,5,6 };

	int flag = 0;
	for (int i = 0; i < 5; i++)
	{
		if (numArrA[i] != numArrB[i])
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{
		// 같다
	}

	// 두 문자열이 같은지 확인

	char a[10] = "ABCD";
	char b[10] = "ABCD";
	if (a == b) {
		//&a[0] == &b[0] 주소를 비교하는 것이므로
		//같을 수가 없다.
	}
	int flag = 0;
	for (int i = 0; i < 5; i++)
	{
		if (a[i] != b[i])
		{
			flag = 1;
			break;
		}
	}

}