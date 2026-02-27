#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
struct downlodeApp
{
	std::string name;
	int downCount;
};

bool compare(const downlodeApp& a, const downlodeApp& b)
{
	return a.downCount < b.downCount;
}

bool compare2(const downlodeApp& a, const downlodeApp& b)
{
	return a.downCount > b.downCount;
}

struct bakery {
	std::string bread;
	int breadPrice;
	char breadGrade;
};

int main()
{
	std::vector<bakery> DAZY = { {"Croissants", 1500, 'A'}, {"Twisted Buns", 1000, 'C'}, {"Coffee Beans", 2000, 'S'}, {"Sandwich Bread", 2500, 'S'} };
	std::sort(DAZY.begin(), DAZY.end(),
		[](const bakery& a, const bakery& b)
		{
			return a.breadPrice < b.breadPrice;
		});

	//벡터 숫자 오름차순 내림차순
	std::vector<int> hight = { 150,120,130,140,160,170 };
	std::vector<char> alpha = { 'D','F','G', 'i','A','k', 'B', 'C' };
	std::sort(hight.begin(), hight.end(), std::less<int>());
	std::sort(hight.begin(), hight.end(), std::greater<int>());

	std::sort(alpha.begin(), alpha.end(), std::less<char>());
	std::sort(alpha.begin(), alpha.end(), std::greater<char>());



	//벡터 구조체 오름차순 내림차순
	

	std::vector<downlodeApp> myApp = { {"apple", 20000}, {"health", 30000}, {"lol", 100} };
	std::sort(myApp.begin(), myApp.end(), compare);
	std::sort(myApp.begin(), myApp.end(), compare2);


	//벡터 구조체 람다식 오름차순 내림차순

	return 0;
}