#include <iostream>

char findChar(char* str);
int main() {
	char arr[3][10];
	for (int i = 0; i < 3; i++) {
		std::cin >> arr[i];
		
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << findChar(arr[i]);
	}
}

char findChar(char* str)
{
	for (int i = 10; i >= 0; i--) {
		if (str[i] == '\0') {
			return str[i - 1];
		}
		
	}
	return '?';
}
