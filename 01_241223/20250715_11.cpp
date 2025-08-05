#include <iostream>

int test(int a, int b);
void Print(int count);


int main()
{
	//함수 값 주고 받기
	//call by value
	int a =100, b = 200;

	int ret = test(a, b);

	int count = 10;

	Print(count);
	//포인터의 이해
	
	//포인터 변수란 메모리의 주소값을 저장하는 변수
	//숫자 저장은 int
	//글자 저장은 char
	//주소 저장은 포인터형 변수 활용
	int arr[3];

	int* p = &a; //주소는 4바이트
	void* pArr = &arr[0];

	*p = 200;
	//함수는 한 개의 값만 리턴 가능
	//전달인자로 포인터를 활용하면 여러 개의
	//값을 리턴해줄 수 있다.

	
	//flag 방식
	//플래그 

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
		std::cout << "존재";
	}
	else
	{
		std::cout << "존재 x";
	}

	//MAX
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (arr3[i] > max)
		{
			max = arr3[i];
		}
	}
	
	//다른 배열 값 옮기기
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