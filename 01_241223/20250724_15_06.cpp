#include <iostream>

int main() {

	int arr[6];
	for (int i = 0; i < 6; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < 5; i++) {
		if (arr[i] - arr[i + 1] >= 3 || arr[i] - arr[i + 1] <= -3) {
			std::cout << "���ġ�ʿ�";
			return 0;
		}
	}

	std::cout << "�Ϻ��ѹ�ġ";
	return 0;
}