#include <iostream>

int main()
{
	int n;
	int arr[4] = { -1,-1,-1,-1 };

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[0];
		for (int i = 1; i < 4; i++)
		{
			int j = i;
			while (j != 0) {
				if (arr[j - 1] > arr[j])
				{
					int t = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = t;
				}
				j--;
			}
		} 
	}

	std::cout << "±İ" << arr[3] <<"\n";
	std::cout << "Àº" << arr[2] <<"\n";
	std::cout << "µ¿" << arr[1] <<"\n";
}