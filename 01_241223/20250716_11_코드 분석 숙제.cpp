#include <iostream>

// ���� ����
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}


// ���� ����
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int num1 = 100;
	int num2 = 200;

	//swap(num1, num2); ���� ���� �޸𸮿� num1 num2�� ���λ���
	swap(&num1, &num2);// ���� ���� main���� ������ ���� ����

	return 0;
}