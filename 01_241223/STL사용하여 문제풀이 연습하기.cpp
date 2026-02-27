#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

struct Player
{
	int score;
	std::string name;
};

bool compare(const Player& a, const Player& b)
{
	return a.score < b.score;
}

bool compare2(const Player& a, const Player& b)
{
	return a.name < b.name;
}
int main()
{
	char str[256] = "ABCDEF";
	std::string str2 = "ABCDEF";

	std::vector<int> vec = { 5,6,7,83,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9 };
	std::sort(vec.begin(), vec.end(), std::less<int>());
	std::sort(vec.begin(), vec.end(), std::greater<int>());

	std::vector<Player> players = {  {90, "B"}, {80, "C"}, {60, "E"},  {100,"A"}, {70, "D"}};
	std::sort(players.begin(), players.end(), compare);
	std::sort(players.begin(), players.end(), compare2);

	std::sort(players.begin(), players.end(),
		[](const Player& a, const Player& b)
		{
			return a.score < b.score;
		}
	);




	std::vector<Player>::iterator iter =
		std::find_if(players.begin(), players.end(),
			[](const Player& a)
			{
				return a.score == 100;
			});
	std::vector<int>::iterator iter2 = std::max_element(vec.begin(), vec.end());
	*iter2 = 100; //83을 100으로 변경 가능


	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	std::sort(&arr[0], &arr[10], std::greater<int>());


	return 0; 
}