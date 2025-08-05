#include <iostream>

void removeCh(char* a, int idx) {
	for (int i = idx; i < 7; i++) {
		int temp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = temp;
	}
	std::cout << a;
}

int main() {
	char a[8];
	std::cin >> a;
	int idx;
	std::cin >> idx;

	removeCh(a, idx);

}