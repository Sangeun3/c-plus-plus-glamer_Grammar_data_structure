#include <iostream>
#include <string>
//���� �乮��, ª�� ������ ��� 
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
	std::cout << "�乮��:" << maxIdx << std::endl;
	std::cout << "ª������:" << minIdx << std::endl;

}