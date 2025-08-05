#include <iostream>

int main() {
	char arr[256];
	std::cin >> arr;
	int chLen;

	for (int i = 0; i < 256; i++) {
		if (arr[i] == '\0') {
			chLen = i;
			break;
		}
	}
	for (int j = 0; j < chLen; j++) {
		for (int i = 0; i < chLen - j - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				int temp;
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	for (int i = 0; i < chLen; i++) {
		std::cout << arr[i];
	}
	return 0;
}