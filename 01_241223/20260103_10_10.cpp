#include <iostream>

int main()
{
	std::string BFstring;
	std::cin >> BFstring;

	int a=0;
	for (int i = 0; (BFstring[i]) != '\0'; i++)
	{
		if(BFstring[i] == 'B')
		{
			a++;
		}
		else if(BFstring[i] == 'F')
		{
			a--;
			if(a<0)
			{
				std::cout << "Â¦ÀÌ ¾È ¸ÂÀ½";
				return 0;
			}
		}
	}
	if (a == 0) std::cout << "Â¦ÀÌ ¸ÂÀ½";
	else std::cout << "Â¦ÀÌ ¾È ¸ÂÀ½";
}