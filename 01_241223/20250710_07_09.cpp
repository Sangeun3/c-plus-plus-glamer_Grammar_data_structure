#include <iostream>

int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++) {
		std::cin >> arr[i];
		if (arr[i] >= 70) {
			std::cout << i+1 <<"�� �����" << arr[i] << "�� PASS";
		}
		else if (arr[i] >= 50)
		{
			std::cout << i+1 << "�� �����" << arr[i] << "�� RETEST";
		}
		else {
			std::cout << i+1 << "�� �����" << arr[i] << "�� FAIL";
		}
	}

	
	return 0;
}