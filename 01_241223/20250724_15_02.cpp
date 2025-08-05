#include <iostream>

int main() {

	int arr[6] = { 10,50,40,20,30,40 };

	int b[6];
	for (int i = 0; i < 6; i++)
	{
		std::cin >> b[i];
	}

	for (int y = 0; y < 6; y++) {
		int counting = 0;
		for (int x = 0; x < 6; x++) {
			if (b[y] < arr[x]) {
				counting++;
			}
		}
		std::cout << b[y] << "=" << counting << "°³" << "\n";
	}
}