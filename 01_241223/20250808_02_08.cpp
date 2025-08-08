#include <iostream>

void SetTarget(int* target)
{
	for (int i = 0; i < 3; i++)
	{
		std::cin >> target[i];
	}
}

void CountTarget(int* counting, int* target, int* p)
{
	for (int i = 0; i < 3; i++)
	{
		counting[i] = 0;
		for (int j = 0; j < 12; j++)
		{
			if (target[i] == *(p + j))
			{
				counting[i]++;
			}
		}
	}
}

int FindCountMax(int* counting)
{
	int max = counting[0];
	for (int i = 1; i < 3; i++)
	{
		if (max < counting[i])
		{
			return i;
		}
	}
	return 0;
}
int main()
{
	int vect[3][4] = { 2,3,4,2,
					  2,1,4,2,
					  0,1,5,9 };
	int target[3];
	int counting[3];
	int maxIndex=0;
	int* p = &vect[0][0];

	SetTarget(target);
	CountTarget(counting, target, p);
	maxIndex = FindCountMax(counting);

	

	std::cout << target[maxIndex];
	return 0;
}