#include <iostream>

class Tast
{
public:
	int a;
	int b;

	//객체를 생성할때 자동 호출
	//생성자
	//Tast()
	//{
	//	a = 0;
	//	b = 0;
	//}


	Tast() : a(0), b(0) 
	{
		//만들자마자 생성
	}

	Tast(int num1, int num2) :
		a(num1), b(num2)
	{

	}
	//소멸자
	//메모리에서 해제될때 호출 함수
	~Tast()
	{
		a = 0;
		b = 0;
	}
};

int main()
{
	Tast test; 
	Tast test2;
	Tast test3(4, 3);
	return 0;
}