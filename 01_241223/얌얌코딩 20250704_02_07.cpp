#include <iostream>

int main() {
	using namespace std;

	int a, b;
	std::cin >> a >> b;
	if (a > b) {
		cout << "a가b보다크다";
	}
	else {
		cout << "b가a보다같거나크다";
	}
}