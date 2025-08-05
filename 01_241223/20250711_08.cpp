#include <iostream>

int main() {
	//break 문
	//가장 가까운 반복문을 빠져나오는 명령어
	int arr[5] = { 1,3,2,4,5 };
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == 2)
		{
			std::cout << "존재한다 2가";
			break;
		}
	}

	//while 문

	//for문처럼 반복 수행하는 문법
	//조건이 참 인 동안 소스코드 반복

	int a = 0;
	while (a < 2)
	{
		std::cout << "a";
		a++;
	}

	//for는 시작과 끝 구조가 명확
	//while문은 구조 단순, 조건을 적어주거나
	//변수를 이용해서 카운트해서 빠져나가야 함
	//특정조건이 명시되있지 않은 경우 많이 씀

	while (true)
	{
		int a = 0;
		std::cin >> a;
		if (a == 0) {
			break;
		}
	}
	
	return 0;
}