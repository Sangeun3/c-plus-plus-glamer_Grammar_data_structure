#include<iostream>
using namespace std;

int main()
{
	// 연산자 종류

	/*
	사칙연산자: +, -, *, /, %(나머지 연산자)
	관계연산자: 값 대 값을 연산하여 참/거짓으로 결과를 반환한다.
				>, >=, <, <=, ==, !=
	*/

	cout << "10 < 20 = " << (10 < 20) << endl;
	cout << "10 <= 20 = " << (10 <= 20) << endl;
	cout << "10 > 20 = " << (10 > 20) << endl;
	cout << "10 >= 20 = " << (10 >= 20) << endl;
	cout << "10 == 20 = " << (10 == 20) << endl;
	cout << "10 != 20 = " << (10 != 20) << endl;

	/*논리연산자 : 참/거짓 대 참/거짓 연산하여 참/거짓으로 결과를 반환한다.
	AND(&&), OR(||), NOT(!)*/

	int Number;
	cout << "숫자를 입력하세요 : ";
	cin >> Number;

	cout << "10~20 = " << (10 <= Number && Number <= 20) << endl;


	return 0;
}