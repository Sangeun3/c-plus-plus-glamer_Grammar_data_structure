#include <iostream>
int arr[5] = { 1,5,1,5,3 };

int isExist(int find)
{
	for (size_t x = 0; x < 5; x++)
	{
		if (arr[x] == find)
		{
			return 1;
		}
	}
}

void printResult(int num, int flag)
{
	if (flag == 1)
	{
		std::cout << num << "ã�Ҵ�";
	}
	else if (flag == 0)
	{
		std::cout << num << "�� ã�Ҵ�";
	}
}
int main()
{
	//��Ʈ �迭�� �̿��Ͽ� ����ŷ �غ���

	// 8 == (1000)
	int vect[6] = { 5,1,2,6,7,4 };
	int mask[6] = { 1,0,1,1,0,1 };
	int result[6] = {};
	for (size_t i = 0; i < 6; i++)
	{
		if (mask[i] == 1)
		{
			result[i] = vect[i];
		}
	}

	//���� flag �� ���� count

	int count = 0;
	
	int finds[3] = { 1,2,3 };

	for (size_t y = 0; y < 3; y++)
	{
		count = 0;
		
		std::cout << arr[y] << " : " << count;
	}
	bool flag = 0;
	for (size_t y = 0; y < 3; y++)
	{
		flag = isExist(finds[y]);
		printResult(finds[y], flag);
	}

	//BaseIndex, offsetIndex(baseIndex�κ��� �󸶸�ŭ ������ �ִ°�?
	
	//getSum() �Լ� �����

	int arrB[9] = { 4,3,5,1,7,5,6,8,2 };
	
}