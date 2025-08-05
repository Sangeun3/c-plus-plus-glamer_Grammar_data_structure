#include <iostream>
bool isExist(char* a, char ch)
{
	for (int i = 0; i < 4; i++) {
		if (a[i] == ch) {
			return true;
		}
	}
	return false;
}
int main() {
	char a[4] = { 'M','T','K','C' };
	char ch;
	std::cin >> ch;
	if (isExist(a, ch)) {
		std::cout << "발견";
	}
	else {
		std::cout << "미발견";
	}

	return 0;
}