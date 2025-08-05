#include <iostream>

char scoring() {
	int n;
	std::cin >> n;
	if (n >= 90) {
		return 'A';
	}
	else if (n >= 80) {
		return 'B';
	}
	else if(n >= 70) {
		return 'C';
	}
	else {
		return 'D';
	}

}
int main() {
	char ch = scoring();
	std::cout << ch;
	return 0;
}