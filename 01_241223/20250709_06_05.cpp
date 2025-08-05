#include <iostream>

int main()
{
	char arr[4] = { 'B','T','K','A' };
	int a;
	std::cin >> a;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < 4; j++) {
			std::cout << arr[j] << " ";
		}
		std::cout << "\n";
	}
	
	return 0;
}