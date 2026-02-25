#include <iostream>

int gcd(int n1, int n2)
{
	return (n1 % n2 == 0) ? n2 : gcd(n2, n1 % n2);
}
int lcd(int n1, int n2, int gcdNum)
{
	return n1 * n2 / gcdNum;
}
int main()
{
	int n1, n2;
	std::cin >> n1 >> n2;
	int gcdNum = gcd(n1, n2);
	std::cout << gcdNum << "\n";
	std::cout << lcd(n1, n2, gcdNum);
}