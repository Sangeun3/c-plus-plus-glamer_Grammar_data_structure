#include <iostream>

int main() {
	char a[10];
	char b[10];
	int alen;
	bool mirror =true;
	std::cin >> a;
	std::cin >> b;

	for (int i = 0; i < 10; i++) {
		if (a[i] == '\0') {
			alen = i;
			break;
		}
	}

	for (int i = 0; i < alen; i++) {
		if (a[i] != b[alen - i -1]) {
			mirror = false;
			std::cout << "�ſ﹮��ƴ�";
			return 0;
		}
	}
	std::cout << "�ſ﹮��";


	return 0;
}