#include <iostream>

int main()
{
	char arr[6] = { 'A', 'F', 'G', 'A', 'B', 'C' };

	char a, b;
	std::cin >> a >> b;
	
	bool exist1 = false;
	bool exist2 = false;

	for (int i = 0; i < 6; i++) {
		if (arr[i] == a) {
			exist1 = true;
		}
		if (arr[i] == b) {
			exist2 = true;
		}
	}

	if (exist1 && exist2) {
		std::cout << "와2개";
	}
	else if ((exist1 && !exist2) || (!exist1 && exist2))
	{
		std::cout << "오 1개";
	}
	else {
		std::cout << "우 0개";
	}
}