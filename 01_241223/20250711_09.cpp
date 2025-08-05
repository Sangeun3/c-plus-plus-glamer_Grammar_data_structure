#include <iostream>



void test(int n) {
	std::cout << "test";
	std::cout << "test";
	std::cout << "test";

	n++;
	std::cout << n;
}
int main()
{
	//SWAP

	//두 개의 변수를 서로 교환하는 작업

	int a = 10;
	int b = 5;

	int temp = a;
	a = b;
	b = temp;

	//구조체

	//변수를 선언할 때
	//타입을 저장했었죠?

	//구조체는 여러가지 변수 타입들을 묶어서
	//하나의 새로운 타입을 정의하는 문법

	struct ABC
	{
		int num;
		char ch; 
	};

	ABC abc;
	abc.num = 100;
	abc.ch = 'A';

	ABC abc2;
	abc2.num = 100;
	abc2.ch = 'A';

	ABC abc3;
	abc3.num = 100;
	abc3.ch = 'A';

	//변수들을 묶은 형태로 그룹화할 때 사용
	//특정상황에서 소스코드를 간결하게 표현
	//자료구조 알고리즘에서 많이 사용한다.
	
	 
	//Counting 응용 <짝수 존재 유무>
	int arr[5] = { 1,2,3,4,5 };

	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			count++;
		}
	}

	if (count > 0)
	{
		std::cout << "짝수가 존재한다.";
	}

	else
	{
		std::cout << "짝수가 존재하지 않는다";
	}
	int n=5;
	//if 안에 함수 호출 여러개 두기
	if (true)
	{
		test(n);
	}
	else
	{
		test(n);
	}

	//call by value



}