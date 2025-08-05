#include <iostream>

int main()
{
	int n;
	for (int i = 0; i < 4; i++) {
		std::cin >> n;
		if (n < 20)
		{
			std::cout << "더 큰 수를 입력하세요";
		}
		else if (n > 20)
		{
			std::cout << "더 작은 수를 입력하세요";
		}
		else {
			std::cout << "정답입니다.";
		}
	}
	return 0;
}