#include <iostream>
char n;
char a[5] = { 'B','D','5','Q','A' };
char b[5] = { 'Q','E','R','E','F' };

void input() {
	
	std::cin >> n;
}

void output() {
	if ('a' <= n && n <= 'z') {
		for (int i = 0; i < 5; i++) {
			std::cout << a[i];
		}
	}
	else if ('A' <= n && n <= 'Z') {
		for (int i = 0; i < 5; i++) {
			std::cout << b[i];
		}
	}
	else if ('0' <= n && n <= '9') {
		for (char i = 'H'; i >= 'A'; i--) {
			std::cout << i;
		}
	}
}

int main()
{
	
	input();
	output();

	return 0;
}