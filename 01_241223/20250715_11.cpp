#include <iostream>

int test(int a, int b);
void Print(int count);


int main()
{
	//�Լ� �� �ְ� �ޱ�
	//call by value
	int a =100, b = 200;

	int ret = test(a, b);

	int count = 10;

	Print(count);
	//�������� ����
	
	//������ ������ �޸��� �ּҰ��� �����ϴ� ����
	//���� ������ int
	//���� ������ char
	//�ּ� ������ �������� ���� Ȱ��
	int arr[3];

	int* p = &a; //�ּҴ� 4����Ʈ
	void* pArr = &arr[0];

	*p = 200;
	//�Լ��� �� ���� ���� ���� ����
	//�������ڷ� �����͸� Ȱ���ϸ� ���� ����
	//���� �������� �� �ִ�.

	
	//flag ���
	//�÷��� 

	int arr3[5] = { 1,2,3,2,5 };

	int flag = 0;

	for (int i = 0; i < 5; i++)
	{
		if (arr3[i] == 1)
		{
			flag = 1;
		}
	}

	if (flag == 1)
	{
		std::cout << "����";
	}
	else
	{
		std::cout << "���� x";
	}

	//MAX
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (arr3[i] > max)
		{
			max = arr3[i];
		}
	}
	
	//�ٸ� �迭 �� �ű��
	int temp[5] = {};
	for (int i = 0; i < 5; i++) {
		if (arr3[i] < 3)
		temp[i] = arr3[i];
	}
}

int test(int a, int b)
{
	return a + b;
}

void Print(int count) {
	for (int i = 0; i < count; i++) {
		std::cout << "hello\n";
	}
}