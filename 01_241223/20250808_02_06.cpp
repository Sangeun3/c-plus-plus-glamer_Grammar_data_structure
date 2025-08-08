#include <iostream>

int main()
{
	int arr[3][3] = { 4 , 5 , 6,
					 1 , 2 , 3,
					 2 , 9 , 1 };
	int masking[3][3] = { 1, 0, 1,
						  0, 1, 1,
						  1, 0 , 0 };
 
	int n;
	std::cin >> n;
	int length = 3;
	bool isExist = 0;
	for (int y = 0; y < length; y++)
	{
		for (int  x = 0; x < length; x++)
		{
			if (masking[y][x] == 1 && arr[y][x] ==n)
			{
				isExist = 1;
				break;
			}
		}
		if (isExist == 1) break;
	}

	if (isExist == 1)
	{
		std::cout << n << " 존재";
	}
	else
	{
		std::cout << n << " 없음"; 
	}
	return 0;
}