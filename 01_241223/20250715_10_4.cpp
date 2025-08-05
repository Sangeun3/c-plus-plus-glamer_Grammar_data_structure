#include <iostream>
void printData(int value);

void even(int value)
{
	printData(value * 2);
}

void odd(int value)
{
	printData(value - 10);
}

void printData(int value)
{
	std::cout << value;
}

int main() {
	int a, b;	
	std::cin >> a >> b;
	if ( (a / b) % 2 == 0) {
		even(a / b);
	}
	else {
		odd(a / b);
	}
	printData(a+b);


	return 0;
}