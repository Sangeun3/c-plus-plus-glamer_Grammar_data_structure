#include <iostream>

int g = 200;

void BBQ()
{
	std::cout << "BBQ";
	std::cout << "BBQ";
	std::cout << "BBQ";
	g = 300;

	//n= 200;/
	// 지역 변수라서 외부함수에서는 사용할 수 없다.
}
int main()
{
	//변수 t 활용하기

	//3부터 -> 7까지의 값을 
	int arr[5] = {};
	int num = 27;

	for (int i = 0; i < 5; i++) {
		arr[i] = num;
		num += 2;
	}

	//클라이언트 가독성 좋은 코드

	//char 변수의 체험
	int n = 100;
	char ch = 'A'; //작은 따옴표 안 넣으면 코드로 인식한다

	char str[4] = {'A', 'B', 'C', 'D'};

	//함수

	// 소스코드의 묶음 또한 함수라고 한다.
	BBQ();
	BBQ();


	//지역 변수 전역 변수

}