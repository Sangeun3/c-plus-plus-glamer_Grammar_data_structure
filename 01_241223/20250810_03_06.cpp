#include <iostream>

int main()
{
	char arr[16] = "JKAABBBCCAAHHGI";
	char a[256] = {};

	for (int i = 0; i < 16; i++)
	{
		a[arr[i]]++;
	}

	for (int i = 0; i < 256; i++)
	{
		for (int j = 0; j < a[i]; j++)
		{
			std::cout << char(i);
		}
	}
	std::cout << std::endl;

	for (int i = 0; i < 256; i++)
	{
		for (int x = 0; x < 16; x++)
		{
			if (arr[x] == i)
			{
				std::cout << arr[x];
			}
		}
	}
}