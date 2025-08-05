#include <iostream>

int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++) {
		std::cin >> arr[i];
		if (arr[i] >= 70) {
			std::cout << i+1 <<"번 사람은" << arr[i] << "점 PASS";
		}
		else if (arr[i] >= 50)
		{
			std::cout << i+1 << "번 사람은" << arr[i] << "점 RETEST";
		}
		else {
			std::cout << i+1 << "번 사람은" << arr[i] << "점 FAIL";
		}
	}

	
	return 0;
}