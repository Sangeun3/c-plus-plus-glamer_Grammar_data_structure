#include <iostream>

int main()
{
	int people[65535] = {};
	int log[15] = { 1,2,3,4,5,2,3,4,5,3,4,5,4,5,5 };
	int max = 0;
	int maxidx = -1;
	for (int i = 0; i < 15; i++)
	{
		people[log[i]]++;
	}

	for (int i = 0; i < 65535; i++)
	{
		if (max < people[i])
		{
			max = people[i];
			maxidx = i;
		}
	}
	std::cout << maxidx;
	return 0;
}