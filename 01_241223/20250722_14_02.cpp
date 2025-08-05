#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int i = 0;
	while (i < 3) {
		int j = 0;
		while (j < 5) {
			std::cout << n;
			j++;
		}
		std::cout << std::endl;
		i++;
	}
}