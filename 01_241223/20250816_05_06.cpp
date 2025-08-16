#include <iostream>

void print(int a_, int b_)
{
	std::cout << a_ << " ";
	if (a_ == b_)
	{
		return;
	}
	print(a_ + 1, b_);
	std::cout << a_ << " ";
}
int main()
{
	int a, b;
	std::cin >> a >> b;
	print(a, b);


}