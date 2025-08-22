#include <iostream>

int main()
{
	char a[3][11];

	for (int i = 0; i < 3; i++)
	{
		std::cin >> a[i];
	}
	
	if (strlen(a[1]) > strlen(a[2]))
	{
		char temp[11];
		strcpy_s(temp, a[1]);
		strcpy_s(a[1], a[0]);
		strcpy_s(a[0], temp);
	}
	else
	{
		char temp[11];
		strcpy_s(temp, a[2]);
		strcpy_s(a[2], a[0]);
		strcpy_s(a[0], temp);
	}

	for (int i = 0; i < 3; i++)
	{
		std::cout << a[i] << std::endl;
	}
}