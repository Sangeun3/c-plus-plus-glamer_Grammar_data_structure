#include <iostream>

int main() 
{
	int n;
	std::cin >> n;
	if (n != 3) {
		std::cout << "3이 아니다\n";
	}
	if (n != 5) {
		std::cout << "5가 아니다\n";
	}
	if (1 < n && n < 10) {
		for (int i = 5; i >= 1; i--) {
			std::cout << i << std::endl;
		}
	}
	
}