#include <iostream>

int main()
{
	
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	int* simData[5];
	simData[0] = &a;
	simData[1] = &b;
	simData[2] = &c;
	simData[3] = &d;
	simData[4] = &e;

	int max = *(simData[0]);
	int min = *(simData[0]);

	for (int i = 1; i < 5; i++)
	{
		if (max < *(simData[i]))
		{
			max = *simData[i];
		}
		if (min > *(simData[i]))
		{
			min = *simData[i];
		}
	}
	std::cout << "MAX: " << max << std::endl;
	std::cout << "MIN: " << min << std::endl;
}