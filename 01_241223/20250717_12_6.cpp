#include <iostream>

char arr[9] = "MINQUEST";

int Length(char n) {

	for (int i = 0; i < 9; i++) {
		if (arr[i] == n) {
			return i;
		}
	}
}


int main() {
	char a, b, c;
	std::cin >> a >> b >> c;

	std::cout << a << "=" << Length(a);
	std::cout << b << "=" << Length(b);
	std::cout << c << "=" << Length(c);

}