#include <iostream>
#include <math.h>

bool arr[101] = { false };
bool havePerfectSquareNumber = false;

void findNum(int M, int N)
{
	int num = (int)sqrt(M);
	
		for (int i = num; i <= sqrt(N); i++)
		{
			if (sqrt(M) <= i && i <= sqrt(N))
			{
				arr[i] = true;
				havePerfectSquareNumber = true;
			}
		}
		if (havePerfectSquareNumber == false)
			std::cout << -1;
}

int addPerfect()
{
	int sum = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (arr[i] == true)
		{
			sum += i * i;
		}
	}
	return sum;
}

int findMin()
{
	int min = -1;
	for (int i = 0; i <= 100; i++)
	{
		if (arr[i] == true)
		{
			min = i * i;
			break;
		}
	}
	return min;
}

int main()
{
	int M, N;
	std::cin >> M;
	std::cin >> N;

	findNum(M, N);

	if (havePerfectSquareNumber == true) {
		int sum = addPerfect();
		std::cout << sum << std::endl;
		int min = findMin();
		std::cout << min;
	}

}