#include <iostream>

int main()
{
	int find[256] = {};
	char arr[9] = {};
	int max = 0;
	int maxidx = -1;
	std::cin >> arr;

	for (int i = 0; i < 8; i++)
	{
		find[arr[i]]++;
	}

	for (int i = 0; i < 256; i++)
	{
		if (max < find[i])
		{
			max = find[i];
			maxidx = i;
		}
	}

	std::cout << (char)maxidx;
		
}