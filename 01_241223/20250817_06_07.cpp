#include <iostream>

void func(int len)
{
	std::cout << len << " ";
	if (len == 1)
		return;
	func(len - 1);
	std::cout << len << " ";
}

int main()
{
	char a[256];
	std::cin >> a;
	int alen = strlen(a);

	func(alen);
}