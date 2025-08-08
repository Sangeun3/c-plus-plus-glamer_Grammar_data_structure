#include <iostream>

bool isSame(char* a, char* b) {
	bool isSame = 1;
	for (int i = 0; i < 256; i++)
	{
		if (a[i] != b[i])
		{
			isSame = 0;
			break;
		}
		if (a[i] == '\0')
		{
			break;
		}
	}
	return isSame;
}

int main()
{
	char a[256];
	char b[256];

	std::cin >> a;
	std::cin >> b;

	if (isSame(a, b)) { std::cout << "동명"; }
	else { std::cout << "남남"; }
	return 0;
}