#include <iostream>

int main()
{
	char a, b;
	std::cin >> a >> b;

	for (int j = 0; j < 4; j++) {
		for (char i = a; i <= b; i++) {
			std::cout << i << " ";
		}
		std::cout << "\n";
	}
 return 0;
}