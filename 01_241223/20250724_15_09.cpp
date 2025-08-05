#include <iostream>

int main() {

	char a[11];
	std::cin >> a;
	bool gaguri = true;
	

	for (int i = 0; i < 10; i++)
	{
		if (a[i+1] == '\0') {
			break;
		}

		if ('A' <= a[i] && a[i] <= 'Z')
		{
			if (!('a' <= a[i + 1] && a[i + 1] <= 'z')) {
				gaguri = false;
				break;
			}
		}

		else {
			if (!('A' <= a[i + 1] && a[i + 1] <= 'Z')) {
				gaguri = false;
				break;
			}
		}
		
	}

	if (gaguri) {
		std::cout << "개구리문장";
	}
	else {
		std::cout << "일반문장";
	}
	return 0;

}