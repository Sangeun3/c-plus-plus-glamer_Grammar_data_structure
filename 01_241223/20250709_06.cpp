#include <iostream>

int main()
{
	//ASCII 코드
	//컴퓨터는 글자를 저장할 수 없다
	//메모리는 숫자면 저장 가능
	//아스키 협회에서 아스키 표를 만듬

	//아스키코드는 128개의 문자로 구성되어 있다

	char ch = 'A';

	int ich = (int)ch;

	char zero = '0';
	zero = 0;

	for (char ch = 'A'; ch <= 'Z'; ch++) {
		std::cout << ch;
	}

	char ch2 = 'a';
	char Ach = ch2 - 32;

	if (ch <= 'A' && ch >= 'Z')
	{

	}
	else if (ch <= 'a' && ch <= 'z')
	{

	}
	//대소문자 바꾸기

	//2중 for문 시작하기

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << "Hello";
		}
	}

	return 0;
}