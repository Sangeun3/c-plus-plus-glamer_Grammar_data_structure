#include <iostream>

int main()
{
	//if문의 다중 비교

	int x;
	std::cin >> x;

	// x>=3
	// x<=6
	if (x >= 3)
	{
		if (x <= 6)
		{

		}
	}

	if (x >= 3 && x <= 6)
	{
		std::cout << "참입니다.";
	}

	if (x >= 3 || x == 6)
	{
		std::cout << "참입니다.";
	}

	//뭐가 먼저 될지 모를 때는 괄호를 쓰자.
	if ((x <= 3 && x <= 6) || (x >= 7 && x <= 12))
	{
			std::cout << "참입니다.";
	}

	int max = 0;
	std::cin >> max;

	//for문 이해하기
	//초기값 ; 조건식 ; 증감식
	for (int i = 0; i < max; i++)
	{
		if (i == 5)
		{
			std::cout << "5번째\n";
		}
		std::cout << "안녕하세요\n";
	}

	return 0;
}