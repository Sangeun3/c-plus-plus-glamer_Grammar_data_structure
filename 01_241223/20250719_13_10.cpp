#include <iostream>

int main() {

	char arr[2][7] = { {'A','B','C','D','E','F','G'},
				    	{'4','2','5','1','6','7','3'} };
	char a, b;
	int c, d;
	int sum = 0;
	
	std::cout << "민스 사는데 : ";
	std::cin >> a;

	std::cout << "지효 사는데 : ";
	std::cin >> b;
	
	c = a - 'A';
	d = b - 'A';

	if (c > d) {
		int t;
		t = c;
		c = d;
		d = t;
	}

	for (int i = c + 1; i < d; i++)
	{
		sum += (arr[1][i] -'0');
	}

	std::cout << sum;

	return 0;
}