#include <iostream>

void dfs(int level)
{
	if (level == 2)
	{
		return;
	}
	dfs(level + 1);
	dfs(level + 1);
	std::cout << level;  //branch�� 2���� Ʈ��
}

int main()
{
#pragma region csting
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
#pragma endregion	 
	// ���ȣ�� ����
	dfs(0);

	// ��� ȣ�� �ʺ�


	return 0;
}