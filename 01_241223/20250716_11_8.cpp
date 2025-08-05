#include <iostream>

int main() {
	char arr[13] = { 'S','t','r','u','c','t','P','o','i','n','t','e','r' };
	char a;
	std::cin >> a;

	bool flag =false;
	for (int i = 0; i < 13; i++) {
		if (a == arr[i]) {
			flag = true;
			break;
		}
	}

	if (flag) {
		std::cout << "발견";
	}
	else {
		std::cout << "미발견";
	}
	return 0;
}