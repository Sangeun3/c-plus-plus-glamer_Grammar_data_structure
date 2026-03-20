#include <iostream>

struct Player
{
	int price = -1;
	std::string name = "name";
};

Player compare(Player player1, Player expensivePlayer, int p)
{
	for (int j = 0; j < p; j++)
	{
		std::cin >> player1.price;
		std::cin >> player1.name;
		if (player1.price > expensivePlayer.price)
		{
			expensivePlayer = player1;
		}
	}
	return expensivePlayer;
}

int main()
{
	int n, p;
	
	Player player1;
	Player expensivePlayer;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		expensivePlayer.name = "name";
		expensivePlayer.price = -1;

		std::cin >> p;
		expensivePlayer = compare(player1, expensivePlayer, p);
		std::cout << expensivePlayer.name << "\n";
	}

}