#include <iostream>

int main()
{
	// cstring
	char nameA[10] = "ABC";
	char nameB[10] = "ABC";
	char nameC[10] = "";

	/*
	���� ���ڿ� �񱳹��int flag = 0;
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

	// ���ڿ� ���ϴ� �Լ�
	// ������ 0�� ��ȯ, �ٸ��� 0�� �ƴѰ��� ��ȯ

	if (strcmp(nameA, nameB) == 0)
	{
		int a = 0;
	}
	
	int len = strlen(nameA);

	strcpy_s(nameC, nameA);
	// ���ȣ�� ����


	// ��� ȣ�� �ʺ�


	return 0;
}