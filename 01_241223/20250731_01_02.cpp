#include <iostream>

int findCharCount(char str[4][4]);

int main() {
	char arr[4][4] = { 'A','B','K','T',
						  'K','F','C','F',
						  'B','B','Q','Q',
						  'T','P','Z','F' };
	
	class carr {
		
	public:
		char a;
		char b;
		int c = 0;
		int d = 0;
		int findCharCount(char str[4][4])
		{
			for (int y = 0; y < 4; y++)
			{
				for (int x = 0; x < 4; x++)
				{
					if (str[y][x] == a) {
						c++;
					}
					else if (str[y][x] == b)
					{
						d++;
					}
				}
			}
			std::cout << c + d;
			return 0;
		}

	

	};
	carr berry;
	std::cin >> berry.a >> berry.b;
	berry.findCharCount(arr);
}


