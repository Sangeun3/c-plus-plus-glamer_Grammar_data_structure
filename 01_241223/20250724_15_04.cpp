#include <iostream>

int main() {
	char a[7];
	char b[7];
	bool same = true;
	int alen;
	int blen;


	std::cin >> a;
	std::cin >> b;

	for (int i = 0; a[i] != '\0'; i++) 
	{
		alen = i;
	}

	for (int i = 0; b[i] != '\0'; i++)
	{
		blen = i;
	}

	if (alen != blen) {
		same = false;
	}
	else
	{
		for (int i = 0; i < 7; i++) {
			if (a[i] != b[i]) {
				same = false;
				break;
			}
		}
	}

	if (same == true) {
		std::cout << "같음";
	}
	if (same == false) {
		std::cout << "다름";
	}


	return 0;
}