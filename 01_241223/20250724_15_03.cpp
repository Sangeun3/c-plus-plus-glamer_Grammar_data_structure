#include <iostream>

int main() {
	char a[6];
	char b[6];
	char c[11];

	int alen;
	int blen;

	std::cin >> a;
	std::cin >> b;

	for (int i = 0; i < 6; i++) {
		if (a[i] == '\0') {
			alen = i;
		}
		if (b[i] == '\0') {
			blen = i;
		}
	}

	for (int y = 0; y < alen; y++)
	{
		for (int x = y + 1; x < alen; x++)
		{
			if (a[y] > a[x]) {
				int t;
				t = a[y];
				a[y] = a[x];
				a[x] = t;
			}
		}
	}

	for (int y = 0; y < blen; y++)
	{
		for (int x = y + 1; x < blen; x++)
		{
			if (b[y] > b[x]) {
				int t;
				t = b[y];
				b[y] = b[x];
				b[x] = t;
			}
		}
	}

		int i = 0;
		for (int j = 0; j < alen; j++) {
			c[i] = a[j];
			i++;
		}
		for (int j = 0; j < blen+1; j++) {
			c[i] = b[j];
			i++;
		}

		

		std::cout << c;
	
}