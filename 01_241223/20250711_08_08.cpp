#include <iostream>


int main()
{
	char arr[6] = { '#','-','#','-','#','#' };
	for (int i = 0; i < 6; i++) {
		if (arr[i] == '#') {
			std::cout << "¼¥";
		}
		else if (arr[i] == '-') {
			std::cout << "¹«";
		}
	}

	return 0;
}