#include <iostream>

int main()
{
	//코딩 훈련할 때는 멘땅에 헤딩하는 기분으로
	//영타와 구현 능력을 키우기 위해서
	//메인함수만 띄우고 백지에서 시작해야 한다.

	std::cout << "Hello world!";

	//입력 받기 위해서는 변수를 만들어 놓아야 한다.
	//console input 약자
	int a=3;
	int b=3;

	//std::cin >> a;
	//std::cout << a;

	//std::cin >> a >> b;
	//std::cout << a << b;

	a = a + 5;
	a += 5; // -= *= /= 사칙연산도 사용가능하다.
	a++; // 1을 더해줄 수 있따.

	b = a++; //줄이 끝난 다음에 증가한다. 후위연산자
	b = ++a; //전위 연산자. 


	//분기문 if문 만약 조건이 성립하는 경우에만 소스코드 수행

	a = 10;
	if(a < 5) {
		std::cout << "참";
		if (a + b == 6) {

		}
	}
	else {
		std::cout << "거짓";
	}





	return 0;
}