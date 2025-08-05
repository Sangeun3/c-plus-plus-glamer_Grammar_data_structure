#include <iostream>

int INPUT() {
	int n;
	std::cin >> n;
	return n;
}
void countDown(int n) {
	for (int i = n; i >= 1; i--) {
		std::cout << i;
	}
}
int main() {
	int n = INPUT();
	countDown(n);
	return 0;
}