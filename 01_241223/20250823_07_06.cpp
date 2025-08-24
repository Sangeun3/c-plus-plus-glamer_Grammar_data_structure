#include <iostream>
#include <string>
//가장 긴문장, 짧은 문장은 어디에 
int main()
{
	int max = -1;
	int maxIdx = -1;
	int min = 9999;
	int minIdx = -1;
	std::string string[4];
	for (int i = 0; i < 4; i++)
	{
		std::cin >> string[i];
	}

	for (int i = 0; i < 4; i++)
	{
		int len = string[i].length();
		if (max < len)
		{
			max = len;
			maxIdx = i;
		}

		if (min > string[i].length())
		{
			min = string[i].length();
			minIdx = i;
		}
	}
	std::cout << "긴문장:" << maxIdx << std::endl;
	std::cout << "짧은문장:" << minIdx << std::endl;

}