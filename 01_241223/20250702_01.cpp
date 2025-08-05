// #include : 헤더파일을 여기에 포함시키는 기능이다.
#include <iostream> 
#include <windows.h>

using namespace std;

// 실행 과정 : 컴파일 -> 빌드 -> 실행
// 컴파일 : 번역작업이다.
// C++의 시작점은 main 함수이다. main함수는 반드시 있어야 한다.
int main()
{
	//네임 충돌을 피하기 위해 std 네임 스페이스로 감싸져있다.
	//cout은 콘솔 아웃, 콘솔창에 출력해주는 기능이다. 뒤에 있는
	//큰 따옴표("") 안에 있는 문자열(''는 문자)을 출력해준다.
	std::cout << "Test Output" << std::endl;
	//endl : 개행기능
	std::cout << std::endl;
	string loding = "로딩 중입니다.";
	cout << loding;

	Sleep(1000);

	cout << "COCO BRAND" << endl;



	return 0;
}