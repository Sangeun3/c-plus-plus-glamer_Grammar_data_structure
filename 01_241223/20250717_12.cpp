#include <iostream>

int main()
{
	//문자와 문자열
	//문자는 한 글자를 #뜻한다. 'A'
	//문자열은 한 글자 이상을 뜻한다.

	//문자열은 여러 글자로 구성되어 있기 때ㅜㅁ문에
	//char가 아닌 char 배열로 저장이 가능한 점

	char str[5] = "ABCD"; // A|B|C|D|\0 맨 뒤는 널
	//"ABCDE"는 널 문자까지 6개 배열로 만들어야 한다

	char chs[3] = { 'A','B','C' }; //널문자 포함 안됨


	//문자열의 길이 구하기
	int len = 0;
	for (int i = 0; i < 5; i++) {
		if (str[i] == '\0') {
			len = i;
		}
	}
	std::cout << "문자열의 길이 " << len;
	std::cout << str << std::endl;
	std::cout << &str[0]; // str과 같은 의미

	std::cout << chs;//널이 없어서 널이 나올 때까지
	//쓰레기값이 화면에 나옴



	int arr[3][3] = {};
	int a = 1;
	//2중 for문의 활용
	for (int y = 0; y < 3; y++) {
		for (int x = 2 - y; x <= 2; x++) {
			arr[y][x] = a;
			a++;
		}
	}

	return 0;
}