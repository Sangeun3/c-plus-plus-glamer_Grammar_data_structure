#include <iostream>
bool isExist(int find, int arr[3][3]) {
	
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == find)
			{
				return true;
			}
		}
	}
	return false;

}
void Cinfind(int* find)
{
	for (int i = 0; i < 3; i++)
	{
		std::cin >> find[i];
	}
}
void PrintExist(int* find, int arr[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << find[i] << " : ";
		if (isExist(find[i], arr)) {
			std::cout << "존재\n";
		}
		else
		{
			std::cout << "미발견\n";
		}
	}
}
int main()
{
	int arr[3][3] = { 3,5,9,4,2,1,5,1,5 };

	int find[3];

	Cinfind(find);
	PrintExist(find, arr);

	return 0;
}