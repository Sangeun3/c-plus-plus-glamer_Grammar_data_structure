#include <iostream>

int main() {
	int arr[7] = { 3,4,1,3,2,7,3 };
	int n;
	bool flag = false;

	std::cin >> n;
	for (int i = 0; i < 7; i++)
	{
		if (arr[i] == n) {
			flag = true;
			break;
		}
	}

	if (flag) {
		std::cout << "�߰�";
	}
	else {
		std::cout << "�̹߰�";
	}
	return 0;
}