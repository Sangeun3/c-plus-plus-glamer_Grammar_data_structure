#include <iostream>

int main() {
	char n[11];
	char a, b, c;
	std::cin >> n;
	std::cin >> a >> b >> c;
	int len;
	int ai = 0;
	int bi = 0;
	int ci = 0;


	for (int i = 0; i < 11; i++) {
		if (n[i] == '\0') {
			len = i;
			break;
		}
	}

	for (int i = 0; i < len; i++) {
		if (n[i] == a) {
			ai++;
		}
		else if (n[i] == b) {
			bi++;
		}
		else if (n[i] == c) {
			ci++;
		}
	}

	std::cout << a << "=" << ai;
	std::cout << b << "=" << bi;
	std::cout << c << "=" << ci;


}