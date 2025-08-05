#include <iostream>

int main() {
	int vect[7] = { 3,5,1,1,2,3,2 };
	int arr[4];

	for (int i = 0; i < 4; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < 4; i++)
	{
		int counting = 0;
		for (int y = 0; y < 7; y++) 
		{
			if (arr[i] == vect[y])
			{
				counting++;
			}

		}
		std::cout << arr[i] << "=";
		std::cout << counting << "°³" << "\n";
	}
}