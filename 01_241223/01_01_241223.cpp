
// #include : 헤더파일을 여기에 포함시키는 기능이다.
#include <iostream>

using namespace std; //std namspace를 사용하겠다고 하면
void n(){
	cout << "std namespace 사용" << endl; //std 안 써도 됨
}

// 실행 과정: 컴파일 -> 빌드 -> 실행
// 컴파일 : 번역 작업이다.
// Ctrl + Shift + B 를 이용해서 컴파일 및 빌드를 할 수 있다.

// C++의 시작점은 main함수이다. main함수는 반드시 있어야 한다.
int main()
{
	// C++ 표준 기능의 대부분은 std 라는 namespace 안에 존재하고 있다.
	// 이름이 겹치는 것을 방지해주기 위해서이다.
	
	// cout : 콘솔창에 출력해주는 기능이다.
	// 뒤에 있는 ""(큰따옴표) 안에 있는 문자들을 화면에 출력해준다.
	// 문자 여러개를 사용할때는 반드시 ""안에 넣어주고 이런 것을 
	// 문자열이라고 한다.

	std::cout << "Test Output" << std::endl;//엔드라인은 엔터키 개행기능
	std::cout << "가나다라" << std::endl;

	// 오른쪽에서 왼쪽으로 읽는다.
	// endline부터 읽고 문자열에 적용 후, std::cout으로 출력한다.

	/*
	변수 : 변하는 수. 값이 바뀔 수 있다.
	용량의 최소단위 : bit
	1byte = 8 bit
	1kbyte(키로바이트) = 1024byte
	1mbyte(메가바이트) = 1024kbyte
	1gbyte(기가바이트) = 1024mbyte
	1tbyte(테라바이트) = 1024gbyte

	문자를 표현하는 방법 : ASCII 코드 표를 가지고 있다.
	false : 0 
	true : 0이 아닌 모든 수
	unsigned : 부호가 없다.

	종류	|	용량	|	데이터	|	 표현범위	 |	unsigned	|
	char	|	1byte	|	문자	|	 -128`~ 127	 |	0 ~ 255		|
	bool	|	1byte	|  참/거짓	|   true / false | true/false	|
	short	|	2byte	|	정수	| -32768 ~ 32767 | 0 ~ 65535	|
	int		|	4byte	|	정수	| 약 -22억 ~ 21억| 0 ~ 약 43억	|
	float	|	4byte	|	실수	|
	double	|	8byte	|	실수	|
	*/
	

	// = : 대입연산자. 오른쪽에 있는 값을 왼쪽으로 대입.
	int Number = 10;
	Number = 20;

	cout << Number << endl;

	bool bTest = true; 

	cout << bTest << endl;

	// 영문이나 숫자는 1byte를 차지한다. 하지만 한글이나 한문 등의
	// 문자들은 2byte이므로 char에 넣을 수 없다.
	char cTest = 't';

	cout << cTest << endl;

	float fNumber = 3.14f; //f를 붙이지 않으면 double로 된다.

	cout << fNumber << endl;

	double dNumber = 123.4567;

	cout << dNumber << endl;

	return 0;
}






