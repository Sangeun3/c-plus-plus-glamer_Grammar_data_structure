#include <iostream>
#include <algorithm>

//최댓값, 같은 숫자 => 정렬 이용

int resultPrice(int a, int b, int c)
{ 
	if (a == c)
	{
		return 10000 + a * 1000;
	}
	else if (a == b || b == c)
	{
		return 1000 + b * 100;
	}
	return c * 100;
}


int main()
{
	int dice[3];
	std::cin >> dice[0] >> dice[1] >> dice[2];
	std::sort(dice, dice + 3);
	std::cout << resultPrice(dice[0], dice[1], dice[2]);
}