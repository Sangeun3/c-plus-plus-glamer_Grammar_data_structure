#include <iostream>

int main() {
	char arr[6] = { 'A', 'F', 'G', 'A', 'B', 'C' };
	char a, b;

	std::cin >> a >> b;
	
	int count1 = 0;
	int count2 = 0;

	for (int i = 0; i < 6; i++) {
		if (arr[i] == a)
		{
			count1++;
		}
		else if (arr[i] == b)
		{
			count2++;
		}
	}

	if (count1 > 0 && count2 > 0) {
		std::cout << "�� 2��";
	}
	else if ((count1 > 0 && count2 == 0) || (count1 == 0 && count2 > 0)) {
		std::cout << "�� 1��";
	}
	else {
		std::cout << "�� 0��";
	}
	
	return 0;
}