#include <iostream>

bool isExist(char arr[][3], char ch)
{
	for (int y = 0; y < 2; y++) 
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == ch) {
				return true;
			}
		}
	}
	return false;
}
int main() {
	char arr[2][3] = { 'G','K','T','P','A','C' };
	char a, b;
	std::cin >> a >> b;
	if (isExist(arr, a) && isExist(arr, b))
	{
		std::cout << "��߰�";
	}
	else if (isExist(arr, a) || isExist(arr, b))
	{
		std::cout << "�߹߰�";
	}
	else
	{
		std::cout << "�̹߰�";
	}
	return 0;
}