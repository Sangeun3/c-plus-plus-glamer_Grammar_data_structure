#include <iostream>
#include <algorithm>


int monny(int* dice)
{
	std::sort(dice, dice + 4);
	if (dice[0] == dice[3])
	{
		return 50000 + dice[0] * 5000;
	}
	else if (dice[0] == dice[2] || dice[1] == dice[3])
	{
		return 10000 + dice[1] * 1000;
	}
	else if (dice[0] == dice[1] && dice[2] == dice[3])
	{
		return 2000 + dice[0] * 500 + dice[2] * 500;
	}
	else if (dice[0] == dice[1] || dice[1] == dice[2]) 
	{
		return 1000 + dice[1] * 100;
	}
	else if (dice[2] == dice[3])
	{
		return 1000 + dice[2] * 100;
	}
	return dice[3] * 100;
}
int main()
{
	int people_N;
	int dice[4];
	int max_price = 0;
	int price = 0;

	std::cin >> people_N;

	for (int i = 0; i < people_N; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cin >> dice[j];	
		}

		price = monny(dice);
		if (max_price < price)
		{
			max_price = price;
		}
	}
	std::cout << max_price;
}