#include <iostream>

int main() {
	char a[7] = { 'A','B','C','Z','E','T','Q' };
	char b[5];
	

	for (int i = 0; i < 5; i++)
	{
		std::cin >> b[i];
	}

	for (int y = 0; y < 5; y++) {
		bool city = false;
		std::cout << b[y] << "=";

		for (int x = 0; x < 7; x++) {
			if (a[x] == b[y])
			{
				city = true;
				break;
			}
		}

		if (city) {
			std::cout << "마을사람\n";
		}
		else {
			std::cout << "외부사람\n";
		}
	}
	
	return 0;
}