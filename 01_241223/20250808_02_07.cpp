#include <iostream>

int CountTarget(char* vect, char* target)
{
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (target[i] == vect[j])
			{
				count++;
				break;
			}
		}
	}
	return count;
}

int main()
{
	char arr[10] = { 'A', 'B', 'C','T','G','F','Z','R','B','Z' };
	char target[4];
	

	for (int i = 0; i < 4; i++)
	{
		std::cin >> target[i];
	}

	std::cout << CountTarget(arr, target);
	return 0;
}