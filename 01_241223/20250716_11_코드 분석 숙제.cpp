#include <iostream>

// 얕은 복사
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}


// 깊은 복사
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

	//swap(num1, num2); 얕은 복사 메모리에 num1 num2가 따로생김
	swap(&num1, &num2);// 깊은 복사 main에서 생성된 값이 변경

	return 0;
}