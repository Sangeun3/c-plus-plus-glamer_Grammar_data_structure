#include <iostream>

int main()
{
	struct Train
	{
		int win;
		char name[20];

	};
	int TomLoveWin;
	char TomLoveName[20];
	bool isSameName = 1;

	Train t[3] = { {35,"ABC"}, {100, "BBQ"}, {15, "KFC"} };

	std::cin >> TomLoveWin;
	std::cin >> TomLoveName;

	for (int i = 0; i < 3; i++)
	{
		if (t[i].win == TomLoveWin)
		{
			isSameName = 1;
			for (int j = 0; j < 20; j++)
			{
				if (TomLoveName[j] == '\0' && t[i].name[j] == '\0')
				{
					break;
				}
				if (TomLoveName[j] != t[i].name[j]) 
				{
					isSameName = 0;
					break;
				}
			
			}
			if (isSameName == 1)
			{
				std::cout << i << "번째 칸에 " << t[i].name << ", "
					<< t[i].win << "세가 있습니다.";
				break;
			}
		}
	}

}