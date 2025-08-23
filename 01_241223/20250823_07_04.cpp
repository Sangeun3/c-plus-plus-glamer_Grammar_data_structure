#include <iostream>
#include <cstdlib>
//Up & Down 


int main()
{
	int floor = 1;
	char a[5];
	for (size_t i = 0; i < 5; i++)
	{
		std::cin >> a;

		if (strcmp(a, "up") == 0)
		{
			floor++;
		}
		else if (strcmp(a, "down") == 0)
		{
			floor--;
		}
	}

	if (floor <= 0)
	{
		std::cout << "B" << abs(floor - 1) << std::endl;
	}
	else
	{
		std::cout << floor << std::endl;
	}

}