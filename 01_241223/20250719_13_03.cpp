#include <iostream>
int stringLen(char *arr) {
	for (int i = 0; i < 20; i++) {
		if (arr[i] == '\0') {
			return i;
		}
	}
}
int main() {
	char arr[20];
	std::cin >> arr;

	int stringLength = stringLen(arr);

	std::cout << stringLength << "±ÛÀÚ";
}