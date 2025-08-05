#include <iostream>
int a, b;
void input() {
	std::cin >> a >> b;
}

void output() {
	int i = 5;
	while (i <= a + b)
	{
		std::cout << i << " ";
		i++;
	}
}

int main()
{
	input();
	output();

	return 0;
}