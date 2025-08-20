#include <iostream>

void func(int x, int sum)
{
	sum += x % 10;
	
	if (x / 10 == 0) 
	{ 
		std::cout << sum; 
		return; 
	}
	func(x / 10, sum);
}
 
int main()
{
	int x;
	int sum = 0;
	std::cin >> x;

	func(x, sum);
}