#include <iostream>

int main()
{
	char arr[4][5] = { '-','-','-','-','-',
					   '-','-','-','-','-',
					   '-','-','-','-','-',
					   '-','-','-','-','-', };
	int y1, y2, x1, x2;
	std::cin >> y1 >> x1;
	std::cin >> y2 >> x2;

	int Direct[8][2] = { -1,-1, 
						 -1, 0, 
					 	 -1, 1, 
					   	  0, 1,
				 		  1, 1, 
						  1, 0, 
						  1,-1, 
					      0,-1, };

	for (int i = 0; i < 8; i++)
	{
		int dy1 = y1 + Direct[i][0];
		int dx1 = x1 + Direct[i][1];
		int dy2 = y2 + Direct[i][0];
		int dx2 = x2 + Direct[i][1];

		if (0 <= dy1 && dy1 <= 3 && 0 <= dx1 && dx1 <= 4)
		{
			arr[dy1][dx1] = '#';
		}
		if (0 <= dy2 && dy2 <= 3 && 0 <= dx2 && dx2 <= 4)
		{
			arr[dy2][dx2] = '#';
		} 
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			std::cout << arr[y][x]<<" ";
		}
		std::cout << std::endl;
	}
}