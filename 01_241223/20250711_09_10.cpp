#include <iostream>

void checkChar(char a) {
	if ('A' <= a && a <= 'Z') {
		std::cout << "��";
	}
	else if ('a' <= a && a <= 'z') {
		std::cout << "��";
	}
}

int main() {
	char arr[5];
	for (int i = 0; i < 5; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < 5; i++) {
		checkChar(arr[i]);
	}
	return 0;
}