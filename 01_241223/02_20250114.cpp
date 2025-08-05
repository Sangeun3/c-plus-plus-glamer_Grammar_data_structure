#include <iostream>
using namespace std;

int main() {
	/*
	사칙연산자 : +, -, *, /, %(나머지 연산자)
	나머지가 0이면 짝수

	관계연산자 : 값 대 값을 연산하여 참/거짓으로 결과를 반환한다.
	>, >=, <, <=, ==, !

	논리연산자 : 참/거짓 대 참/거짓 연산하여 참/거짓으로 결과를 반환한다.
	AND(&&), OR(||)(Shift + \), NOT(!)
	A   B   AND OR
	0	0	0	0
	1	0	0	1
	0	1	0	1
	1	1	1	1

	A	NOT
	0	1
	1	0
	*/
	int Number;

	cout << "10 < 20 = " << (10 < 20) << endl;
	cout << "10 <= 20 = " << (10 <= 20) << endl;
	cout << "10 > 20 = " << (10 > 20) << endl;
	cout << "10 >= 20 = " << (10 >= 20) << endl;
	cout << "10 == 20 = " << (10 == 20) << endl;
	cout << "10 != 20 = " << (10 != 20) << endl;

	cout << "숫자를 입력하세요 : "; //왼쪽부터 차례대로
	cin >> Number;

	cout << "10 ~ 20 = ? " << (10 <= Number && Number <= 20) << endl;

}


