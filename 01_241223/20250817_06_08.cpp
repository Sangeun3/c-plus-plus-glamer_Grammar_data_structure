#include <iostream>

int main()
{
	int nowYX[2] = { 5,5 };
	int num = 0;
	char operate[10];
	int direct[4][2] = { -1, 0,
						 1, 0,
						 0, 1,
						 0, -1, };
	std::cin >> num;
	for (int i = 0; i < num; i++)
	{
		std::cin >> operate;
		if (strcmp(operate, "up") == 0)
		{
			nowYX[0] += direct[0][0];
			nowYX[1] += direct[0][1];
		}
		else if (strcmp(operate, "down") == 0)
		{
			nowYX[0] += direct[1][0];
			nowYX[1] += direct[1][1];
		}
		else if (strcmp(operate, "right") == 0)
		{
			nowYX[0] += direct[2][0];
			nowYX[1] += direct[2][1];
		}
		else if (strcmp(operate, "left") == 0)
		{
			nowYX[0] += direct[3][0];
			nowYX[1] += direct[3][1];
		}
		else if (strcmp(operate, "click") == 0)
		{
			std::cout << nowYX[0] << "," << nowYX[1] << std::endl;
		}
	}
	
}