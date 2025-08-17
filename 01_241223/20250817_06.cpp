#include <iostream>

int main()
{
	// cstring
	char nameA[10] = "ABC";
	char nameB[10] = "ABC";
	char nameC[10] = "";

	/*
	기존 문자열 비교방식int flag = 0;
	for (size_t i = 0; i < 10; i++)
	{
		if (nameA[i] != nameB[i])
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{

	}*/

	// 문자열 비교하는 함수
	// 같으면 0을 반환, 다르면 0이 아닌값을 반환

	if (strcmp(nameA, nameB) == 0)
	{
		int a = 0;
	}
	
	int len = strlen(nameA);

	strcpy_s(nameC, nameA);
	// 재귀호출 깊이


	// 재귀 호출 너비


	return 0;
}