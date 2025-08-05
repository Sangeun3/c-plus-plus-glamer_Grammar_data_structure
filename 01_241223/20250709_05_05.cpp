#include <iostream>
void LOT() {
	for (int i = 1; i <= 5; i++) {
		std::cout << i;
	}
}
int main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		LOT();
		std::cout << std::endl;
	}
}