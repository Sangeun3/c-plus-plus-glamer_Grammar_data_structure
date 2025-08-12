#include <iostream>

int main()
{
	int arr[3][3] = {3, 5, 4, 
	                 1, 1, 2,
	                 6, 3, 7,};
	int yIndex, xIndex;
	std::cin >> yIndex >> xIndex;

	int direct[4][2] = { -1, 0, 
						  1, 0, 
						  0, -1, 
				   		  0, 1 };
	int sum = 0;
	
	for (int y = 0; y < 4; y++)
	{
			int dy = direct[y][0];
			int dx = direct[y][1];
			int yPlusdy = yIndex + dy;
			int xPlusdx = xIndex + dx;
			int arrNumber = arr[yIndex + dy][xIndex + dx];
			if (xPlusdx >= 0 && xPlusdx <= 2 && yPlusdy >= 0 && yPlusdy <= 2)
			{
				sum += arrNumber;
			}
	}

	std::cout << sum;
}